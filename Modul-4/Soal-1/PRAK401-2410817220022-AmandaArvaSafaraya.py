n, s = input().split()
n = int(n)
print()
for x in range(1,51):
    if x % n == 0:
        print(s, end=" ")
        continue
    print(x, end=" ")