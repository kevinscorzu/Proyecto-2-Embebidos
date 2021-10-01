# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


import PySimpleGUI as sg

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

while True:
    event, values = window.read()


    if event in (None, 'Exit'):
        break
    try:
        if int(values['hora']) > 24 or int(values['hora']) < 0 or (
                int(values['minutos']) > 60 or int(values['minutos']) < 0) or (
                int(values['segundos']) > 60 or int(values['segundos']) < 0):
            sg.popup_error(f'Error', 'Datos invalidos' )
        else:
            if event == 'Tiempo':

                print(event)
                print(values['hora'])
                print(values['minutos'])
                print(values['segundos'])
            elif event == 'Alarma':
                print(event)
                print(values['hora'])
                print(values['minutos'])
                print(values['segundos'])
    except:
        sg.popup_error(f'Error', 'Solo se permiten datos numericos')


window.close()
