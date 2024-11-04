jarijari = input()

if len(jarijari.split()) == 2:
    jarijari, tinggi = map(float, jarijari.split())
elif len(jarijari.split()) == 1:
    jarijari = float(jarijari)
    tinggi = float(input())

phi = 22.0 / 7.0  

volume = phi * jarijari**2 * tinggi
luas = 2 * phi * jarijari * tinggi + 2 * phi * jarijari**2
keliling = 2 * phi * jarijari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")