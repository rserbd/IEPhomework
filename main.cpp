#include <iostream>
#include "Meal.h"
#include "Breakfast.h"
#include "Lunch.h"

using namespace std;

int main() {
    // -- Tema 1 --

    // Meal: name(string), calories(int), proteins(int), isVegetarian(bool)
    // cout<<"----Meal----\n";
    // Meal noodles("Noodles with vegetables", 210, 8, true);
    // noodles.viewClassAttributes();
    // Meal pasta;
    // pasta.viewClassAttributes();

    // Breakfast: Meal attibutes, hasEggs(bool), nrBaconSlices(int)
    // cout<<"\n----Breakfast----\n";
    // Breakfast eggsAndBacon("Eggs and bacon", 512, 14, false, true, 4);
    // eggsAndBacon.viewClassAttributes();
    // Breakfast milkAndCereal;
    // milkAndCereal.viewClassAttributes();
  
    // cout<<"\n----Meal copy----\n";
    // Meal noodlesCopy(noodles);
    // noodlesCopy.viewClassAttributes(); // Copy-constructed meal

    // cout<<"\n----Meal assignment----\n";
    // Meal noodlesAssignment = noodles;
    // noodlesAssignment.viewClassAttributes(); // Assignment meal

    // cout<<"\n----Breakfast copy----\n";
    // Breakfast eggsAndBaconCopy(eggsAndBacon); // Copy-constructed breakfast
    // eggsAndBaconCopy.viewClassAttributes();

    // cout<<"\n----Breakfast assignment----\n";
    // Breakfast eggsAndBaconAssignment = eggsAndBacon; // Assignment breakfast
    // eggsAndBaconAssignment.viewClassAttributes();

    // cout<<"\n----Lunch----\n";
    // Lunch steak("Steak with fries", 635, 41, false, true);
    // steak.viewClassAttributes();
    // Lunch pizza;
    // pizza.viewClassAttributes();

    // -- Tema 2 --

    // Meal: name(string), calories(int), proteins(int), isVegetarian(bool)
    cout<<"\n----------Have assignment operators return a reference to *this------------\n";
    Meal papanasi("Papanasi", 100, 20, true);
    Meal ciorbaRadauteana, mititei;
    ciorbaRadauteana = mititei = papanasi;
    papanasi.viewClassAttributes();
    ciorbaRadauteana.viewClassAttributes();
    mititei.viewClassAttributes();

    cout<<"\n----------Handle assignment to self in operator=------------\n";

    Meal salataDeVinete("Salata de vinete", 80, 5, true);
    Meal sarmale;
    sarmale = salataDeVinete;
    sarmale.viewClassAttributes();
    salataDeVinete = salataDeVinete;
    salataDeVinete.viewClassAttributes();

    cout<<"\n----------Copy all parts of an object------------\n";

    // Breakfast: Meal attibutes, hasEggs(bool), nrBaconSlices(int)
    Breakfast micDejunEnglezesc("Mic dejun turbat englezesc", 300, 40, false, true, 5);
    Breakfast micDejunCaLaMamaAcasaInUK = micDejunEnglezesc;
    micDejunEnglezesc.viewClassAttributes();
    micDejunCaLaMamaAcasaInUK.viewClassAttributes();

    return 0;
}
