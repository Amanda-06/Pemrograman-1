angka1, angka2, angka3 = map(int, input().split())
if angka1 < angka2 and angka1 < angka3 and angka2 < angka3:
    print(angka1, angka2, angka3)
elif angka1 < angka2 and angka1 < angka3 and angka2 > angka3:
    print(angka1, angka3, angka2)
elif angka1 > angka2 and angka1 < angka3 and angka2 < angka3:
    print(angka2, angka1, angka3)
elif angka1 < angka2 and angka1 > angka3 and angka2 < angka3:
    print(angka2, angka3, angka1)
elif angka1 < angka2 and angka1 > angka3 and angka2 > angka3:
    print(angka3, angka1, angka2)
else:
    print(angka3, angka2, angka1)