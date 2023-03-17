  def minimum_cost(n, k, c):
    c.sort(reverse=True)
    multiplier = 1
    total_cost = 0
    for i in range(n):
        total_cost += multiplier * c[i]
        if (i + 1) % k == 0:
            multiplier += 1
    return total_cost

n, k = map(int, input().split())
c = list(map(int, input().split()))
print(minimum_cost(n, k, c))
