#Michael Alvarez
#September 25,2017

import turtle

enegg = turtle.Turtle()
x = int(input("How far?: "))

for i in range(0,250,10):
  enegg.forward(x)
  enegg.forward(i)
  enegg.left(90)
