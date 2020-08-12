
#include "beginnerClass.h"
#include <iostream>
using namespace std;

int main()
{
    beginnerClass classObj; //classtype objectname;
    beginnerClass *classPt = &classObj;  //classtype objectpointer , object points/assigned to the address classObj

    classObj.printFunc();  // access the function through the objectname and point dot operator
    classPt->printFunc();  // to access the function with a pointer, arrow member select operator is used instead.
}

