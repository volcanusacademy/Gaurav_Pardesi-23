#include <iostream>

using namespace std;

int
main ()
{
  int num, arrange[5], temp = 0, temp1 = 0, temp2 = 0; // declare all variables
  cout << "Enter 5 digit number";
  cin >> num;
  for (int i = 0; i < 5; i++) // for loop for we convert 5 digit number in array 
    {
      temp = num % 10;
      arrange[i] = temp;
      num = num / 10;
    }
  cout << "\n";
  temp1 = arrange[1]; // temp1 hold index of 2 value
  temp2 = arrange[3]; // temp2 hold index of 4 value
  arrange[1] = temp2; // we change 2 index value to index 4 value
  arrange[3] = temp1;// we change 4 index value to index 2 value
  for (int i = 4; i >= 0; i--) // for loop for print output 
    {
      cout << arrange[i];
    }
  return 0;
}