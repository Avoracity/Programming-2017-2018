#Michael Alvarez
#October 5,2017
#Even and Odd turtle

import turtle

xyliant = turtle.Turtle()

userInput = int(input("enter a whole number: "))
if userInput % 2 == 0:
    print("even number")
    xyliant.color("blue")
    xyliant.left(180)
    xyliant.forward(100)
elif not userInput % 2 == 0:
    print("odd number")
    xyliant.color("red")
    xyliant.right(0)
    xyliant.forward(100)
