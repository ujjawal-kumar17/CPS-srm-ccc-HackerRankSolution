n = int(input())
grid= []
types = [0,0,0,0]
for i in range(n):
    grid.append(input().split())

#code for printing number of each type
for row in grid:
    for element in row:
        if element == '2':
            types[0] += 1
        if element == '3':
            types[1] += 1
        if element == '4':
            types[2] += 1
        if element == '5':
            types[3] += 1

for i in types:
    print(i, end=" ")

    
    
print()



#code for printing risk of infection
def infected(i,j):
    ans = 0
    
    if i>0 and grid[i-1][j] == str(1):  #top
        ans += 1
        grid[i-1][j] = str(0)   
        
    if i>0 and j<n-1 and grid[i-1][j+1] == str(1):   #top-right
        ans += 1
        grid[i-1][j+1] = str(0)
        
    if j<n-1 and grid[i][j+1] == str(1):    #right
        ans += 1
        grid[i][j+1] = str(0)
        
    if i<n-1 and j<n-1 and grid[i+1][j+1] == str(1):   #bottom-right
        ans += 1
        grid[i+1][j+1] = str(0)
        
    if i<n-1 and grid[i+1][j] == str(1):    #bottom
        ans += 1
        grid[i+1][j] = str(0)
        
    if i<n-1 and j>0 and grid[i+1][j-1] == str(1):     #bottom-left
        ans += 1
        grid[i+1][j-1] = str(0)
    
    if j>0 and grid[i][j-1] == str(1):   #left
        ans += 1
        grid[i][j-1] = str(0)
    
    if i>0 and j>0 and grid[i-1][j-1] == str(1):    #top-left
        ans += 1
        grid[i-1][j-1] = str(0)

    return(ans)



risk = [0,0,0,0]
for k in range(5,1,-1):
    for i in range(n):
        for j in range(n):
            if grid[i][j] == str(k):
                risk[k-2] += infected(i,j)
            
for i in risk:
    print(i, end=" ")
