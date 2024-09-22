#include <iostream>
using namespace std;
main()
{

int sqm;
cout << "Enter number of square meters you can paint: ";
cin >> sqm;
int width;
cout << "Enter width of one wall (m): ";
cin >> width;
int height;
cout << "Enter the height of one wall (m): ";
cin >> height;
int walls;
walls = sqm/(width*height);
cout << "Number of walls you can paint: " << walls;




} 