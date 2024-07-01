#include <iostream> 
using namespace std; 

int main() { 
    // c++ is statically types language like C# and Java
    // statically types = data type cannot change after variable is declared

    // bool = true/false
    // char = store single character
    // double = standard for decimal
    // float = smaller double
    // int
    // short = small int
    // long long = very large int

    double price = 99.99;
    float interest =- 3.67f; // floats need the f at the end or it will treat as a double and we could have data loss
    long fileSize = 90000L; // captial L so it doesnt get confused with 1
    char  letter = 'a';
    bool isValid = false;

    auto vaild = true; // auto will get the data type automatically 

    int number = 0;
    int num {}; // empty brackets if not initializing value like previous statement



    return 0; 
}