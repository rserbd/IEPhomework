#ifndef MEAL_HEADER
#define MEAL_HEADER

#include <iostream>

using namespace std;

class Meal
{
    protected: 
        string name;
        int calories;
        int proteins;
        bool isVegetarian;
    public:
        Meal(void); // default constructor
        Meal(string, int, int, bool); // user-defined constructor
        Meal(const Meal&); // default copy-constructor
        ~Meal(void); // default destructor

        void setName(string);
        void setCalories(int);
        void setProteins(int);
        void setIsVegetarian(bool);

        string getName(void);
        int getCalories(void);
        int getProteins(void);
        bool getIsVegetarian(void);

        void viewClassAttributes(void);
};
#endif