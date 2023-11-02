import eel
import serial
import time

eel.init('web')
arduino = serial.Serial(port="COM3", baudrate=19200, timeout=.1)


@eel.expose
def ledOn():
    print('Led turned On')
    arduino.write(bytes('1', 'utf-8'))


@eel.expose
def ledOff():
    print('Led turned Off')
    arduino.write(bytes('0', 'utf-8'))

eel.start('index.html')
