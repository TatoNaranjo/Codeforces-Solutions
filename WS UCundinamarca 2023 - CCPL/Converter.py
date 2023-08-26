import tkinter as tk
from tkinter import messagebox

def invert_string(string):
    return string[::-1]

def convert_and_display():
    try:
        num = int(entry.get())
        bin_str = ""
        aux_bin = num
        while True:
            bin_str = bin_str + str(aux_bin % 2)
            aux_bin = aux_bin // 2
            if aux_bin == 1:
                bin_str = bin_str + "1"
                break

        oct_str = ""
        aux_oct = num
        while True:
            oct_str = oct_str + str(aux_oct % 8)
            aux_oct = aux_oct // 8
            if aux_oct < 8:
                oct_str = oct_str + str(aux_oct % 8)
                break

        hex_str = ""
        aux_hex = num
        while True:
            val = aux_hex % 16
            if val < 10:
                hex_str = hex_str + str(val)
            elif val == 10:
                hex_str = hex_str + "A"
            elif val == 11:
                hex_str = hex_str + "B"
            elif val == 12:
                hex_str = hex_str + "C"
            elif val == 13:
                hex_str = hex_str + "D"
            elif val == 14:
                hex_str = hex_str + "E"
            elif val == 15:
                hex_str = hex_str + "F"
            if aux_hex / 16 < 1:
                break
            aux_hex = aux_hex // 16

        bin_label.config(text="Binario: " + invert_string(bin_str))
        oct_label.config(text="Octal: " + invert_string(oct_str))
        hex_label.config(text="Hexadecimal: " + invert_string(hex_str))

    except ValueError:
        messagebox.showerror("Error", "Ingresa un número decimal válido.")
        
# Crear la ventana
window = tk.Tk()
window.title("Conversor Numérico")

# Estilo
window.configure(bg="#F0F0F0")
label_font = ("Helvetica", 14)
button_font = ("Helvetica", 12, "bold")
result_font = ("Helvetica", 12, "italic")

# Crear y posicionar elementos
label = tk.Label(window, text="Ingresa un número decimal:", font=label_font, bg="#F0F0F0")
label.pack(pady=15)

entry = tk.Entry(window, font=label_font)
entry.pack(pady=5)

convert_button = tk.Button(window, text="Convertir", command=convert_and_display, font=button_font, bg="#4CAF50", fg="white")
convert_button.pack()

bin_label = tk.Label(window, text="Binario:", font=result_font, bg="#F0F0F0")
bin_label.pack(pady=5)

oct_label = tk.Label(window, text="Octal:", font=result_font, bg="#F0F0F0")
oct_label.pack(pady=5)

hex_label = tk.Label(window, text="Hexadecimal:", font=result_font, bg="#F0F0F0")
hex_label.pack(pady=5)

# Iniciar bucle de la interfaz gráfica
window.mainloop()