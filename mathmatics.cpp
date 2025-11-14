#include <iostream>
//OVERALL PEMDAS IS OUR ORDER OF OPERATIONS MORE LIKE PMDAS

int main(){
/*
 Arithmetic operators = return the result of a specific arithmetic operation (+ - * /)
*/

int students = 20; //if we change int to double we are able to get exact numbers from division

//ADITION
//students = students + 1; this code is the same as the one below
//students+=1;
//students++; ads 1 and only 1

//SUBTRACTION
//students = students -1 ;
//students = students-=1;
//students--; //subtracts 1 and only 1


//MUTLIPLICATION
//students = students *2;
//students*=2;

//DIVISION
//students = students / 2;
//students/=3; // since the variable type is "int" we truncate the rest of the decimal point

int remainder = students % 3; //think of the output like groups, since we can only divide this evenly by 2 we have 2 groups with 1 remainder



std::cout << remainder;



    return 0;
}