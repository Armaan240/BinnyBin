import serial
import os
import time
PORT = "COM11"
BAUD = 9600
ser = serial.Serial(PORT, BAUD, timeout=1)
time.sleep(2) 
while True:
    line = ser.readline().decode().strip()
    if line == "TRIGGER":
        print("Arduino said TRIGGER → Emptying Recycle Bin...")
        os.system(r"C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe -Command Clear-RecycleBin -Force")
