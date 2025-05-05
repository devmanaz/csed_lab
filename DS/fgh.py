import tkinter as tk

# Function to update the expression in the entry widget
def press(key):
    entry_text.set(entry_text.get() + str(key))

# Function to evaluate the expression
def equal():
    try:
        result = str(eval(entry_text.get()))
        entry_text.set(result)
    except:
        entry_text.set("Error")

# Function to clear the entry
def clear():
    entry_text.set("")

# Create the main window
root = tk.Tk()
root.title("Mini Calculator")

entry_text = tk.StringVar()

# Entry widget for displaying the expression
entry = tk.Entry(root, textvariable=entry_text, font=('Arial', 20), bd=10, insertwidth=2, width=14, borderwidth=4, justify='right')
entry.grid(row=0, column=0, columnspan=4)

# Button layout
buttons = [
    ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
    ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
    ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
    ('0', 4, 0), ('.', 4, 1), ('C', 4, 2), ('+', 4, 3),
    ('=', 5, 0, 1, 4)
]

# Create and place buttons
for btn in buttons:
    text = btn[0]
    row = btn[1]
    col = btn[2]
    rowspan = btn[3] if len(btn) > 3 else 1
    colspan = btn[4] if len(btn) > 4 else 1
    action = (lambda x=text: press(x)) if text not in ['=', 'C'] else (equal if text == '=' else clear)
    tk.Button(root, text=text, padx=20, pady=20, font=('Arial', 18), command=action).grid(row=row, column=col, rowspan=rowspan, columnspan=colspan, sticky="nsew")

# Make the grid cells expand with window size
for i in range(6):
    root.rowconfigure(i, weight=1)
    if i < 4:
        root.columnconfigure(i, weight=1)

root.mainloop()
