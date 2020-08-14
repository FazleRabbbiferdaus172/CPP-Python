input_file = open("input.txt", "r")

def part_1():
    sum = 0

    for line in input_file.readlines():
        sum += int(line.strip())

    print(sum)

def part_2():
    sum = 0
    numbers_seen = set()
    lines = input_file.readlines()
    while sum not in numbers_seen:
        for line in lines:
            numbers_seen.add(sum)
            sum += int(line.strip())
            if sum in numbers_seen:
                print("The first number seen is :", sum)
                return sum

part_2()
