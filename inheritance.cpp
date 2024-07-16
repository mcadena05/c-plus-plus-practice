#include <iostream>
using namespace std;

class Chef {
    public:// super class
        void makeChicken() {
            cout<< "The chef makes chicken" << endl
        }
        void makeSalad() {
            cout<< "The chef makes salad" << endl
        }
        void makeSpecialDish() {
            cout<< "The chef makes Korean Fried Chicken" << endl
        }
};

class ItalianChef: public Chef{ // adding the public Chef allows for this class to inherite all the functions in the parent class
    public: // subclass
        void makePasta () {
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish() { // we can override the original inherited method
            cout<< "The chef makes Spagetti" << endl
        }
};

int main(){

    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();

    return 0;
}