t = int(input())
clothes = []
count = 0
for i in range(0, t):
    y = input()
    x = tuple(list(filter(lambda x: x!=" ",y.split(' '))))
    clothes.append(x)

for i in range(0, len(clothes)):
    for j in range(0, len(clothes)):
        if i == j:
            continue
        if clothes[i][0] == clothes[j][1]:
            count +=1

print(count)

# Accepted
# http://codeforces.com/contest/268/submission/47081835