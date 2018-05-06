#Michael Alvarez
#November 1 , 2017
#binary to decimal

binString = input("enter your number: ")
decNum = 0
for c in binString:
    decNum = decNum * 2
    if c == "1":
        decNum = decNum + 1
print(decNum)
		
   
        
