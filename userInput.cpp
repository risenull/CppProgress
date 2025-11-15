#include <iostream>
//cout <<
//cin <<


int main(){
    std::string name;
    int age;


    std::cout << "whats your name and age " << '\n';
    std::getline(std::cin, name); // we use this if our string needs spaces for example a full name! After cin, ..std::ws, will remove any blank spaces for the buffer
    std::cin >> age; //the issue with 
    std::cout << "Hola " << name << '\n';
    std::cout << "your're " << age;




    return 0;
}