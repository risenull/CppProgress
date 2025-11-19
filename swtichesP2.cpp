#include <iostream>
//A program that determines your letter grade and based off of that grade it gives you an output string

int main(){

    char grade;
     


    std::cout << "What letter grade did you recieive on this test (A,B,C,D or F): ";
    std::cin >> grade;

    switch(grade){
    case 'A':
        std::cout << "you got in between a 90 and 100!";
        break;
    case 'B':
        std::cout << "you got in between a 89 and 80!";
        break;
    case 'C':
        std::cout << "You got in between a 79 and 70!";
        break;
    case 'D':
        std::cout << "You got in between a 69 and 60!";
        break;
    case 'F':
        std::cout << "That is miserable LOL!";
        break;
    }


    return 0;
}