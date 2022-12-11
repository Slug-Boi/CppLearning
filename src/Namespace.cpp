#include <iostream>
/*
Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
            A namespace allows for identically named entities as long as the namespaces are different.
*/

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    /*
    int x = 0;
    int x = 1;
    this will not work as a two variables cannot have the same name and be declared
    */
    //using namespace first; 
    // This would result in the default namespace being first so the x value would be 1

    //using namespace std; 
    // This is sort of a bad thing to do. this would result in you not having to type std:: in front of things but this will most likely result
    // in naming conflicts as std:: has hundreds of functions

    //using std::cout; 
    //This is much better as it cuts out having to type out std:: in front of cout without the problem of the above mentioned trick
    //using std::string


    int x = 0;

    std::cout << x; // so if we don't specify which namespace to use the program will use the local variable.
    std::cout << first::x; //If we want the first namespace we would simply prefix the variable with the namespace name and then use :: (the scope resolution operator)
    std::cout << second::x;

    return 0;
}