/*

file name:Chapter2exercise20.cpp
GitHub URL
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
    double area = 6 * 100 * 2;
    int gallons = ceil(area / 340);

    cout << "Gallons of paint needed: " << gallons << endl;

    return 0;
}