/* program to calculate the area of square */
#include <iostream>
using namespace std;

int main() 
{
   int area, square_side;

   cout << "Enter the side of square:";
   cin >> square_side;

   area = square_side * square_side;

   cout << "Area of Square: " << area << endl;
   return 0;
} 
