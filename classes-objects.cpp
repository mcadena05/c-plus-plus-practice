#include <iostream> 
using namespace std;


class Book { //blueprint of attributes
    public: // specifying attributes
        string title;
        string author;
        int pages;

    
};

int main () {

    // create an object here
    // object == instance 

    Book book1; // creating the actual instance

    // Giving the object attributes
    book1.title = ' Harry Potter';
    book1.author = ' Jk Rowling';
    book1.pages = 500;
  

    return 0;
}