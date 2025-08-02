#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main() {
    double packageWeight;
    double shippingDistance;
    double ratePer500Miles;
    double totalShippingCharges;
    int num500MileSegments;

    while (true) {
        std::cout << "Enter weight of package in kilograms: ";
        std::cin >> packageWeight;

        if (std::cin.fail() || packageWeight <= 0 || packageWeight > 20) {
            std::cout << "Invalid weight. Please enter a value greater than 0 and up to 20 kg.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    while (true) {
        std::cout << "Enter distance to be shipped in miles: ";
        std::cin >> shippingDistance;

        if (std::cin.fail() || shippingDistance < 10 || shippingDistance > 3000) {
            std::cout << "Invalid distance. Please enter a value between 10 and 3000 miles.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    if (packageWeight <= 2) {
        ratePer500Miles = 1.10;
    } else if (packageWeight <= 6) {
        ratePer500Miles = 2.20;
    } else if (packageWeight <= 10) {
        ratePer500Miles = 3.70;
    } else {
        ratePer500Miles = 4.80;
    }

    num500MileSegments = static_cast<int>(std::ceil(shippingDistance / 500.0));

    totalShippingCharges = ratePer500Miles * num500MileSegments;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total shipping charges: $" << totalShippingCharges << std::endl;

    return 0;
}