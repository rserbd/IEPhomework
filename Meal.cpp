#include "Meal.h"

using namespace std;

Meal::Meal():
    name(""),
    calories(0),
    proteins(0),
    isVegetarian(false)
    {
        cout<<"Default Constructor - Base class Meal \n";
    }

Meal::Meal(string n, int c, int p, bool v):
    name(n),
    calories(c),
    proteins(p),
    isVegetarian(v)
    {
        cout<<"User-defined Constructor - Base class Meal \n";
    }

Meal::Meal(const Meal& m) 
    {
        name = m.name;
        calories = m.calories;
        proteins = m.proteins;
        isVegetarian = m.isVegetarian;
        cout<<"Copy-constructor - Base class Meal \n";
    }

Meal &Meal::operator=(const Meal& meal)
    {
        if(this == &meal) {
            cout<<"Object meal is assigned to itself \n";
            return *this;
        }
        name = meal.name;
        calories = meal.calories;
        proteins = meal.proteins;
        isVegetarian = meal.isVegetarian;

        cout<<"Copy assignment operator - Base class Meal \n";
        return *this;
    }

Meal::~Meal() 
    {
        cout<<"Default Destructor - Base class Meal \n";
    }

void Meal::setName(string n) { name = n; } 
void Meal::setCalories(int c) { calories = c; }
void Meal::setProteins(int p) { proteins = p; }
void Meal::setIsVegetarian(bool v) { isVegetarian = v; }

string Meal::getName() { return name; }
int Meal::getCalories() { return calories; } 
int Meal::getProteins() { return proteins; } 
bool Meal::getIsVegetarian() { return isVegetarian; }

void Meal::viewClassAttributes() {
    cout<<"Name: " << getName() << "\n";
    cout<<"Calories: " << getCalories() << "\n";
    cout<<"Proteins: " << getProteins() << "\n";
    cout<<"Is vegetarian: " << getIsVegetarian() << "\n";
}