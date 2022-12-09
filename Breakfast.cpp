#include "Meal.h"
#include "Breakfast.h"

using namespace std;

Breakfast::Breakfast():
    Meal::Meal(),
    hasEggs(false),
    nrBaconSlices(0)
    {
        cout<<"Default Constructor - Derived class Breakfast \n";
    }

Breakfast::Breakfast(string n, int c, int p, bool v, bool e, int b):
    Meal::Meal(n, c, p, v),
    hasEggs(e),
    nrBaconSlices(b)
    {
        cout<<"User-defined Constructor - Derived class Breakfast \n";
    } 

Breakfast::Breakfast(const Breakfast& b): 
    Meal(b),
    hasEggs(b.hasEggs),
    nrBaconSlices(b.nrBaconSlices)
    {
        cout<<"Copy-constructor - Derived class Breakfast \n";

    }

Breakfast &Breakfast::operator=(const Breakfast &breakfast)
    {
        Meal::operator=(breakfast);
        hasEggs = breakfast.hasEggs;
        nrBaconSlices = breakfast.nrBaconSlices;
        cout<<"Copy assignment operator - Derived class Breakfast \n";
        return *this;
    }

Breakfast::~Breakfast() 
    {   
        cout<<"Default Destructor - Derived class Breakfast \n";
    }  

void Breakfast::setHasEggs(bool e) { hasEggs = e; }
void Breakfast::setNrBaconSlices(int b) { nrBaconSlices = b; }

bool Breakfast::getHasEggs() { return hasEggs; }
int Breakfast::getNrBaconSlices() { return nrBaconSlices; }

void Breakfast::viewClassAttributes() {
    Meal::viewClassAttributes();
    cout<<"Has eggs: " << getHasEggs() << "\n";
    cout<<"Number of bacon slices: " << getNrBaconSlices() << "\n";
}
