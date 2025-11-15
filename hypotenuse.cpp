/*
    The goal of this code is to create a program that acts as a hypotenuse calculator
    We'll use a culmination of what we've prevously learned to create this.
*/

#include <iostream>



int main(){

double A;
double B;

//Side A
std::cout << "Input side A: " << '\n';
std::cin >> A;

//Side B
std::cout << "Input side B: " << '\n';
std::cin >> B;



//MATH : optimal math here = 
//               A = pow(A, 2)
//               B = pow(B, 2)
//               c = sqrt(A + B)
double sum = std::pow(A, 2) + std::pow(B, 2);
double c = std::sqrt(sum);



//Output
std::cout << "You're hypotenuse is : " << c;





    return 0;
}