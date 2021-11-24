//Rui Jiang
//CSIS 137
//Homework #3

using namespace std;
#include <ostream>
#include <istream>
#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches
{
	friend ostream& operator << (ostream&, const FeetInches&);
	friend istream& operator >> (istream&, FeetInches&);

	private:
	
		int feet;
		int inches;
	
		
	public:
		//constructors take no arguments and 2 args
		FeetInches();
		
		void formatting(FeetInches&);
		//displayAsDecimal(int ft, int ich);

		//operator overloading 
		FeetInches operator+ (const FeetInches&);
		FeetInches operator- (const FeetInches&);
		bool operator == (const FeetInches&) const;
		bool operator != (const FeetInches&) const;
		bool operator > (const FeetInches&) const;
		bool operator < (const FeetInches&) const;
		bool operator >= (const FeetInches&) const;
		bool operator <= (const FeetInches&) const;
	


};

#endif
