n = int(input())
mice_pos = list(map(int, input().split()))
hole_pos = list(map(int, input().split()))

# sort the positions of mice and holes in ascending order
mice_pos.sort()
hole_pos.sort()

# calculate the minimum time required for all mice to get inside a hole
min_time = 0
for i in range(n):
    min_time = max(min_time, abs(mice_pos[i] - hole_pos[i]))

print(min_time)
