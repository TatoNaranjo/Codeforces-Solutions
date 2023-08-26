

def make_pre_computed(people,n,m):
    jokes_in_common = {}
    for i in range(n):
        current = people[i]
        for j in range(i+1, n):
            next_person = people[j]
            counter = 0
            for k in range(m):
                if current[k] == next_person[k]:
                    counter += 1
            jokes_in_common.update({f"{i+1} {j+1}":counter})

    return jokes_in_common

def solve():
    n,m = map(int, input().split())
    people = []
    for i in range(n):
        people.append(input())
        
    results = make_pre_computed(people,n,m)

    q = int(input())
    for _ in range(q):
        p = input()
        p1,p2 = p.split()
        if p1 == p2:
            print(m)
            continue
        print(results[p])



solve()