
Create a class FeetInches. This class represents measurements in terms of feet and inches (so you 
need at least a private feet data member and an inches data member). The class should have the 
following capabilities:

1. A constructor that:
o Can be called with two arguments, the feet and the inches, or the function can be called 
with zero arguments in which case the feet and inches are both zero
o The constructor should reduce the feet and inches passed into it to their simplest terms.
o The constructor prevent feet or inches from being set to negative numbers (you decide 
how)
o The constructor should store feet and inches in their simplest terms
§ For example if the user passed 2 feet 12 inches to the constructor that should 
simplify that to 3 feet 0 inches
§ You may want a utility function for this 

2. Overload the addition and subtraction operators for this class.

3. Overload the relational and equality (= =) and inequality (!=) operators for this class

4. Overload the << operator for this class (you could display the output as 3 feet, 2 inches or you could 
display the output as 3’ 2” if you would prefer, or maybe you have another idea you decide what you 
think is best)

5. Overload the >> operator for this class (you design it in the way you think is best)

6. Overload the >, <, >=, and <= operators for this class

7. Add a function that displays feet and inches as a decimal (so 8 foot 6 inches would display as 8.5 feet)

8. Add any other appropriate functions you think the class may need such as get and set functions. Make 
sure and design them properly.
Test your class with a client program called feetInchesTest.cpp. Make sure and test ALL member functions and 
demonstrate they are working correctly.
Don’t forget to make a UML Diagram for this class.
