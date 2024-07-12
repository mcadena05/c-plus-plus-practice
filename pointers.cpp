#include <iostream> 
using namespace std;
#include <string>

int main (){
// a pointer is a varaible we can use that stores the memory address of a variable from RAM
// pointer = where is this being stored

    int age = 19;
    int *pAge = &age; // Syntax to name a pointer is to * inductry standard is to to add 'p' infront of name of variable we are creating pointer for 

    double gpa = 2.7;
    double pGpa = &gpa; // the & allows to create pointer. Shows which varaibel we are creating pointer for

    string name = 'Marlynn';
    string *pName = &name;

    //dereferencing a pointer means grabbing address stored in the pointer and then retrieving the value being stored at that pointer/address
    //example of dereferencing = *pAge or *&age

    return 0;

}