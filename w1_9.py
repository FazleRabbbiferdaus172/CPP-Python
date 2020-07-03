with open("input.txt", "r") as inf, open("output.txt", "w") as ouf:
    n = int(inf.readline())
    t = [int(x) for x in inf.readline().split()]
    t.sort()
    c_p, s_t = 0, 300*60
    for i in t:
        if i <= s_t:
            c_p += 1
            s_t -= i

        if s_t == 0 or i > s_t:
            break

    ouf.write(str(c_p)+"\n")
