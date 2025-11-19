#include <iostream>


int main(){


            //If statements = do something "if" a condition is true. if not, then don't do it 

        int age;

        std::cout << "How old are you: ";
        std::cin >> age;

        if(age >= 18 ){

            std::cout << "You are old enough, you may come in";
        } else{ //this is the "Else operator, may not be in this weeks lesson but its definetly an option"
            std::cout << "You are not old enough, leave";
        }
       //if(age < 18){

       //     std::cout << "You are not old enough to come in";
      //  }



    return 0;
}