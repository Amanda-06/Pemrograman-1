n = int(input())
for i in range(1, n+1):
    if i % 2 == 1:
        print(i, end=" ")
print()
for j in range(n, 1, -1):
    if j % 2 == 0:
        print(j, end=" ")