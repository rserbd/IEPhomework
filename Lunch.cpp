#include "Meal.h"
#include "Lunch.h"

using namespace std;

Lunch::Lunch():
    Meal::Meal(),
    hasMeat(false)
    {
        cout<<"Default Constructor - Derived class Lunch \n";
    }

Lunch::Lunch(string n, int c, int p, bool v, bool m):
    Meal::Meal(n, c, p, v),
    hasMeat(m)
    {
        cout<<"User-definded Constructor - Derived class Lunch \n";
    }

// Lunch::~Lunch()
//     {
//         cout<<"Default Destructor - Derived class Lunch \n";
//     }

bool Lunch::getHasMeat() { return hasMeat; }

void Lunch::viewClassAttributes() {
    Meal::viewClassAttributes();
    cout<<"Has meat: " << getHasMeat() << "\n"; 
}