with open('input.txt', 'r') as inf, open('output.txt', 'w') as ouf:
    a, b = [int(x) for x in inf.readline().split()]
    ouf.write(str(a+b**2)+'\n')
