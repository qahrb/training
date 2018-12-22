x = input()
y = ""
for i in x:
    if i in y:
        continue
    else:
        y+=i

if len(y)%2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

# Accepted 
# http://codeforces.com/contest/236/submission/46965971
 