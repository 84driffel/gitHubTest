//
//Name: Daniel Riffel
//Date: 11/29/18
//Description: Test File
//

#include <iostream>

using namespace std;

int main()
{

	cout << "Hello World" << endl;
	string name;
	cout << "Please enter your name" << endl;
	cin >> name;
	int c = 0;
	for(char c : name)
	{
		c++;
	}
	cout << "There are " << c << " numbers in your name" << endl;
}
