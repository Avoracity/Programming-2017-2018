#Michael Alvarez
#October 5,2017
#Make the turtle move

import turtle

xyliant = turtle.Turtle()


commands = input("Enter command: ")
for ch in commands:
    if ch == 'F':
        xyliant.forward(100)
    elif ch == 'B':
        xyliant.backward(100)
    elif ch == 'L':
        xyliant.left(90)
    elif ch == 'R':
        xyliant.right(90)
    elif ch == '^':
        xyliant.up()
    elif ch == 'v':
        xyliant.down()
    elif ch == 'r':
        xyliant.color("red")
    elif ch == 'g':
        xyliant.color("green")
    elif ch == 'b':
        xyliant.color("blue")
    else:
        print("error not an input", c)            
print("graphix windows")
