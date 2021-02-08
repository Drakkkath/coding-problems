t = int(input())
sol = []

for i in range(t):
    n, k = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    if min(a) <= max(b):
        for i in range(k):
            min_a = min(a) 
            a[a.index(min(a))] = max(b)
            b[b.index(max(b))] = min_a

    sol.append(sum(a))

for x in sol:
    print(x)
