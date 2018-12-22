way = list(input())
instructions = list(input())
x = 0
y = 0
location = 1 
while True:
    if len(instructions) == 0:
        break
    elif way[x] == instructions[y]:
        location += 1
        way = way[x+1:]
        instructions = instructions[y+1:]
        y = 0
    else:
        instructions = instructions[y+1:]

print(location)

# Accepted
# http://codeforces.com/contest/265/submission/47140030