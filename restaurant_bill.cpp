//This program computes the total meal cost with tax and tip included. 
//Yasim Cruz
#include <iostream> 
#include <iomanip>
using namespace std;

int main() 
{
    double meal,
            tax,
            tip,
            mealCost,
            totalMealCost,
            totalMealTip,
            finalMealCost;
    // user input
    cout << "Bill Calculator" << endl;
    cout << "Enter meal cost: ";
    cin >> meal;
    cout << "Enter tax amount(Ex. if tax is 2.50, enter 0.0250): ";
    cin  >> tax;
    cout << "Enter tip amount(Ex. if tip is 10%, enter 0.10): ";
    cin  >> tip;
    // calculations
    mealCost = meal * tax;
    totalMealCost = meal + mealCost;
    totalMealTip = totalMealCost * tip;
    finalMealCost = totalMealTip +totalMealCost;
    //print results
    cout << "Total meal cost: $" << fixed << setprecision(2) << finalMealCost << endl;


    return 0;
}