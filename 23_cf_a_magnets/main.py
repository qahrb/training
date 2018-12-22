n = int(input())
g = 0 
pstate = 2
for i in range(0,n):
    m = list(input())
    if pstate == 2:
        g +=1
        pstate = m[1]
        continue
    if m[1] == pstate:
        pstate = m[1]
    else:
        g+=1
        pstate = m[1]
print(g)

# Accepted
# http://codeforces.com/contest/344/submission/46967634