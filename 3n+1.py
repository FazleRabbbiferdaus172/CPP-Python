i, j = [int(x) for x in input().split()]

mc, c = 1, 0
print(i, end=" ")
print(j, end=" ")
if i > j:
    i, j = j, i
for n in range(i, j+1):
    c = 1
    while n > 1:
        c += 1
        if n % 2 == 0:
            n /= 2
        else:
            n = n*3 + 1
    mc = max(mc, c)

print(mc)
