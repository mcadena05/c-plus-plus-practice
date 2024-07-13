#include <iostream> 
using namespace std;


class Book { //blueprint of attributes
    public: // specifying attributes
        string title;
        string author;
        int pages;

        Book (){ // constructor that takes in no arugments and creates default like attributes
            title = 'no title';
            author = 'no author';
            pages = 0
        }

        Book(string aTitle, string aAuthor, int aPages) { // constructor = method to create class instance (object)
        // constructor can take in arguments 
        title = aTitle;
        author = aAuthor;
        pages = aPages;

        }

    
};

int main () {

    // create an object here
    // object == instance 

    Book book1(); // creating the actual instance

    // Giving the object attributes
    book1.title = ' Harry Potter';
    book1.author = ' Jk Rowling';
    book1.pages = 500;
  

    // creating an isntance using the constructor
    Book book2 ("Lord of the Rings", "Tolkrin", 700);

    return 0;
}