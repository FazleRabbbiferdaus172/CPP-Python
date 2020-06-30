import math
with open("input.txt", "r") as inf, open("output.txt", "w") as ouf:
    n = [[int(x) for x in y.split(" ")] for y in inf.readlines()]

    result, i2 = 0, 0

    for i0 in range(3):
        for i1 in range(3):
            if i0 != i1:
                i2 = 3 - i0 - i1
                result = max(result, n[0][i0]**2+n[1][i1]**2+n[2][i2]**2)

    ouf.write(str(math.sqrt(result)))
