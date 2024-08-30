Operator Overloading in C++: Circle Class Example

This repository demonstrates the concept of operator overloading in C++ using a Circle class example.

Overview

Operator overloading allows us to redefine the behavior of operators when working with user-defined data types, such as classes. In this example, we overload the + operator to combine the radii of two Circle objects.

Circle Class

The Circle class has the following members:

- Private data member radius to store the circle's radius
- Default constructor to initialize the radius to 0.0
- Setter function setRadius to set the radius
- Getter function getRadius to retrieve the radius
- Overloaded + operator to combine the radii of two Circle objects

Main Function

In the main function, we:

- Create three Circle objects c1, c2, and c3
- Set the radii of c1 and c2 using the setRadius function
- Combine the radii of c1 and c2 into c3 using the overloaded + operator
- Display the radius of c3 using the getRadius function

Output

The program outputs the radius of the third circle, which is the sum of the radii of the first two circles.

Key Concepts

- Operator overloading
- Class design
- Constructor and destructor
- Setter and getter functions


--------------SECOND PART OF WEEK 6 TASK-------------------


Overloading Stream Operators for Complex Class
over view
 

This C++ program demonstrates overloading the stream insertion (<<) and stream extraction (>>) operators for a Complex class. The Complex class has two private data members: real and imaginary, representing the real and imaginary parts of a complex number.

Stream Insertion Operator (<<)

The << operator is overloaded to print the complex number in the format a + bi, where a is the real part and b is the imaginary part.

Stream Extraction Operator (>>)

The >> operator is overloaded to read the real and imaginary parts of a complex number from the input stream.

Main Function

In the main() function, an object com1 of the Complex class is created. The program prompts the user to enter the real and imaginary parts of a complex number, which are read using the overloaded >> operator. The complex number is then printed using the overloaded << operator.

Output

When run, the program will display the following output:

Enter real and imaginary parts: 3 4
Complex number: 3 + 4i

Note: The user input 3 4 represents the real and imaginary parts of the complex number, respectively.


  Author[Nayab]

  Verion[1.0]
  


Author[Nayab]

version [1.0]
  

