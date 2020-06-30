with open("input.txt", 'r') as inf, open("output.txt", "w") as ouf:
    a, b, c = [int(x) for x in inf.readline().split(' ')]
    ouf.write(str((a+b+c)/6)+'\n')
