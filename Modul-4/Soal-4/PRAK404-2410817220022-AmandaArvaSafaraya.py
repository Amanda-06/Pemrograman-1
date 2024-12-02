while True:
    print("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    n = int(input("Masukkan Pilihan : "))

    if n < 1 or n > 5:
        print("Input anda salah, silahkan coba lagi") 
        continue
    elif n == 5:
        print("Terimakasih, telah menggunakan kalkulator Amanda Arva Safaraya")
        break
    
    NilaiPertama = float(input("Masukkan nilai pertama : "))
    NilaiKedua = float(input("Masukkan nilai kedua : "))

    if n == 1:
        Hasil = NilaiPertama + NilaiKedua
        print(f"Hasil penjumlahan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif n == 2:
        Hasil = NilaiPertama - NilaiKedua
        print(f"Hasil pengurangan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif n == 3:
        Hasil = NilaiPertama * NilaiKedua
        print(f"Hasil perkalian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif n == 4:
        Hasil = NilaiPertama / NilaiKedua
        print(f"Hasil pembagian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {Hasil:.2f}")