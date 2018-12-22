y =input()
y = y.split(' ')
y = list(map(lambda x: int(x), y))

shovels = 1
money = 0
bought = 0

while True:
    if money == y[0]*shovels:
        break
    if money < y[0]*shovels:
        money += 10

    if money > y[0]*shovels:
        money -= 10
        money += y[1]
        if money == y [0]*shovels:
            break
        else:
            shovels += 1
            money -= y[1]
print(shovels)

# Accepted
# http://codeforces.com/contest/732/submission/47082267
    