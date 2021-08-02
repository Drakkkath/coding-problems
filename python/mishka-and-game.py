n = int(input())
mishka = 0
chris = 0
for i in range(n):
    x = list(map(int, input().split()))
    if x[0] > x[1]:
        mishka += 1
    elif x[1] > x[0]:
        chris += 1


if mishka > chris:
    print("Mishka")
elif chris > mishka:
    print("Chris")
else:
    print("Friendship is magic!^^")