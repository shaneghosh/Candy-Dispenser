#ifndef DISPENSER_H
#define DISPENSER_H
#include <string>


class dispenser
{

private:

    // Variables of objects of dispenser class
    // Tracks object stock and price
    int itemStock;
    double itemCost;

public:

    // These are all constructors to initialize the stock, cost, or both
    dispenser();
    dispenser(int setStock);
    dispenser(double setCost);
    dispenser(int setStock, double setCost);

    // Function to get current stock of item
    int getStock();

    // Function to get the cost of item
    double getCost();

    // Funtion to return extra money if user overpays
    double returnExtra(double currPayment, int itemNum);

    // Function to ask more money if user underpays
    double askMore(double currPayment, int itemNum);

    // Function to decrease stock after sale
    void makeSale(int numItems);

};

#endif // DISPENSER_H
