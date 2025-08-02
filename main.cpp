#include <iostream>
#include <iomanip>
#include <limits>

const double PI = 3.14159;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        std::cout << "\nGeometry Calculator\n";
        std::cout << "1. Calculate the Area of a Circle\n";
        std::cout << "2. Calculate the Area of a Rectangle\n";
        std::cout << "3. Calculate the Area of a Triangle\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                while (true) {
                    std::cout << "Enter the radius of the circle: ";
                    std::cin >> radius;
                    if (std::cin.fail() || radius < 0) {
                        std::cout << "Invalid radius. Please enter a non-negative number.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    } else {
                        break;
                    }
                }
                area = PI * radius * radius;
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "Area of the circle: " << area << std::endl;
                break;

            case 2:
                while (true) {
                    std::cout << "Enter the length of the rectangle: ";
                    std::cin >> length;
                    if (std::cin.fail() || length < 0) {
                        std::cout << "Invalid length. Please enter a non-negative number.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }
                while (true) {
                    std::cout << "Enter the width of the rectangle: ";
                    std::cin >> width;
                    if (std::cin.fail() || width < 0) {
                        std::cout << "Invalid width. Please enter a non-negative number.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }
                area = length * width;
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "Area of the rectangle: " << area << std::endl;
                break;

            case 3:
                while (true) {
                    std::cout << "Enter the base of the triangle: ";
                    std::cin >> base;
                    if (std::cin.fail() || base < 0) {
                        std::cout << "Invalid base. Please enter a non-negative number.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }
                while (true) {
                    std::cout << "Enter the height of the triangle: ";
                    std::cin >> height;
                    if (std::cin.fail() || height < 0) {
                        std::cout << "Invalid height. Please enter a non-negative number.\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } else {
                        break;
                    }
                }
                area = base * height * 0.5;
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "Area of the triangle: " << area << std::endl;
                break;

            case 4:
                std::cout << "Exiting program. Goodbye!\n";
                break;

            default:
                std::cout << "An unexpected error occurred.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}