#include <iostream>

int main() {
    //integers    
    int x; //declaration
    x = 5; //assignment
    int c = 6; // you can do this in one line as well
    int sum = x + c;
    

    int truncated = 7.5; //This int will be truncated removing the decimal point
    std::cout << truncated << '\n';

    //double
    double price = 7.5;
    std::cout << price << '\n';

    //char (single character) Trying to store more than one character will give us an overflow exception
    char grade = 'A';
    char intial = 'B';
    char dollarSign = '$';

    //boolean
    bool t = true;
    bool f = false;

    //string
    std::string name = "Theis";
    std::cout << name;

    //string literal
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << x << " years old"; 

    std::cout << x << '\n';    
    std::cout << c << '\n';
    std::cout << sum << '\n';



    return 0;   
}