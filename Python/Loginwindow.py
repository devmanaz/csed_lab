import tkinter as tk
from tkinter import messagebox
def login():
    username = entry_username.get()
    password = entry_password.get()
    
    if username == "admin" and password == "password":
        messagebox.showinfo("Login", "Welcome Admin")
    else:
        messagebox.showerror("Login", "Invalid Username or Password")
root = tk.Tk()
root.title("Login Window")
label_username = tk.Label(root, text="Username")
label_username.pack(pady=5)
entry_username = tk.Entry(root)
entry_username.pack(pady=5)
label_password = tk.Label(root, text="Password")
label_password.pack(pady=5)
entry_password = tk.Entry(root, show="*")
entry_password.pack(pady=5)
button_login = tk.Button(root, text="Login", command=login)
button_login.pack(pady=20)
root.mainloop()
