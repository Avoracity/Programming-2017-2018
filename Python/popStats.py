#Name : Michael Alvarez
#Date : 10/21/17
#Population Fractions

#Libraries for plotting and data processing:
import matplotlib.pyplot as plt
import pandas as pd

#Open the CSV file and store in pop
pop = pd.read_csv('nycHistPop.csv',skiprows=5)

inp=input('Enter borough : ')



print("Minimum population", pop[inp].min())
print("Average population", pop[inp].mean())
print("Maximum population", pop[inp].max())
