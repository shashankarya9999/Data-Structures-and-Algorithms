import sys

print("Enter two numbers: ")
input = sys.stdin.read()

tokens = input.split()
a = int(tokens[0])
b = int(tokens[1])

print("Sum: ")
print( a + b )
