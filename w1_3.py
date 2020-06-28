'''c, n, d = [None]*100001, None, [False]*100001
d[0], d[1], d[2] = True, True, True


def tri(n):
    global c, d
    if not d[n]:
        c[n] = tri(n-1)+tri(n-2)-tri(n-3)
        d[n] = True
    return c[n]


with open('input.txt', 'r') as inf, open('output.txt', 'w') as ouf:
    c[0], c[1], c[2], n = [int(x) for x in inf.readline().split()]
    ans = tri(n)
    ouf.write(str(ans)+'\n')'''

with open('input.txt', 'r') as inf, open('output.txt', 'w') as ouf:
    a, b, c, n = [int(x) for x in inf.readline().split()]
    while(n > 0):
        d = c+b-a
        a = b
        b = c
        c = d
        n -= 1
    ouf.write(str(a))
