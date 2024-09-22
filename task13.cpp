#include <iostream>
using namespace std;
main() 
{

int num;
cout << "Enter 5 integers: ";
cin >> num;
int sum;
sum = (num%10)+((num/100)%100)+((num/1000)%10)+((num/10000)%10)+((num/100000)%10);
cout << "Sum of integers is: " << sum;




}