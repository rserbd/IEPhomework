#include <iostream>
#include "Meal.h"
#include "Breakfast.h"
#include "Lunch.h"

using namespace std;

int main() {
    // Meal: name(string), calories(int), proteins(int), isVegetarian(bool)
    cout<<"----Meal----\n";
    Meal noodles("Noodles with vegetables", 210, 8, true);
    noodles.viewClassAttributes();
    Meal pasta;
    pasta.viewClassAttributes();

    // Breakfast: Meal attibutes, hasEggs(bool), nrBaconSlices(int)
    cout<<"\n----Breakfast----\n";
    Breakfast eggsAndBacon("Eggs and bacon", 512, 14, false, true, 4);
    eggsAndBacon.viewClassAttributes();
    Breakfast milkAndCereal;
    milkAndCereal.viewClassAttributes();
  
    cout<<"\n----Meal copy----\n";
    Meal noodlesCopy(noodles);
    noodlesCopy.viewClassAttributes(); // Copy-constructed meal

    cout<<"\n----Meal assignment----\n";
    Meal noodlesAssignment = noodles;
    noodlesAssignment.viewClassAttributes(); // Assignment meal

    cout<<"\n----Breakfast copy----\n";
    Breakfast eggsAndBaconCopy(eggsAndBacon); // Copy-constructed breakfast
    eggsAndBaconCopy.viewClassAttributes();

    cout<<"\n----Breakfast assignment----\n";
    Breakfast eggsAndBaconAssignment = eggsAndBacon; // Assignment breakfast
    eggsAndBaconAssignment.viewClassAttributes();

    // cout<<"\n----Lunch----\n";
    // Lunch steak("Steak with fries", 635, 41, false, true);
    // steak.viewClassAttributes();
    // Lunch pizza;
    // pizza.viewClassAttributes();
    return 0;
}
