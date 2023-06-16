def fast_power(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        base = (base * base) % modulus
    return result
 
t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print((fast_power(245, b, 10) * a) % 10)