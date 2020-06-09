//Aleksander Brown
//alekjbrown@live.com
// June 2,2020

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{

    const double unitPrice = 19.97;
    const double taxRate = 0.05;
    const int unitWeight = 17;
    const int cartWeight = 210;
    const double unitShipCost = 2.34;

    int loadedWeight;
    int numOfUnits;
    double subTotal;
    double taxAmount;
    double shipping;
    double total;

    cout << "What is the weight of the cart?" << endl ;
    cin >> loadedWeight;

    numOfUnits = (loadedWeight - cartWeight) / unitWeight;
    subTotal = static_cast<double>(unitPrice * numOfUnits);
    taxAmount = subTotal * taxRate;
    shipping = numOfUnits * unitShipCost;
    total = subTotal + taxAmount + shipping;

    cout << "Sale price of " << numOfUnits <<
    " units: " << "$" << setprecision(4) << subTotal << endl;
    cout << "Sales tax (5%): $" << setprecision(4) << taxAmount << endl;
    cout << endl;
    cout << "Shipping Cost: $" << setprecision(4) << shipping << endl;
    cout << endl;
    cout << "Final total: $" << setprecision(4) << total << endl;

    return 0;
}

// Sale price of numOfUnits units: $subTotal
// Sales tax (5%): $taxAmount
//
// Shipping Cost: $shippingCost
//
// Final Total: $Total