//Rui Jiang
//CSIS 137
//Homework #3

#include <iostream>
using namespace std;
#include "FeetInches.h"

int main()

{
	FeetInches myHeight;
	FeetInches yourFriendHeight;
	cout << "Please enter your height in feet and inches: ";
	cin >> myHeight;
	

	cout << "\nPlease enter your friend's height in feet and inches: ";
	cin >> yourFriendHeight;
	
	cout << "==========================" << endl;
	cout << "Your height is: " << myHeight << endl;
	cout << "Your friend's height is: " << yourFriendHeight << endl;
	
	//Testing +
	cout << "Your height and your friend's height together are: " << myHeight + yourFriendHeight;
	

	//Testing equality ==, !=

	if (myHeight == yourFriendHeight)
	{
		cout << "\nYou and your friend have the same height!" << endl;
	}
	else if (myHeight != yourFriendHeight)
	{
		cout << "\nYou and your friend have different height!" << endl;
	}

	//Testing >, <, and -
	if (myHeight < yourFriendHeight)
	{
		cout << "\nYour friend is taller than you! Taller by: " << yourFriendHeight - myHeight << endl;
		
	}
	else if (myHeight == yourFriendHeight)
	{
		cout << "\nYou and your friend are the same height! Which is: " << myHeight << endl;
	}
	else if 
	{
		cout << "\nYou are taller than your friend! Taller by: " << myHeight - yourFriendHeight << endl;
	}

	
}