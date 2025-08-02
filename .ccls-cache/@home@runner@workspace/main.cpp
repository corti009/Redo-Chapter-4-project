#include <iostream>
#include <limits>

int main() {
    int month;
    int year;
    int numDays;
    bool isLeapYear = false;

    
    while (true) {
        std::cout << "Enter a month (1-12): ";
        std::cin >> month;

        if (std::cin.fail() || month < 1 || month > 12) {
            std::cout << "Invalid month. Please enter a number between 1 and 12.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    
    while (true) {
        std::cout << "Enter a year: ";
        std::cin >> year;

        if (std::cin.fail() || year < 0) { 
            std::cout << "Invalid year. Please enter a non-negative number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    
    isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            numDays = 31;
            break;
        case 4: case 6: case 9: case 11:
            numDays = 30;
            break;
        case 2: 
            if (isLeapYear) {
                numDays = 29;
            } else {
                numDays = 28;
            }
            break;
        default:
            numDays = 0; 
            break;
    }

    std::cout << numDays << " days" << std::endl;

    return 0;
}