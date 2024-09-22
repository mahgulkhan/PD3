#include <iostream>
using namespace std;
main()
{
float imp;
cout << "Enter imposter count:";
cin >> imp;
float player;
cout << "Enter player count:";
cin >> player;
float chance;
chance = (imp/player)*100;
cout << "Chance of being an imposter:" << chance << "%";

}