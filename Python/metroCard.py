#Michael Alvarez
#metro card

x = int(input("How many rides?"))

if x == 1 or x==2:
    print(" You should buy a regular ticket.")
elif 31 / x <= 2.48:
    print(" You should buy a 7-day ticket.")
else:
    print(" You should buy a regular ticket.")
    
