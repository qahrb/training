n = int(input())

arr = input()
arr = arr.split(' ')
arr = list(map(lambda z : int(z), arr))


p = [0,0]
t=0
for i in range(0, n):
    
    if arr[0] > arr[-1]:
        p[t] += arr[0]
        arr.pop(0)
    else:
        p[t] += arr[-1]
        arr.pop(-1)

    if t == 0:
        t = 1
    else:
        t = 0
print("{} {}".format(p[0],p[1]))

# Accepted 
# http://codeforces.com/contest/381/submission/46970716