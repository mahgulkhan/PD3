#include <iostream>
using namespace std;
main()
{
float veg;
cout << "Enter vegetable price per kilogram (in coins): ";
cin >> veg;
float fruits;
cout << "Enter fruit price per kilogram (in coins): ";
cin >> fruits;
int totalveg;
cout << "Enter total kgs of vegetables: ";
cin >> totalveg;
int totalfruits;
cout << "Enter total kgs of fruits: ";
cin >> totalfruits;
int earning;
earning =((veg/1.94)*totalveg) + ((fruits/1.94)*totalfruits);
cout << "Total earnings in Rupees (rps): " << earning;






}