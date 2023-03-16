dimensions=list(map(int,input().split()))
g1=list(map(int,input().split()))
g2=list(map(int,input().split()))
count=0

def check_dec(x,y):
    if (abs(x-g1[0])+abs(y-g1[1]))==(abs(x-g2[0])+abs(y-g2[1])):
        return 1
    else:
        return 0
    
for x in range(1,dimensions[0]+1):
    for y in range(1,dimensions[1]+1):
        count+=check_dec(x,y)

print(count)
