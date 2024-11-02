import math

sisiTinggi = input()

if len(sisiTinggi.split()) == 2:
    sisiTinggi, sisiMiring = map(int, sisiTinggi.split())
elif len(sisiTinggi.split()) == 1:
    sisiTinggi = int(sisiTinggi)
    sisiMiring = int(input())

alas = int(math.sqrt(sisiMiring**2 - sisiTinggi**2))
keliling = sisiTinggi + sisiMiring + alas
luas = int(0.5 * sisiTinggi * alas) 

print(f"Alas = {alas} cm")
print(f"Tinggi = {sisiTinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")