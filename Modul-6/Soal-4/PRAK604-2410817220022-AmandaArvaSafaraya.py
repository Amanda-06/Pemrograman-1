kode = input()
pesan_masuk = input()
char_sama = 0
char_tidaksama = 0

if len(kode) != len(pesan_masuk):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(kode)):
        if kode[i] == pesan_masuk[i]:
            if kode[i] == ' ':
                print(" ", end="")
            else:
                char_sama += 1
                print("*", end="")
        else:
            char_tidaksama += 1
            print("#", end="")

    print()
    print(f"* = {char_sama}")
    print(f"# = {char_tidaksama}")

    if char_tidaksama > char_sama:
        print("Pesan Palsu")
    else:
        print("Pesan Asli")