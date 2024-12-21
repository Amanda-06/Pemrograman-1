a, b = map(int, input().split())
matriks = []
elemen = list(map(int, input().split()))

for i in range(a):
    row = elemen[i * b:(i + 1) * b]
    matriks.append(row)
    print(" ".join(map(str, row)))