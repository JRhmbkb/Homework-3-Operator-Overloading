#include "FeetInches.h"
//Rui Jiang
//CSIS 137
//Homework #3
using namespace std;
#include <ostream>
#include <istream>
#include <iostream>

ostream& operator<<(ostream& osm , const FeetInches& right)
{
	osm << right.feet << "\' " << right.inches << "\"";
		
	return osm;
}

istream& operator>>(istream& ism,  FeetInches& right)
{
	cout << "\nWhat's the input for feet? " << endl;
	ism >> right.feet;

	cout << "What's the input for inches?" << endl;
	ism >> right.inches;

	if (right.feet < 0)
	{
		right.feet = 0;
	}

	else if (right.inches < 0)
	{
		right.inches = 0;
	}

	else
	{
		if (right.inches >= 12)
		{
			int extraFt = floor(right.inches / 12);
			right.inches = right.inches % 12;
			right.feet = right.feet + extraFt;
		}
	}

	return ism;
}

FeetInches::FeetInches()
{
	inches = 0;
	feet = 0;
}

void FeetInches::formatting(FeetInches& ftiches)
{
	//input validation for negative
	if (ftiches.feet < 0)
	{
		ftiches.feet = 0;
	}
	else if (ftiches.inches < 0)
	{
		ftiches.inches = 0;
	}
	else
	{
		if (ftiches.inches >= 12)
		{
			int extraFt = floor(ftiches.inches / 12);
			ftiches.inches = ftiches.inches % 12;
			ftiches.feet = ftiches.feet + extraFt;
		}
	}

}



FeetInches FeetInches::operator+(const FeetInches& right)
{
	FeetInches temp;

	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;

	formatting(temp);

	return temp;

}

FeetInches FeetInches::operator-(const FeetInches& right)
{	
	FeetInches temp;


	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;

	formatting(temp);

	return temp;
}

bool FeetInches::operator==(const FeetInches& right ) const
{
	if (feet == right.feet && inches == right.inches)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool FeetInches::operator!=(const FeetInches& right)  const
{
	if (feet == right.feet && inches == right.inches)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool FeetInches::operator>(const FeetInches& right) const
{
	if (feet > right.feet)
	{
		return true;
	}
	else if (feet == right.feet)
	{
		if (inches > right.feet)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool FeetInches::operator<(const FeetInches& right) const
{
	if (feet < right.feet)
	{
		return true;
	}
	else if (feet == right.feet)
	{
		if (inches < right.feet)
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

bool FeetInches::operator>=(const FeetInches& right) const
{
	if (feet > right.feet)
	{
		return true;
	}
	else if (feet == right.feet && inches >= right.inches)
	{
		return true;
	}
	
	else
	{
		return false;
	}
	
}

bool FeetInches::operator<=(const FeetInches& right) const
{
	if (feet < right.feet)
	{
		return true; 
	}
	else if (feet == right.feet && inches <= right.inches)
	{
		return true;
	}

	else
	{
		return false;
	}
}
