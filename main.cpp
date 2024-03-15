#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost, desiredProfit;

    // Prompt user to enter input values
    cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;
    cout << "Enter the total salary of employees (including yours): ";
    cin >> employeeSalary;
    cout << "Enter the yearly rent cost: ";
    cin >> yearlyRent;
    cout << "Enter the estimated yearly electricity cost:";
    cin >> electricityCost;
    cout << "Enter the desired net profit percentage (in decimal): ";
    cin >> desiredProfit;

    // Calculate total expenses
    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;

    // Calculate the markup needed to achieve desired profit after sale discount
    double markupPercentage = (totalExpenses * (1 + desiredProfit)) / (merchandiseCost * 0.85);
    double markupPercentRounded = markupPercentage * 100; // Convert to percentage

    cout << "To achieve a net profit of approximately " << desiredProfit * 100 << "%, ";
    cout << "you should mark up the merchandise by approximately " << markupPercentRounded << "%." << endl;

    return 0;
}