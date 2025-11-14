#include <iostream> //header function that enables input output etc

int main(){

    //int = can only store a whole number, double would be a decimal number etc
    int age = 20; //If I were to put a "7.5" it would print 7, aka rounding down

    //dohble , a number including a decimal EG. price, gpa, etc...
    double bac = 0.08;

    //char, stores a single character
    char grade = 'A';
    char initial = 'B'; // If i were to but 'BC' it would only print C, it would trunkate B.
    char currency = '$'; //----> can even store symbols

    //boolean, a true or false value
    bool student = true;
    bool lights = false;
    bool power = true;
    

    //string, represents a sequence of text, name, day, address, etc...
    std::string name = "Braylon";

    std::cout << name << '\n';
    std::cout << "The legal age for drinking is 21 I am " << age << '\n'; // "the legal age for drinking " if age was the variable name instead it would be a string literal (literally printing a string)
    std::cout << "So my bac is " << bac << '\n';

    return 0; // returns 0 if program has no errors and 1 if there are
}