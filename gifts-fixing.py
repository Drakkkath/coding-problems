t = int(input())
sol = []

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    min_a = min(a)
    min_b = min(b)
    steps = 0

    for j in range(n):
        steps += max(a[j] - min_a, b[j] - min_b)

    sol.append(steps)

for x in sol:
    print(x)