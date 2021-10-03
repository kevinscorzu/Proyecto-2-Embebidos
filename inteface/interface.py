# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


import PySimpleGUI as sg
import serial


def serializeTime(hour, minutes, seg, confType):

    result = []

    hour = int(hour)
    minutes = int(minutes)
    seg = int(seg)

    result.append(str(hour // 10))
    result.append(str(hour % 10))
    result.append(str(minutes // 10))
    result.append(str(minutes % 10))
    result.append(str(seg // 10))
    result.append(str(seg % 10))
    result.append(confType)

    return result

sg.theme('BluePurple')

layout = [[sg.Text('Hora:'),
           sg.Text(size=(15, 1), key='-OUTPUT1-')],
          [sg.Input(key='hora')],
          [sg.Text('Minutos:'),
           sg.Text(size=(15, 1), key='-OUTPUT2-')],
          [sg.Input(key='minutos')],
          [sg.Text('Segundos:'),
           sg.Text(size=(15, 1), key='-OUTPUT3-')],
          [sg.Input(key='segundos')],

          [sg.Button('Tiempo'), sg.Button('Alarma')]]

window = sg.Window('Configuración de dispositivo', layout)

ser = serial.Serial("COM5")
ser.baudrate = 115200


while True:
    event, values = window.read()

    if event in (None, 'Exit'):
        break
   # try:
    if int(values['hora']) > 24 or int(values['hora']) < 0 or (
            int(values['minutos']) > 60 or int(values['minutos']) < 0) or (
            int(values['segundos']) > 60 or int(values['segundos']) < 0):
        sg.popup_error(f'Error', 'Datos invalidos' )
    else:
        if event == 'Tiempo':     

            toSend = serializeTime(values['hora'], values['minutos'], values['segundos'], 'C')

            print(event)
            print(values['hora'])
            print(values['minutos'])
            print(values['segundos'])

            for x in toSend:
                ser.write(x.encode())
                print(ser.read())

            
            
        elif event == 'Alarma':

            toSend = serializeTime(values['hora'], values['minutos'], values['segundos'], 'A')

            print(event)
            print(values['hora'])
            print(values['minutos'])
            print(values['segundos'])

            for x in toSend:
                ser.write(x.encode())
                print(ser.read())
   # except:
        #sg.popup_error(f'Error', 'Solo se permiten datos numericos')


window.close()
