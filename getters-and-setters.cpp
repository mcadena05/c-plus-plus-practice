#include <iostream> 
using namespace std;

// some situations require us to need to control the attributes of an object
class Movie { 
    public: // public = any other program or code can access these attributes
        string title;
        string director;
        

        Student(string aTitle, string aDirector, string aRating) { 
        title = aTitle;
        director = aDirector;
        setRating(aRating);

        }

        void setRating(string aRating){ // using this setter allows us to control the attribute values 
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                 rating = aRating;

            } else {
                rating = "NR";
            }
        
        string getRating (){ // because rating is private we cannot access elsewhere so creating the getter allows us to get rating (private attribute)
            return rating;
        }
           
        }

    private: // private = cannot be accessed only by the class can access it 
        string rating;
        

        //getters and setters allow you to control the access to the different attributes inside c++ classes

       
};

int main () {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    return 0;
}