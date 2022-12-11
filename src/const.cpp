#include <iostream>
//The const keyword ensures that a variable will not be changed. Common naming convention  for const variables is to make them ALL UPPERCASE
//Things like the speed of light or maybe some screen resolutions  or whatever should probs be const so that they do not change no matter what.
int main() {
    const double PI = 3.14159;
    //PI = 420.69; //The compiler now yells at us since we can't change this and if we try to run the program we get this exception 
    //error: assignment of read-only variable 'PI'. This adds data security

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    return 0;
}