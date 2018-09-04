///////////////////////////////
// README
//

// C++ (preprocessor) directive to compiler
// existing ready to use code (header, library)
    #include <iostream>    // to include input & output stream devices
    #define ifndef DEMO_H  // to define DEMO_H as an user defined keyword

// Compiler use namespace to pull code from different libraries
// To use default standard namespace
    using namespace std;// See https://goo.gl/g49NHg

    
// Variables and Literals, Ch 2.6 - 2.10
// Data has type and size
// Type of (System defined) Data: Number, Text, Boolean, and Nothing

    int i;  
    int j = 2;
    double f,g,h=3.3; // multiple declaration in one statement
    
// Scope p.61
    {
        ...
        cout << "Enter an integer number: ";   // statement ending with ;
        std::cout <<  "Enter an integer number: ";
        
    }
    
// Arithmetic Operators 61
    +, -, *, /, %
    
// Comments are ignored by compiler p. 69
    // signle line, effective til end of line
    /* multi-line, effective 
       .... more lines, until 
    */
    
// Determining the Size of a Data Type 
    int i;
    cout << sizeof(i);


// Named Constants p. 71
    const int SIZE = 12;

// Programming Style p. 73
    (Block) Indented and Offside