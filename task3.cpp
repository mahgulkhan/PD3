#include <iostream>
using namespace std;
main()
{
int v1;
cout << "Enter inital velocity (m/s):";
cin >> v1;
int a;
cout << "Enter final acceleration (m/s^2):";
cin >> a;
int time;
cout << "Enter time (s):";
cin >> time;
int v2;
v2 = (a*time) + v1;
cout << "Final Velocity (m/s):" << v2;





}