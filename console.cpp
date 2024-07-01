#include <iostream> 
using namespace std; // allows for the removal of std:: in code because it allows us to grab the object throughout


int main() { 
    int x = 10;
    int y = 20;

    cout << "x = " << x << endl; 
    // count = object that represents "Standard Output Stream" 
    //stream = characters/string 
    //Standard Output = console
    // << after first statement allows for chaining of next statement
    // std::endl = end line and start new line 

    cout << "Enter a value: ";
    double value;

    cin >> value; //cin is input from console 
                  // the >> are opposite to cout 
    cout << value;

    return 0; 
}