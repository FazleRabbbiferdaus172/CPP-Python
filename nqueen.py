queen, col, digl, digr, c = [0]*20, [0]*20, [0]*40, [0]*40, 0


def nqueen(n, at=0):
    global c
    if at == n:
        c += 1

    for i in range(n):
        if col[i] or digl[i+at] or digr[n-1+i-at]:
            continue
        queen[at] = i
        col[i], digl[i+at], digr[n-1+i-at] = 1, 1, 1
        nqueen(n, at+1)
        col[i], digl[i+at], digr[n-1+i-at] = 0, 0, 0


nqueen(8)
print(c)
