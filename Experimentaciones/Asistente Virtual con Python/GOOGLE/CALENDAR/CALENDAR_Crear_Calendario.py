from pprint import pprint
from GOOGLE.Google import Create_Service
from googleapiclient.errors import HttpError

CLIENT_SECRET_FILE = "../trchatbot.json"
API_NAME = "calendar"
API_VERSION = "v3"
SCOPES = ["https://www.googleapis.com/auth/calendar"]

service = Create_Service(CLIENT_SECRET_FILE, API_NAME, API_VERSION, SCOPES)

request_body = {
    "summary" : "Calendario Impuestos"
}

"""    CREAR CALENDARIOS    """
try:
    response = service.calendars().insert(body=request_body).execute()
    print(response)
except HttpError as e:
    print(f"Error al crear el calendario: {e}")

"""   ELIMINAR CALENDARIOS  """

#service.calendars().delete(calendarId = "id_calendar").execute()