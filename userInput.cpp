#include <iostream>
//cout <<
//cin <<


int main(){
    std::string name;
    int age;


    std::cout << "whats your name and age " << '\n';
    std::getline(std::cin, name); // we use this if our string needs spaces for example a full name!
    std::cin >> age;
    std::cout << "Hola " << name << '\n';
    std::cout << "your're " << age;




    return 0;
}