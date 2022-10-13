#include <iostream>
#include <string>
using namespace std;

int main()
{
string bin_string = "10101010";
int number = 0;
number = stoi(bin_string, nullptr, 2);
cout <<"Original binary string: "<< bin_string << endl;
cout <<"Equivalent integer: "<< number << endl;
}