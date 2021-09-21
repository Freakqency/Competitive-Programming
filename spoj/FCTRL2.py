# Used Python for Big Integers

def fact(n):
    if (n <= 1):
        return 1
    return n*fact(n-1)

num = int(input())

for i in range (0,num):
    val = int(input())
    print (fact(val))
