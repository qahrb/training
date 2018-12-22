x = list(input().split(" "))
distinct = []
for i in x:
    if i not in distinct:
        distinct.append(i)
print(4 - len(distinct))

# Accepted 
# http://codeforces.com/contest/228/submission/47137710
