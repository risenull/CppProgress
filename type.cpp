#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //usually the new typedef ends in _t, use this for clean good code
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string; //people use this more often becuase its more suitable for templates
using number_t = int;
 


int main(){
/*
typedef = reserved keyword used to create an additional name (alias)
for another data type. New identifier for an existing type helps with
readability and reduces typos
*/

text_t firstName = "Braylon";
number_t age = 50;


std::cout << firstName << '\n';
std::cout << age << '\n';







    return 0;
}