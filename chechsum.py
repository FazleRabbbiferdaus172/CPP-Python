import collections

input_file = open("input.txt", "r")

lines = input_file.readlines()

def part1():
    twice_repeating_counter = 0
    three_repeating_counter = 0

    for line in lines:

        char_counter = collections.defaultdict(int)

        for char in line.strip():
            char_counter[char] += 1
        frequency_set = set(char_counter.values())

        if 2 in frequency_set:
            twice_repeating_counter += 1
        if 3 in frequency_set:
            three_repeating_counter += 1
    print(twice_repeating_counter*three_repeating_counter)


def hamming_distance(s1, s2):

    if len(s1) != len(s2):
        raise ValueError("Unidentified for uneqal lrnght of strings")

    return sum(el1 != el2 for el1,el2 in zip(s1, s2))

def finding_strings_of_distance_1(lines):
    for i in range(len(lines)):
        for j in range(i+1, len(lines)):
            line1 = lines[i].strip()
            line2 = lines[j].strip()
            if hamming_distance(line1, line2) == 1:
                return line1,line2
    return None

def part2():
    line1,line2 = finding_strings_of_distance_1(lines)

    line3 = ""

    for i in range(len(line1)):
        if line1[i] == line2[i]:
            line3 += line1[i]

    print(line3)


part1()

part2()