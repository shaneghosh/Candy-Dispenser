#include "dispenser.h"
#include "iostream"

// Constructor sets item stock to 50
dispenser::dispenser()
{
    itemStock = 50;
}

// Constructor sets cost to arguement and item stock to 50
dispenser::dispenser(double setCost)
{
    itemStock = 50;
    itemCost = setCost;
}

// Constructor sets stock to arguement
dispenser::dispenser(int setStock)
{
    itemStock = setStock;
}

// Constructor sets cost and stock to arguements
dispenser::dispenser(int setStock, double setCost)
{
    itemStock = setStock;
    itemCost =setCost;
}

// Function returns the stock of an object
int dispenser::getStock()
{
    return itemStock;
}

// Function returns the cost of an object
double dispenser::getCost()
{
    return itemCost;
}

// Function returns the extra amount a user has to pay
double dispenser::askMore(double currPayment, int itemNum)
{
    // Rembal is calculated by taking the total cost - what the user has payed
    double remBal;
    remBal = (itemCost*itemNum) - currPayment;

    return remBal;
}

// Function returns the amount a user gets back
double dispenser::returnExtra(double currPayment, int itemNum)
{
    // extrBal is calculated through substracting the total cost from what the user has payed
    // returns what user should get back
    double extrBal;
    extrBal = currPayment - (itemCost*itemNum);

    return extrBal;
}

// Reduces stock of item proportional to what the user has ordered
void dispenser::makeSale(int numItems)
{
    itemStock -= numItems;
}
