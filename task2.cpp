#include <iostream>
using namespace std;
main() 
{

int min;
cout << "Number of minutes:";
cin >> min;
int frames;
cout << "Frames per second:";
cin >> frames;
int total;
total = (min*60)*frames;
cout << "Total number of frames per second:" << total;



}