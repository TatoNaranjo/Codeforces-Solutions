import math

h,k,v,s = map(int, input().split())

units = 0
while h > 0:
    v += s
    decrease = v // 10
    v -= max(1, decrease)
    if v >= k:
        h += 1
    if 0 < v < k:
        h -= 1
        if h == 0:
            v = 0
    if v <= 0:
        h = v = 0
    units += v 
    if s > 0:
        s -= 1

print(units)