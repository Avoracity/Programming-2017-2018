#Michael Alvarez
#October 25 2017
#program shelter

import pandas as pd
import matplotlib.pyplot as plt

a = input("enter your input file: ")
b = input("enter your output file: ")

homeless = pd.read_csv(a)


homeless['Fraction Children'] = homeless['Total Children in Shelter']/homeless['Total Individuals in Shelter']
homeless.plot(x = "Date of Census", y = "Fraction Children")


#plt.show()
#Save to the file:  fractionBX.png
fig = plt.gcf()
fig.savefig(b)

#asks the user to specify the input file, +
#asks the user to specify the output file, +
#makes a plot of the fraction of the total population that are children over time from the data in input file, and
#stores the plot in the output file the user specified. +
