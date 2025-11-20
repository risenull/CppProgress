#include <iostream>
//This is going to be a calculator app using switches


int main(){

char operation;
double x, y;
std::cout << "Please select the operation you would like (*, /, -, +): ";
std::cin >> operation;

switch (operation)
    {

    //Multiplication

    case('*'):
       std::cout << "you've selected *, now input X : ";
       std::cin >> x;
       std::cout << "now input Y: ";
       std::cin >> y;
       std::cout << "your variables multiplied are : " << x*y;
       break;

    //Division
    
    case('/'):
       std::cout << "you've selected /, now input X : ";
       std::cin >> x;
       std::cout << "now input Y: ";
       std::cin >> y;
       std::cout << "your variables divided are : " << x/y;
       break;

    //Addition

    case('+'):
       std::cout << "you've selected +, now input X : ";
       std::cin >> x;
       std::cout << "now input Y: ";
       std::cin >> y;
       std::cout << "your variables added are : " << x+y;
       break;

    //Subtraction

    case('-'):
       std::cout << "you've selected -, now input X : ";
       std::cin >> x;
       std::cout << "now input Y: ";
       std::cin >> y;
       std::cout << "your variables subtracted are : " << x-y;
       break;
    }
    






    return 0;
}