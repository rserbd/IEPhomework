#include <iostream>
#include "Meal.h"
#include "Breakfast.h"

using namespace std;

int main() {
    //Meal: name(string), calories(int), proteins(int), isVegetarian(bool)
    Meal noodles("Noodles with vegetables", 210, 8, true);
    noodles.viewClassAttributes();
    Meal pasta;
    pasta.viewClassAttributes();
    return 0;
}
