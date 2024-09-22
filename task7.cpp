#include <iostream>
using namespace std;
main() 
{
string name;
cout << "Enter the movie name:";
cin >> name;
int price1;
cout << "Enter the adult ticket price: $";
cin >> price1;
int price2;
cout << "Enter the child ticket price: $";
cin >> price2;
int sold1;
cout << "Enter the number of adult tickets sold: ";
cin >> sold1;
int sold2;
cout << "Enter the number of child tickets sold: ";
cin >> sold2;
int donation;
cout << "Enter percentage of amount to be donated to the charity: ";
cin >> donation;
cout << "                    " << endl;
cout << "Movie: " << name << endl;
int total;
total = (price1 * sold1) + (price2 * sold2);
cout << "Total amount generated from ticket sales: $" << total << endl;
float charity;
charity = (total*10)/100;
cout << "Donation to charity (10%): $" << charity << endl;
int remaining;
remaining = total-charity;
cout << "Remaining amount after donation: $" << remaining;






}