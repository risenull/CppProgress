#include <iostream>


int main(){
/*
    Type conversion = conversion of a value of one data type to another 
                    Implicit = automatic
                    Explicit = preced value with new data type (int) x
*/

    //int x = 3.14; this is implicit becuase it truncates the .14 (Its an int not a double) implicitly changing the value to 3
    //double x = (int) 3.14;  // this explcitily changes the value from a double (3.14) to a truncated int value (3).


    //std::cout << x;

    



    //Goal of program is to print a test score, we are going to use correct / # of questions
    int correct = 8;
    int questions = 10;
    //double score = correct/questions * 100;
    //std::cout << score << % this would give us 0 becuase 8/100 is truncated it turns into a truncated version making this 0
    double score = correct/(double)questions * 100; //this helps us retain the decimal in integer division
    std::cout << score <<'%';


    return 0;
}