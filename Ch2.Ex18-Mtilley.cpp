// Ch2.Ex18-Mtilley2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    int totalCustomers; 
    const double percentPurchasing = 0.15; 
    const double percentCitrusPreference = 0.58; 

    std::cout << "Enter the number of customers surveyed: ";
    std::cin >> totalCustomers;

    int customersPurchasing = static_cast<int>(totalCustomers * percentPurchasing);

    int customersCitrusPreference = static_cast<int>(customersPurchasing * percentCitrusPreference);

    std::cout << "Approximate number of customers who purchase one or more energy drinks per week: "
        << customersPurchasing << std::endl;
    std::cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
        << customersCitrusPreference << std::endl;

    return 0;
}
