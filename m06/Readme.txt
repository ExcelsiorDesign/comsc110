CHAPTER 06 Function Review
...

FOUR higher level programming abstraction:

1. Static Local Variables   pr6-23.cpp 
2. Default Arguments    pr6-24.cpp  
3. Pass by Reference    pr6-25.cpp ( implicit return )
4. Overloading Functions    pr6-27.cpp


/////////////////////////
CHAPTER 07 Arrays 

7.01 Arrays Hold Multiple Values    Table 7-1
7.02 Accessing Array Elements   pr7-2.cpp
    array to/from file          pr7-3.cpp pr7-4.cpp
7.03 No Bounds Checking in C++  pr7-5.cpp
7.04 Array Initialization       pr7-6 pr7-7.cpp
7.05 The Range-Based for Loop   pr7-10.cpp pr7-11.cpp
7.06 Processing Array Contents  pr7-13.cpp


In-class Exercise 5 Textbook p.400 - p.402

Suppose our array definition is:
const int SIZE = 5;
int numbers [SIZE] = {12, 23, 34, 45, 56}; 

Using range-for loop to implement the following:
1. Printing the Contents of an Array 
2. Getting the Average of the Values in a Numeric Array
3. Finding the Highest and Lowest Values in a Numeric Array 


/////////////////////////////////////////
// 10.16.18

7.07 Focus on Software Engineering: 
    Using Parallel Arrays 
7.08 Arrays as Function Arguments 
7.09 Two-Dimensional Arrays 
7.10 Arrays with Three or More Dimensions 
7.12 Introduction to the STL vector 

bubbleSort.cpp

Exercise 6B bubbleSort2.cpp (practice, no submit)
The example bubbleSort.cpp is one of the two bubble sort implementations:
    Sort the larger of the two adjacent items to the right side (bubble down.)
    
    Step 1. Designate the right side as the sorted region.
    Step 2. Find the largest item of the unsorted.
    Step 3. Swap the largest with the far right of the unsorted.
    Step 4. The far right of unsorted became the sorted. 
    Step 5. Repeat step 2 - 5, until no more unsorted items.
    
Running /home/ubuntu/workspace/m06/bubbleSort.cpp
1 4 7 2 5 8 3 6 9 0 

1 4 2 5 7 3 6 8 0 9 
1 2 4 5 3 6 7 0 8 9 
1 2 4 3 5 6 0 7 8 9 
1 2 3 4 5 0 6 7 8 9 
1 2 3 4 0 5 6 7 8 9 
1 2 3 0 4 5 6 7 8 9 
1 2 0 3 4 5 6 7 8 9 
1 0 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 9 

Write a bubble sort that 
    sort the smaller of the two adjacent items to the left side (bubble up.)


    
Running /home/ubuntu/workspace/m06/bubbleSortSmall.cpp
1 4 7 2 5 8 3 6 9 0 

0 1 4 7 2 5 8 3 6 9 
0 1 2 4 7 3 5 8 6 9 
0 1 2 3 4 7 5 6 8 9 
0 1 2 3 4 5 7 6 8 9 
0 1 2 3 4 5 7 6 8 9 
0 1 2 3 4 5 7 6 8 9 
0 1 2 3 4 5 7 6 8 9 
0 1 2 3 4 5 7 6 8 9 
0 1 2 3 4 5 7 6 8 9 


EXERCISE 6C sort.h, test_sort.cpp (improved bubbleSort)
The selectSort used in sort.h is one of the two select sort implementations:

    Step 1. Designate the right side as the sorted region.
    Step 2. Find the largest item INDEX of the unsorted.
    Step 3+4 Swap the largest with the far right of the unsorted.
    Step 5. Repeat step 2 - 5, until no more unsorted items.

The example is to sort the smallest one to the left (sorted) region.
Change it to sort the largest one to the sorted (right) region.


// Compilation using Linux command console
// main_arg.cpp
// To compile and run a program from the system console (bash)
// Passing system arguments into int from system console
    react:~/workspace/m06 (master) $ g++ main_arg.cpp -o main_arg.o
    react:~/workspace/m06 (master) $ ls
    main_arg.cpp     main_arg.o*  selection_sort2.cpp  usingIncludes.cpp.o*
    main_arg.cpp.o*  myMath.h     usingIncludes.cpp
    react:~/workspace/m06 (master) $ ls main_arg.*
    main_arg.cpp  main_arg.cpp.o*  main_arg.o*
    react:~/workspace/m06 (master) $ main_arg.o
    bash: main_arg.o: command not found
    react:~/workspace/m06 (master) $ ./main_arg.o 3 2 1 1
    ./main_arg.o
    3 2 1 1
    react:~/workspace/m06 (master) $ 


