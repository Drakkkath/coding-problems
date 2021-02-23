t = int(input())
sol = []

for i in range(t):
    n = int(input())
    x = list(map(int, input().split()))

    if n == 1:
        if x[0] % 2 != 0:
            sol.append(-1)
        else:
            sol.append(0)
    else:
        wrong_even = []
        wrong_odd = []
        for i in range(n):
            if i % 2 == 0:
                if x[i] % 2 != 0:
                    wrong_even.append(x[i])
            else:
                if x[i] % 2 != 1:
                    wrong_odd.append(x[i])
        if len(wrong_even) == len(wrong_odd):
            sol.append(len(wrong_odd))
        else:
            sol.append(-1)

for x in sol:
    print(x)