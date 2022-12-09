#ifndef LUNCH_HEADER
#define LUNCH_HEADER

#include "Meal.h"
#include<iostream>

using namespace std;

class Lunch: public Meal
{
    private:
        bool hasMeat;
    public:
        Lunch(void); // default constructor
        Lunch(string, int, int, bool, bool); // user-defined constructor
        // ~Lunch(void); // default destructor
        
        bool getHasMeat(void);

        void viewClassAttributes(void);
    // ~Lunch() = delete;
};
#endif