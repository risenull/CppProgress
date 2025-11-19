#include <iostream>


int main(){
    // swithc = alternative to using many "else if" statements, compare one value against matching cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout <<"It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
            default:
            std::cout << "Please enter only numbers 1 - 12, thank you";
    }



/*
SHITTY CODE DO NOT DO 
    if(month == 1){
        std::cout << "It's January";
    } 
    else if (month == 2){
        std::cout << "It's February";
    }
    else if (month == 3){
        std::cout << "It's March";
    }
    else if (month == 4){
        std::cout << "It's April";
    }
    else if (month == 5){
        std::cout << "It's May";
    }
    else if (month == 6){
        std::cout << "It's June";
    }
    else if (month == 7){
        std::cout << "It's July";
    }
    else if (month == 8){
        std::cout << "It's August";
    }
    else if (month == 9){
        std::cout << "It's September";
    }
    else if (month == 10){
        std::cout << "It's October";
    }
    else if (month == 11){
        std::cout << "It's November";
    }
    else if (month == 12){
        std::cout << "It's December";
    }
*/

    



    return 0;
}