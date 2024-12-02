m, n = map(int, input().split())
all_result = 0
print()

for i in range(1,m + 1):
    result = 0

    for j in range(i, 0, -1):
        term = j * n
        result += term
        all_result += term
        print(f"({j} * {n})", end="")
        
        if j > 1:
            print(f"+", end="")
    print(f"={result}", end="")
    print()
print(f"{all_result}", end=" ")