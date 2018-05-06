#Michael Alvarez
#September 28 2017

import matplotlib.pyplot as plt
import numpy as np

inputfile=input("Input filename")
outputfile=input("Output filename")

img = plt.imread(inputfile)
plt.imshow(img)

img2 = img.copy()
img2[:,:,1] = 0
img2[:,:,0] = 0


plt.imsave(outputfile, img2)
        
