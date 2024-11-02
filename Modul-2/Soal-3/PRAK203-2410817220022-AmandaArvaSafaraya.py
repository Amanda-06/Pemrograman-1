a = input().split()

if len (a) == 6:
    a, b, i, j, x, y =map(float, a)
elif len (a) == 2:
    a, b = map(float, a)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
hasil = (a - b) * (i / j) - (x + y)
print(f"{hasil:.3f}")