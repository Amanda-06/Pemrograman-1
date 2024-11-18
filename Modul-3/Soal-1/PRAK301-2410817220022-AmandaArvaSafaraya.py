angka1, angka2, angka3 = map(int, input().split()) 
if angka1 >= angka2 >= angka3 : print(f"{angka3} {angka2} {angka1}")
elif angka1 >= angka3 >= angka2 : print(f"{angka2} {angka3} {angka1}")

elif angka2 >= angka3 >= angka1 : print(f"{angka1} {angka3} {angka2}")
elif angka2 >= angka1 >= angka3 : print(f"{angka3} {angka1} {angka2}")

elif angka3 >= angka1 >= angka2 : print(f"{angka2} {angka1} {angka3}")
elif angka3 >= angka2 >= angka1 : print(f"{angka1} {angka2} {angka3}")