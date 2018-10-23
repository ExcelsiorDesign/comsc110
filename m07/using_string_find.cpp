// string::find
#include <iostream>			 // std::cout
#include <string>				 // std::string
using namespace std;

int main ()
{
	string str ("There are two needles in this haystack with needles.");
	string str1 ("There are two beagles in this farm with beagles.");
	string str2 ("needle");

	if (str.find(str2) != -1)
		cout << "'needle' found at: " << str << '\n';
	else 
		cout << "'needle' is not in : " << str << '\n';
	if (str1.find(str2) != -1)
		cout << "'needle' found at: " << str1 << '\n';
	else 
		cout << "'needle' is not in : " << str1 << '\n';

}
