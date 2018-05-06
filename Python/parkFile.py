#Michael Alvarez
#Nov 6 , 2017
#Parking Offenders

import pandas as pd

parkingFile = input("Enter File Name: ")
parkingList = input("Enter Attribute: ")

pop = pd.read_csv(parkingFile)
print("The top 10 offenders are: ")
print(pop[parkingList].value_counts()[:10])
