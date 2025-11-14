#include <iostream>


// In short this has different names with the same variable stored in different places
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){

    using std::cout; //this is a prefix that allows for us to save some time. removes the need for std before ::cout etc...
                         // a downside to this is that there are plenty of std types like data so you would need to use using std::cout

    /*
    namespace = provides a solution tfor preventing name conflicts
    in a large project. Each "Entity" needs a unuique name.
    A namespace allows for identically named entities
    as long as the namespaces are different.
    */

    int x = 0;

    using namespace first; //this is the only way you would not need to prefix x with IE: first::x; , second::x; etc
 
// ^^^^^^^^^^^^^^^^^^^^^^ this code changes std::cout << x; from 0 to 1 (the namespace first) but you would remove int x = 0
// If I do not specify which version (namespace eg. first/second) then the x inside main will be called upon unless we use 
// the code above ^^^^

     cout << first::x;
     cout << second::x;
     cout << x;

    return 0;
}
