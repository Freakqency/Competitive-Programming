# Used python beause of immutable strings property

def solve(n, encoded):
    alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
    result = ""
    for i in range(0, n, 4):
        pos = int(encoded[i:i + 4], 2)
        result += alpha[pos]
    print (result)

def main():
    t = int(input())
    while (t != 0):
        n = int(input())
        encoded = input()
        solve(n, encoded)
        t -= 1
main()
