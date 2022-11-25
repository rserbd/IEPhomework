#ifndef BREAKFAST_HEADER
#define BREAKFAST_HEADER

#include "Meal.h"
#include <iostream>

using namespace std;

class Breakfast: public Meal
{
    private: 
        bool hasEggs;
        int nrBaconSlices;
    public:
        Breakfast(void); // default constructor
        Breakfast(string, int, int, bool, bool, int); // user-defined constructor
        Breakfast(const Breakfast&); // default copy-constructor
        ~Breakfast(void); // default destructor

        void setHasEggs(bool);
        void setNrBaconSlices(int);

        bool getHasEggs(void);
        int getNrBaconSlices(void);

        void viewClassAttributes(void);
};
#endif