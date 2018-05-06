#CSci 127 Teaching Staff
#October 2017
#A program that uses functions to print out months.
#Modified by: Michael Alvarez 

def monthString(monthNum):
    
    monthString = ""
    monthString =["","January","Feburary","March","April","May","June","July","August","September","October","November","December"]

    return(monthString[monthNum])
     

def main():
     n = int(input('Enter the number of the month: '))
     mString = monthString(n)
     print('The month is', mString)

     

if __name__ == "__main__":
     main()
                   
