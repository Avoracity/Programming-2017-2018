#Michael Alvarez
#Nov 8 2017
#CSV

import pandas as pd

inputName = input("Enter a CSV file name:")
collision = pd.read_csv(inputName)
print("Top three contributing factors for collisions:")
print(collision["CONTRIBUTING FACTOR VEHICLE 1"].value_counts()[:3])
