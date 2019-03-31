
//**************************************************************
// Given the length and width of a rectangle, this C++ program
// computes and outputs the perimeter and area of the rectangle.
//**************************************************************

//preprocessor commands begin with a pound sign (#)
//preprocessor commands don’t end with a semicolon
// iostream contains (class)

#include <iostream> 
//standard library contains header file of iostream
using namespace std;

int main()
{
    double length;
    double width;
    double area;
    double perimeter;

    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << endl;

    perimeter = 2 * (length + width);
    area = length *  width;

    cout << "Length = " << length << ", width = " << width
         << ", perimeter = " << perimeter << ", area = " << area << endl;
system("pause");
return 0;
}
