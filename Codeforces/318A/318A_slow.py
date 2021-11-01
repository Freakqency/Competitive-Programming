def solve(n, k):
    nums = []
    for i in range(1, n + 1, 2):
        nums.append(i);
    for i in range(2, n + 1, 2):
        nums.append(i);
    return nums[k - 1]

def main():
    t = int(input());
    while (t != 0):
        n, k = input().split()
        print(solve(int(n), int(k)))
        t -= 1

main()
