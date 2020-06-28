'''import sys

sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

a, b = [int(x) for x in input().split()]

print(a+b)'''

with open('input.txt', 'r') as inf, open('output.txt', 'w') as ouf:
    ouf.write(str(sum(int(x) for x in inf.readline().split())) + '\n')
