from pprint import pprint
from GOOGLE.Google import Create_Service, convert_to_RFC_datetime
from datetime import datetime, timedelta
import pytz

CLIENT_SECRET_FILE = "../trchatbot.json"
API_NAME = "calendar"
API_VERSION = "v3"
SCOPES = ["https://www.googleapis.com/auth/calendar"]

service = Create_Service(CLIENT_SECRET_FILE, API_NAME, API_VERSION, SCOPES)

# id de calendario de impuestos
calendar_id = 'c_870127e8ce06d54f3c6b5468e68af319acebf13940b23c25589f349b037cdd7a@group.calendar.google.com'

# Solicitar entrada del usuario para la fecha y el resumen
year = int(input("Ingrese el año: "))
month = int(input("Ingrese el mes: "))
day = int(input("Ingrese el día: "))
impuesto = input("Ingrese el nombre del impuesto: ")
monto = input("Ingrese el monto del impuesto: ")

# Crear eventos con los valores ingresados
events = {
    'start': {
        "dateTime": convert_to_RFC_datetime(year, month, day, 19, 45),
        "timeZone": "America/Argentina/Buenos_Aires"
    },
    "end": {
        "dateTime": convert_to_RFC_datetime(year, month, day, 20, 45),
        "timeZone": "America/Argentina/Buenos_Aires"
    },
    "summary": "Vence " + impuesto,
    "description": monto,
    "colorId": 11,
    "status": "confirmed",
    "location": "Argentina",
    "attachments": [
        {
            "fileUrl": "https://drive.google.com/drive/u/0/folders/1Y3kZ0Z0wyItBYltDy5RCbtpKQ-xOjBnc",
            "title": "A pagar!"
        }
    ],
    "attendees": [
        {
            "comment": "paga joder",
            "email": "cgomez453@alumnos.iua.edu.ar",
            "responseStatus": "accepted"
        }
    ],
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