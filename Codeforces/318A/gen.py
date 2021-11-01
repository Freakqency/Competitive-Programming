#!/usr/bin/python

from random import randrange

def generate_numbers(n):
    with open('input', 'a+') as file:
        file.write("500")
        file.write("\n")
        for i in range(0, 500):                
            num = randrange(1, n)
            digit = randrange(1, num)
            file.write(str(num)) 
            file.write(" ")
            file.write(str(digit))
            file.write("\n")

def main():
    n = 1000
    generate_numbers(n)

main()
