lines = int(input())
int_birds = list(map(lambda y: int(y), input().split()))
shots = int(input())
shot_detail = []
for i in range(0, shots):
    shot_detail.append(tuple(list(map(lambda y: int(y), input().split()))))

for i in range(0,shots):
    if shot_detail[i][0]-2 < 0:
        pass
    else:
        int_birds[shot_detail[i][0]-2] += shot_detail[i][1]-1
    
    if shot_detail[i][0] >= lines:
        pass
    else:
        int_birds[shot_detail[i][0]] += int_birds[shot_detail[i][0]-1]-shot_detail[i][1]   
        
    int_birds[shot_detail[i][0]-1] = 0

for i in range(0, len(int_birds)):
    print(int_birds[i])

# Accepted
# http://codeforces.com/contest/294/submission/47142258