n,hit,t=map(int,input().split())
2
l = sorted([int(i) for i in input().split()[0:n]])
3
res,h=0,0
4
for i in l:
5
    h = i // hit+(1 if i%hit else 0)
6
    if t >= h:
7
        t -= h
8
        res += 1
9
    else: break
10
print(res)
