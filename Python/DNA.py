#Michael Alvarez
#September 14, 2017

myString = input("DNA please: ACGCCCGGGATG")
l = len(myString)
print("length is",l)

numC = myString.count('C')
numG = myString.count('G')

gc = (numC + numG) / l 

gcPercent = gc / 1
print('GC-content is', gcPercent)