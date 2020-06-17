def search(n, i=1, l=[]):
    if i == n+1:
        for j in l:
            print(j, end=" ")
        return
    else:
        l.append(i)
        search(n, i+1, l)
        l.pop()
        search(n, i+1, l)


search(3, 1)
