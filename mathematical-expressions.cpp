#include <iostream> 

int main() { 
    int x = 10;
    int y =  x++; // x = 11 and y = 10
    int z = ++x; // x = 11 and y = 10 and z = 12

    x = x + 1;
    x = x * x;
    
    z = (x + 10) / (3 * y);

    std::cout << x; 
    return 0; 
}