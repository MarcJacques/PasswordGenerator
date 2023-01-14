#include <string>
#include <iostream>
using namespace std;
int main() 
{
  string firstName, lastName, password;
  cout << "What is your first name? ";
  cin >> firstName;
  cout << "What is your last name? ";
  cin >> lastName;

  password = firstName.substr(0,3) + lastName[0];

  cout << " Your new password is: " << password;
  return 0;
}