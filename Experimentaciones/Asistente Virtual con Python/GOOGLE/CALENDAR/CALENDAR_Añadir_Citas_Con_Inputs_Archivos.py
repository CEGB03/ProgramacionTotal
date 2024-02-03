from pprint import pprint
from GOOGLE.Google import Create_Service, convert_to_RFC_datetime
from datetime import datetime
import pytz

CLIENT_SECRET_FILE = "../trchatbot.json"
API_NAME = "calendar"
API_VERSION = "v3"
SCOPES = ["https://www.googleapis.com/auth/calendar"]

service = Create_Service(CLIENT_SECRET_FILE, API_NAME, API_VERSION, SCOPES)

# id de calendario de impuestos
calendar_id = 'c_870127e8ce06d54f3c6b5468e68af319acebf13940b23c25589f349b037cdd7a@group.calendar.google.com'

# Solicitar el nombre del archivo desde el usuario
file_name = input("Ingrese el nombre del archivo (con extensión, por ejemplo, datos sin .txt): ")
file_name += ".txt"

print("Se procesara la agenda de pagos " + file_name)

# Leer datos desde el archivo de texto
with open(file_name, 'r') as file:
    for line in file:
        # Dividir la línea en campos
        fields = line.strip().split()

        # Extraer valores de campos
        year, month, day, Impuesto, *description = fields

        # Crear eventos con los valores leídos desde el archivo
        events = {
            'start': {
                "dateTime": convert_to_RFC_datetime(int(year), int(month), (int(day) - 1), 19, 45),
                "timeZone": "America/Argentina/Buenos_Aires"
            },
            "end": {
                "dateTime": convert_to_RFC_datetime(int(year), int(month), (int(day) - 1), 20, 45),
                "timeZone": "America/Argentina/Buenos_Aires"
            },
            "summary": f"Vence {Impuesto}",
            "description": ' '.join(description),  # Si hay más de una palabra en la descripción
            "colorId": 11,
            "status": "confirmed",
            "location": "Argentina",
            "attachments": [
                {
                    "fileUrl": "https://drive.google.com/drive/u/0/folders/1Y3kZ0Z0wyItBYltDy5RCbtpKQ-xOjBnc",
                    "title": "A pagar!"
                }
            ],
            # No incluir "attendees" si no necesitas asistentes
        }

        maxAttendees = 5
        sendNotification = True
        sendUpdate = "none"
        supportsAttachments = True

        response = service.events().insert(
            calendarId=calendar_id,
            maxAttendees=maxAttendees,
            sendNotifications=sendNotification,
            sendUpdates=sendUpdate,
            supportsAttachments=supportsAttachments,
            body=events
        ).execute()

        pprint(response)

        eventId = response["id"]
