#include <iostream>

int main() {
    //This is a comment
    /*
    This is a mulitline comment
    */

    std::cout << "I like burgers!" << '\n'; //new line character. This is slightly faster than std::endl 
    std::cout << "This is a second line!" << std::endl; //This is slightly slower but it flushes the output buffer
    return 0;
}