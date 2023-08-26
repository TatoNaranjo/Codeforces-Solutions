
n,q = map(int, input().split())

streets = {}
for i in range(n):
    street = input()
    streets.update({street: i + 1})

for _ in range(q):
    to, _from = input().split()
    to_index = streets.get(to)
    from_index = streets.get(_from) 
    print(abs(to_index - from_index) - 1)
