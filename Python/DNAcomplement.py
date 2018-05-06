#Michael Alvarez
#November 2, 2017
#DNA String

in1 = input("Enter DNA STRING: ")
out1 = ""
for i in in1:
    if i == 'A':
        out1 += 'T'
    if i == 'C':
        out1 += 'G'
    if i == 'G':
        out1 += 'C' 
    if i == 'T':
        out1 += 'A'
print(out1)
