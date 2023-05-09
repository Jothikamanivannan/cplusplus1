/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

include <iostream>
#include <string>
using namespace std;
/*Name:Jothika M 
College name:Vivekanandha College of ENgineering for women
datas used:location,temperature*/

int main() {
   string location;
   double weeklyTemp[5];
   double totalTemp = 0;
   double averageTemp;

   cout << "Enter location: ";
   getline(cin, location);

   for (int i = 0; i < 5; i++) 
   {
      cout << "Enter temperature for day " << i+1 << ": ";
      cin >> weeklyTemp[i];
      totalTemp += weeklyTemp[i];
   }

   averageTemp = totalTemp / 5;

   cout << "Weekly weather report for " << location << ":" << endl;
   for (int i = 0; i < 5; i++) {
      cout << "Day " << i+1 << ": " << weeklyTemp[i] << " degrees " << endl;
   }
   cout << "Average temperature: " << averageTemp << " degrees " << endl;

   return 0;
}