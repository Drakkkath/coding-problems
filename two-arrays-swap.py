x = []
for i in range(int(input())):
    n, k = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    while k != 0 and min(a) < max(b):
        min_a = min(a)
        a[a.index(min_a)] = max(b)
        b[b.index(max(b))] = min_a
        k -= 1

    x.append(sum(a))

for e in x:
    print(e)
        

