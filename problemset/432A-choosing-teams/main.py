n, k = input().split()
n = int(n)
k = int(k)
x = list(map(int, input().split()))
pp = 0 #number of candidates who can particiapte at least k times
for p in x:
    if p <= 5 - k: #5 - k is the maximum number of participation
        pp += 1

print(int(pp/3))