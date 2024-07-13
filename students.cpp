#include <iostream> 
using namespace std;


class Student { 
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) { 
        name = aName;
        major = aMajor;
        gpa = aGpa;

        }

        bool hasHonors (){ // creating a instant function
        // this function will use the instance specific attributes
            if (gpa >= 3.5){
                return true;
            }
            return false;
        }

};

int main () {
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);


    student1.hasHonors(); // calling the instance function
    student2.hasHonors();

    return 0;
}