n = int(input())
arr = list(map(int, input().split()))

for i in range(n):
    jumlahZetsu = arr[i] * (i + 1)
    print(jumlahZetsu, end=" ")