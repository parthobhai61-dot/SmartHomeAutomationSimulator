import tkinter as tk
import subprocess

def toggle_light():
    subprocess.run(["./cpp/main"])   # C++ compiled binary run 
    print("Light toggled via C++ backend")

root = tk.Tk()
root.title("Smart Home Dashboard")

btn_light = tk.Button(root, text="Toggle Light", command=toggle_light)
btn_light.pack(pady=10)

root.mainloop()

