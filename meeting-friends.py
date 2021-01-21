x = list(map(int, input().split()))
x.sort()
if len(x) % 2 != 0:
    print(x[int(len(x)/2)])