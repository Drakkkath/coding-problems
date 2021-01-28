n = int(input())
x = list(map(int, input().split()))
burles = 0
for i in range(n):
    if x[i] < max(x):
        burles += max(x) - x[i]

print(burles)