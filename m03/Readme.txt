////////////////////
// README

NTU C++ Programming Language
http://www.ntu.edu.sg/home/ehchua/programming/cpp/cp1_Basics.html

Operators

prefix and postfix are:
	The position of operator to operand which indicate 
	when the operator is perform before or after on the operand.

Referencing a variable, constant, function means to return its value.
An operator is a function with a symbol(s) as its name, such as + - * / ++.
  a+b ==> operator+(a,b)
  operator: +
  operand: a, b

The actual evaluation of the following math expression:
    x = a + b * c - d;
    y = a++ + ++b * c - --d;
    
The explicit association of the operators must be used to clarify the precedence


Branches
- if, if-else, "else if"
- switch-case-break-default 
- menu
- procedural programming
- functional programming 
	@ ex4_18b.cpp
	lamda expression, capture
- expression is composible!

How to clear the cin input buffer
	cin >> c; cin.ignore(); // use this when c is a string
	cin >> c; cin.ignore(1000,'\n'); // erase all subsequent chars
	
