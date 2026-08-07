import tkinter as tk
import subprocess

def run_backend():
    subprocess.run(["./cpp/main"])

root = tk.Tk()
root.title("Smart Home Dashboard")

# Buttons for devices
btn_light = tk.Button(root, text="Toggle Light", command=run_backend)
btn_light.pack(pady=10)

btn_fan = tk.Button(root, text="Toggle Fan", command=run_backend)
btn_fan.pack(pady=10)

btn_ac = tk.Button(root, text="Toggle AC", command=run_backend)
btn_ac.pack(pady=10)

btn_door = tk.Button(root, text="Toggle DoorLock", command=run_backend)
btn_door.pack(pady=10)

root.mainloop()
