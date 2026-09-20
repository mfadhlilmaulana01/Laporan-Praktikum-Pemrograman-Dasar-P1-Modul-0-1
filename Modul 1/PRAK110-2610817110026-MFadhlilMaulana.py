base_c = 5
height_a = 12
hypotenuse_b = int((base_c ** 2 + height_a ** 2) ** 0.5)
circumference = int(hypotenuse_b + height_a + base_c)
area = int(0.5 * base_c * height_a)

print("Diketahui:")
print(f"Alas = {base_c} cm")
print(f"Tinggi = {height_a} cm")
print()
print("Jawab:")
print(f"Sisi A = {hypotenuse_b} cm")
print(f"Sisi B = {height_a} cm")
print(f"Sisi C = {base_c} cm")
print(f"Keliling = {circumference} cm")
print(f"Luas = {area} cm")