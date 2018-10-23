Module 7 Text Files

// Review previous subjects
 1. console to main interface uses array m06/main_arg.cpp
 2.1 sorting be very efficient, with skillful loop algorithmic design
 2.2 differnt sorts will be revisited at module 10

// All Text File topics starting here
// Ch 5.12 Text File
    Pr5-15 // rename the outputFile as fout <-- design pattern (cout)
    Pr5-17 // use << >> operator
    Pr5-19 20 // implicit type conversion
// Difference between file device and console device
    the default console device is created by the system for the programer
    there is no default file device, hence ... you have to create when needed.
    
// To use a file device just like a console device


// Pr12-1 ~ lab12-4
// 12.1 File Operation
// 12.2 File Output Formatting
    Table 12.2 File Access Flags, ios_flags: app, ate, binary, in, out, trunc

// Pr12-7 ~ lab12-10
// 12.3 Passing File Stream Objects to Functions
// 12.4 More Detailed Error Testing
// 12.5 Member Functions for Reading and Writing Files 
    fail(), getline(), get(), put()
    Pr12-7


// Hints for Take-Home 
// Use variabe(s) to control the file form & format
    Pr12-4.cpp
// using string class method find()
    using_string_find()
    
    
    



// the following is the bash interaction for comppiling 
// the (m06/) main_arg.cpp 

react:~/workspace/m07 (master) $ cd 
react:~ $ pwd
/home/ubuntu
react:~ $ cd workspace/
react:~/workspace (master) $ ls
README.md  Syllabus.html  m01/  m02/  m03/  m04/  m05/  m06/  m07/
react:~/workspace (master) $ cd m06
react:~/workspace/m06 (master) $ ls m*
main_arg.cpp
react:~/workspace/m06 (master) $ g++ -o main_arg main_arg.cpp                                                                       
react:~/workspace/m06 (master) $ g++ -o main_arg.o main_arg.cpp
react:~/workspace/m06 (master) $ g++ main_arg.cpp
react:~/workspace/m06 (master) $ main_arg.o
bash: main_arg.o: command not found
react:~/workspace/m06 (master) $ main_arg
bash: main_arg: command not found
react:~/workspace/m06 (master) $ ./main_arg.o
the argument that you have entered are:
./main_arg.o 
react:~/workspace/m06 (master) $ ./main_arg.o 123 456 xyz 12.345
the argument that you have entered are:
./main_arg.o 123 456 xyz 12.345 
react:~/workspace/m06 (master) $ 
