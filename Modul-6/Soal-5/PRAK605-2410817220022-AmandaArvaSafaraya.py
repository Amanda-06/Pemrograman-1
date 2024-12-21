a = int(input())

print("Matriks A")
matriksA = [list(map(int, input().split())) for _ in range(a)]

print("Matriks B")
matriksB = [list(map(int, input().split())) for _ in range(a)]

hasil = [[0 for _ in range(a)] for _ in range(a)]
for i in range(a):
    for j in range(a):
        for k in range(a):
            hasil[i][j] += matriksA[i][k] * matriksB[k][j]
print("\nMatriks AXB")
for row in hasil:
    print(" ".join(map(str, row)))