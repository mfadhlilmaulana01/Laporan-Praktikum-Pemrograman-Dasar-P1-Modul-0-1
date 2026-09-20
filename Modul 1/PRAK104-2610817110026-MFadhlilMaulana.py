sepatu_A = 400000
sepatu_B = 350000

print(f"Harga sepatu A adalah {sepatu_A}")
print(f"Harga sepatu B adalah {sepatu_B}")

diskon_A = int(sepatu_A - (sepatu_A * 13 / 100))
diskon_B = int(sepatu_B - (sepatu_B * 21 / 100))

print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {diskon_A}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {diskon_B}")