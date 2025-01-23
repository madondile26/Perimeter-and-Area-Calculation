/* Task B.cpp
   Q. Write an algorithm that calculate the Perimeter and Area of a Circle
   Written by: 218103107 X-Nardo
   Date: 10 November 2020*/

#include <math.h>
#include <iostream>
using namespace std;

int main()
{// main begins
    char control; //usually called a control variable
    double radius;
    double perimeter;
    double area;
    double pie = 3.14;
    //Q. user options - Is the user guideance correctly/neatly implemented?
    cout << "Enter the radius value of a circle: ";
    cin >> radius;

    cout << "\nChoose your choice of calculation out of the following options: \n";
    cout << "\nA: Calculate the Perimeter of the circle.";
    cout << "\nB: Calculate the Area of the circle.";
    cout << "\nPlease only type A or B then press ENTER\n";
    cin >> control;
           //Q. is the syntax & application of the branching statement correct?
    switch (control)
    {//switch begins
          case 'A':
                 perimeter = 2 * pie * radius;
                 cout << "The Perimeter of the circle is: " << perimeter << endl;
                 break;
          case 'B':
                 area = pie * pow(radius, 2);
                 cout << "The Area of the circle is: " << area << endl;
                 break;
          default:
              cout << "-------------------------YOU'VE JUST EXITED THE PROGRAM!!!...-------------------------";
    }//switch ends

    return 0;
}//main ends

