x = input()
l = 0
u = 0
for i in x:
    if i.islower():
        l += 1
    else:
        u += 1
if l > u:
    x = x.lower()
elif l < u:
    x = x.upper()
else:
    x = x.lower()

print(x)

# Accepted 
# http://codeforces.com/contest/59/submission/46966465