import serial
import time

with serial.Serial('/dev/ttyACM0', timeout=10) as ser:
  print(ser.readline())
  while(True):
      send = input()
      if (send == 'quit'):
          break
      ser.write(send.encode('utf-8'))
      print(ser.readline())
