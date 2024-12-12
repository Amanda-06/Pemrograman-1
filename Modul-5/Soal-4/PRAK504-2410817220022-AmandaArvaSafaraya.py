def reverse(n) :
    reversed_num = 0
    while n > 0 :
        reversed_num = reversed_num * 10 + n % 10
        n //= 10
    return reversed_num

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B 
print(reverse(C))