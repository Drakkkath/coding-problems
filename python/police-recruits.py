n = int(input())
x = list(map(int, input().split())) 
police = 0
unresolved = 0
for i in range(len(x)):
    if x[i] == -1:
        if police == 0:
            unresolved += 1
        else:
            police -= 1
    else:
        police += x[i]

print(unresolved)
