#include <iostream>
using namespace std;
main() 
{
int size;
cout << "Enter size of fertilizer:";
cin >> size;
int cost;
cout << "Enter cost of the bag: $";
cin >> cost;
int area;
cout << "Enter area per square feet that can be covered  by the bag:";
cin >> area;
int cost2;
cost2 = cost/size;
int cost3;
cost3 = cost/area;
cout << "Cost of fertilizer per pound: $" << cost2 << endl;
cout << "cost of fertilizer per square foot: $" << cost3;




}