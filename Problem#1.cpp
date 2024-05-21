#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to calculate total price
double calculateTotalPrice(double pricePerGallon, int gallons) {
    return pricePerGallon * gallons;
}

int main() {
    // Gas prices
    double regularPrice = 5.02;
    double midgradePrice = 5.22;
    double premiumPrice = 5.42;
    double dieselPrice = 6.03;

    // Display header
    cout << "--------------------------------------Welcome to Gas 4 Taxes--------------------------------------" << endl;
    cout << "| Gas Type | Price |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << left << setw(9) << "Regular" << " | $" << right << fixed << showpoint << setprecision(2) << setw(6) << regularPrice << " |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << left << setw(9) << "Midgrade" << " | $" << right << fixed << showpoint << setprecision(2) << setw(6) << midgradePrice << " |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << left << setw(9) << "Premium" << " | $" << right << fixed << showpoint << setprecision(2) << setw(6) << premiumPrice << " |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << left << setw(9) << "Diesel" << " | $" << right << fixed << showpoint << setprecision(2) << setw(6) << dieselPrice << " |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;

    // User input
    string gasType;
    int gallons;
    cout << "Choose a gas type to fill up your car: ";
    cin >> gasType;
    cout << "How many gallons: ";
    cin >> gallons;

    // Calculate total price
    double totalPrice;
    if (gasType == "Regular") {
        totalPrice = calculateTotalPrice(regularPrice, gallons);
    }
    else if (gasType == "Midgrade") {
        totalPrice = calculateTotalPrice(midgradePrice, gallons);
    }
    else if (gasType == "Premium") {
        totalPrice = calculateTotalPrice(premiumPrice, gallons);
    }
    else if (gasType == "Diesel") {
        totalPrice = calculateTotalPrice(dieselPrice, gallons);
    }
    else {
        cout << "Invalid gas type entered!" << endl;
        return 1;
    }

    // Output total price
    cout << fixed << showpoint << setprecision(2);
    cout << "Your total is $" << totalPrice << endl;

    // Sales tax calculation (assuming 10% sales tax)
    double salesTax = totalPrice * 0.10;
    double totalWithTax = totalPrice + salesTax;
    cout << "Total with sales tax: $" << totalWithTax << endl;

    // Payment method
    string paymentMethod;
    cout << "How would you like to pay for it? (Debit Card, Credit Card, Gift Card or Cash): ";
    cin >> paymentMethod;

    // Output payment confirmation
    cout << "Great! You have paid the balance of $" << totalWithTax << " using your " << paymentMethod << "." << endl;
    cout << "Thank you for filling up gas at Gas 4 Taxes, a place to get broke!" << endl;

    return 0;
}
