per, cho = [], [False]*20


def permutation(n):
    if len(per) == n:
        for i in per:
            print(i, end=",")
        print(" ", end="")

    for i in range(1, n+1):
        if cho[i]:
            continue
        cho[i] = True
        per.append(i)
        permutation(n)
        cho[i] = False
        per.pop()


permutation(3)
