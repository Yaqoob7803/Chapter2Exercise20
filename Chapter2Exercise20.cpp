/*

file name:Chapter2exercise20.cpp
GitHub URL: https://github.com/Yaqoob7803/Chapter2Exercise20/edit/main/Chapter2Exercise20.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

How Much Paint
A particular brand of paint covers 340 square feet per gallon. Write 
a program to determine and report approximately how many gallons of paint
will be needed to paint two coats on a wooden fence that is 6 feet high and 100 feet long.
*/
#include <iostream>
using namespace std;


int main()
{
    double area;

    cout << "Enter the area to be painted (in square feet): ";
    cin >> area;
    
    int gallons = ceil(area / 340);

    cout << "Gallons of paint needed: " << gallons << endl;

    return 0;
}
