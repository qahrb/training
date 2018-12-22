n = int(input())
arr = list(input())
e = 0
p = ""
r = 0
for i in range(0, n):
    if e == 0 :
        p = arr[i]
        e = 1
        continue
    if p == arr[i]:
        r += 1
        p = arr[i]
    else:
        p = arr[i]
        continue
print(r)

# Accepted 
# http://codeforces.com/contest/266/submission/46971443