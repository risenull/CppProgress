#include <iostream> //header function for inputs and outputs 

int main() {
    //std::cout means standard character output , << = output | >> = input
    std::cout << "I like steak" << '\n';// ; = a sentance period, << '/n' is also a newline
    std::cout << "It's really good" << std::endl; // << std::endl makes a new line(endl removes the output buffer (faster))

    return 0; //if we reach return 0 that means there are no issues returned, if 1 is returned there is an issue
}
