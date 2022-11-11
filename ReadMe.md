# Beginner C Course Notes

## Summary

* This is all for my beginner C course and will be updated as the course unfolds.

# Notes

* Notes form my beginner C course

## Basic Application Functions

* Run DeBug - Fn + F5
* Run Build - Ctrl + Shift + B - When trying to run a build for a specific file, you must make sure the task.json file has been updated with the proper source in the args.  

## Print Functions

* printf() - Prints the string inside
* scanf() - Can read a variety of formats. Simple constant strings you can specify with, %s %d %c %f and so on, to read strings, integers, characters or floats. 

## Types

* int - a variable of type int can be used to contain integral values only (values that do not contain decimal places). A minus sign preceding the data type and variable indicates that the   value is negative. int must be an integer, it can be positive, negative or zero. if an integer is preceded by a zero and the letter x (lower or upper) the value is taken as being expressed in hexadecimal (base 16) notation
    * int rgbColor = 0xFFEF0D;
* double - the double type is the same as type float, only with roughly twice the precision
    * used whenever the range provided by a float variable is not sufficient
    * can store twice as many significant digits
    * most computes represent double values using 64 bits
* all floating-point constants are taken as double values by the C compiler. To explicitly express a float constant, append either an f or F to the end of the number
    * 12.5f
* _Bool - the _Bool data type can be used to store just value 0 or 1, used for indicating an on/off, yes/no, or true/false situation (binary choices). _Bool variables are used in programs that need to indicate a Boolean condition, a variable of this type might be used to indicate whether all data has been read from a file. 0 is used to indicate a false value. 1 indicates a true value

## Bitwise Operators

* & Binary AND operator copies a bit to the result if it exists in both operands. (A & B) = 12, i.e. 0000 1100
* | Binary OR operator copies a bit if it exists in either operand. (A | B) = 61, i.e. 0011 1101
* ^ Binary XOR operator copies the bit if it is set in one operand but not both. (A ^ B) = 49, i.e. 0011 0001
* ~ Binary ones complement operator is unary and has the effect of 'flipping' bits. (~A) = -61, i.e. 1100 0011 in 2's complement form
* << Binary left shift operator. The left operands value is moved left by the number of bits specified by the right operand. A << 2 = 240 i.e. 1111 0000
* ... >> Binary Right shift operator. The left operands value is moved right by the number of bits specified by the right operand. A >> 2 = 15 i.e. 0000 1111

## sizeof Operator and Other Operators

* sizeof(int) will result in the number of bytes occupied by a variable of type int
    * sizeof in an expression - result is the size of value that results from evaluating the expression
    * Use size of whenever possible to avoid having to calculate and hard-code size into your program 
* the astrisk "*" operator represents a pointer. See pointers for more
* ? ternary operator see pointers for more detail 
* Operator Precedence, the order of executing the various operations can make a deference, C needs unambiguous rules for choosing what to do first. 
    * for example, in x = 7 + 3 * 2, x is assigned 13 not 20 because operator * has a higher precedence than the +
    * multiplication and division have higher precedence then addition and subtraction. 
    * () is how you get around that. Whatever is enclosed in () is executed first. You should always use parentheses to group expressions.
* Associativity, if two operators have the same precedence the associativity rules apply.
    * If they have the same operand, they are executed according to the order in wih they occur in the statement. For most operators the order is from left to right.
* Operator Priority (Highest - Lowest precedence) 
    * Postfix Operators, () [] - > . ++ -- (left to right) 
    * Unary Operators, + - ! ~ ++ --(type)*&sizeof (right to left)
    * Multiplicative Operators, * / % (left to right)
    * Additive Operators, + - (left to right)
    * Shift Operators, <<>> (left to right)
    * Relational Operators, <<= >>= (left to right)
    * Equality Operators, == != (left to right)
    * Bitwise AND, & 
    * Bitwise XOR, ^
    * Bitwise OR, | 
    * Logical AND, && 
    * Logical OR, || 
    * Conditional, ? : (Right to left)
    * Assignment, = += -= *= /= %= >>= <<= &= ^= |= (Right to left)
    * Comma, , 
