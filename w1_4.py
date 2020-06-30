with open('input.txt', 'r') as inf, open('output.txt', 'w') as ouf:
    n = int(inf.readline())
    p = [int(x) for x in inf.readline().split(' ')]
    t = [int(x) for x in inf.readline().split(' ')]
    result = 0
    for pi in range(n):
        for ti in range(n):
            if pi == ti:
                continue
            local = p[pi] + t[ti]
            for i in range(n):
                if pi != i and ti != i:
                    local += max(t[i], p[i])
            result = max(result, local)

    ouf.write(str(result)+' ')
