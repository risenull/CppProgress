#include <iostream>

//Temperature conversion app C and F


int main(){

double temp;
char unit;


std::cout << "**************TEMPERATURE CONVERTER**************" << '\n';

std::cout << "Select your unit to convert to (C or F): ";
std::cin >> unit;


//Quality of life
if(unit != 'C' || 'F'){
    std::cout << "Please input either a capital C or captial F, thank you!";
    return 0;
}



//ACTUAL CALCULATOR
if(unit == 'C'){

    std::cout << "Choose your temperature: ";
    std::cin >> temp;
    std::cout << "Your temperature in Farenheight is: " <<  (temp * 1.8) + 32 << " degrees";

} else{
    std::cout << "Choose your temperature: ";
    std::cin >> temp;
    std::cout << "Your temperature in Celcius is: " << (temp - 35) * 1.8 << " degrees";
}








std::cout <<"**************************************************************************************";

    return 0;
}