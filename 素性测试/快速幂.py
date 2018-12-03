def pow3():
    ans = 1
    base = 2
    b = 30402457
    while (b != 0):
        if (b & 1):
            ans *= base
        base *= base
        b >>= 1
    return ans
print(pow3())