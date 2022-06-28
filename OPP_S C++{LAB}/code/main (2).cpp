#include <iostream> 

using namespace std; 
int main () { 
int subject, i;

float mark, total, avrg; 

cout << " \nEnter Number of subject"; 

cin >> subject;

cout << " \nEnter Number mark";

for (i = 0; i < subject; i++) 
{
  cin >> mark; 
  total += mark; 
}

avrg = total / subject;

cout << "\n Total = Sum of Number marks \n " << total;
cout << "\n Average marks = Total / Sum of Number  marks\n  " << avrg; 

return 0; 
} 






 
