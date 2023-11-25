import serial
import tkinter as tk
from tkinter import Pack
import threading
color=""
value=""

ser = serial.Serial("COM3", 9600)


        
root = tk.Tk()

root.title("Voltage meter 0.1")

root.geometry("300x300")

root.configure(background='black')

voltage = tk.Label(root, bg="black", text="voltage", font=("Arial", 16))

voltage.configure(bg='black', fg='white')

voltage.pack()


voltage1 = tk.Label(root, text=value, font=("Arial", 16))
voltage1.configure(bg='black', fg='white')
voltage1.pack()
def read():
    threading.Timer(0.5, read).start()
    value = ser.read()
    voltage1.config(text=value)
    

trigger = tk.Button(root, text="Read", font=("Arial"), command=read)


trigger.pack()

root.mainloop()

        


    



