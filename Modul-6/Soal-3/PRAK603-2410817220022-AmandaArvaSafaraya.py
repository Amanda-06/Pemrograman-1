n1, n2 = map(int, input().split())

if n1 == n2:
    matriks = []
    for _ in range(2):
        row = list(map(int, input().split()))
        matriks.append(row)

    hasil = [matriks[0][j] * matriks[1][j] for j in range(n1)]
    print(" ".join(map(str, hasil)))
else:
    print("Jumlah tidak sama")