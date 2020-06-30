with open("input.txt", "r") as inf, open("output.txt", "w") as ouf:
    n = int(inf.readline())
    c, bc, bd = 0, -1, None
    for i in range(2, n+1):
        c = 0
        for j in range(1, i+1):
            if i % j == 0:
                c += 1
        if c > bc:
            bc = c
            bd = i
    print(bc)
    ouf.write(str(n-bd+1)+"\n")
