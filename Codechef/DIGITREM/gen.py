#!/usr/bin/python

from random import randrange

def generate_numbers(n, d):
    with open('input', 'a+') as file:
        file.write("500")
        file.write("\n")
        for i in range(0, 500):                
            num = randrange(1, n)
            digit = randrange(0, d)
            file.write(str(num)) 
            file.write(" ")
            file.write(str(digit))
            file.write("\n")

def main():
    n = 1000000
    d = 9
    generate_numbers(n, d)

main()
