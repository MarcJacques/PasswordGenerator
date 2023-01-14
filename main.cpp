#include <string>
#include <iostream>
using namespace std;
int main() 
{
  string firstName, lastName, password;
  cout << "What is your name? ";
  getline(cin, firstName);
  cout << "What is your last name? ";
  getline(cin, lastName);

  password = firstName.substr(0,3) + lastName.substr(0, 1);

  cout << " Your new password is: " << password;
  return 0;
}