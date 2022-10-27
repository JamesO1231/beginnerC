# Beginner C Course Notes

## Summary

* This is all for my beginner C course and will be updated as the course unfolds.

## Notes

* Run DeBug - Fn + F5
* Run Build - Ctrl + Shift + B - When trying to run a build for a specific file, you must make sure the task.json file has been updated with the proper source in the args.  

* printf() - Prints the string inside
* scanf() - Can read a variety of formats. Simple constant strings you can specify with, %s %d %c %f and so on, to read strings, integers, characters or floats. 

* int - a variable of type int can be used to contain integral values only (values that do not contain decimal places). A minus sign preceding the data type and variable indicates that the   value is negative. int must be an integer, it can be positive, negative or zero. if an integer is preceded by a zero and the letter x (lower or upper) the value is taken as being expressed in hexadecimal (base 16) notation
    * int rgbColor = 0xFFEF0D;
* double - the double type is the same as type float, only with roughly twice the precision
    * used whenever the range provided by a float variable is not sufficient
    * can store twice as many significant digits
    * most computes represent double values using 64 bits
* all floating-point constants are taken as double values by the C compiler. To explicitly express a float constant, append either an f or F to the end of the number
    * 12.5f
* _Bool - the _Bool data type can be used to store just value 0 or 1, used for indicating an on/off, yes/no, or true/false situation (binary choices). _Bool variables are used in programs that need to indicate a Boolean condition, a variable of this type might be used to indicate whether all data has been read from a file. 0 is used to indicate a false value. 1 indicates a true value

## Bitwise operators

* & Binary AND operator copies a bit to the result if it exists in both operands. (A & B) = 12, i.e. 0000 1100
* | Binary OR operator copies a bit if it exists in either operand. (A | B) = 61, i.e. 0011 1101
* ^ Binary XOR operator copies the bit if it is set in one operand but not both. (A ^ B) = 49, i.e. 0011 0001
* ~ Binary ones complement operator is unary and has the effect of 'flipping' bits. (~A) = -61, i.e. 1100 0011 in 2's complement form
* << Binary left shift operator. The left operands value is moved left by the number of bits specified by the right operand. A << 2 = 240 i.e. 1111 0000
* ... >> Binary Right shift operator. The left operands value is moved right by the number of bits specified by the right operand. A >> 2 = 15 i.e. 0000 1111

