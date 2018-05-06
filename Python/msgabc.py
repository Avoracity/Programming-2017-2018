#Michael Alvarez
#September 14,2017
myString = input("enter text input")
cipher =""
alphabet= "abcdefghijklmnopqrstuvwxyz"
key = 25
for c in myString:
    if c in alphabet:
        cipher += alphabet [(alphabet.index(c) + key ) % (len( alphabet))]
print(cipher)
