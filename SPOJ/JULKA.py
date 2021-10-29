def solve(x, y):
    k = (x + y) // 2
    n = x - k
    print (int(k))
    print (int(n))


def main():
    t = 10
    while t != 0:
        x = int(input())
        y = int(input())
        solve(x, y)
        t -= 1
main()
