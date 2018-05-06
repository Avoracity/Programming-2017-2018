#Michael Alvarez
#Date : 10/18/17
#Cropping image

import matplotlib.pyplot as plt
import numpy as np

img=input('Enter image file name:')
img1=plt.imread(img)
#plt.imshow(img1)

out=input('Enter output file')
t=int(input('Enter highest'))
b=int(input('Enter lowest'))
l=int(input('Enter farthest left'))
r=int(input('Enter farthest right'))

img2=img1.copy()
img3=img2[t:b,l:r]

plt.imshow(img3)
#plt.show()
plt.imsave(out,img3)
