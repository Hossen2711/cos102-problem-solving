#include <cmath>
#include <iostream>

int main() {
    double angle1 = 0.0;
    double angle2 = 0.0;
    const double EPSILON = 1e-9;

    std::cout << "Enter the first angle of the triangle (in degrees): ";
    if (!(std::cin >> angle1)) {
        std::cerr << "Invalid input. Please enter a numeric value.\n";
        return 1;
    }

    std::cout << "Enter the second angle of the triangle (in degrees): ";
    if (!(std::cin >> angle2)) {
        std::cerr << "Invalid input. Please enter a numeric value.\n";
        return 1;
    }

    // Check if the two angles can form a valid triangle
    if (angle1 <= EPSILON || angle2 <= EPSILON || (angle1 + angle2) >= (180.0 - EPSILON)) {
        std::cout << "Result: The given angles do NOT form a valid triangle.\n";
        return 0;
    }

    double angle3 = 180.0 - (angle1 + angle2);

    // Check if any angle is 90 degrees
    bool isRightAngled =
        (std::fabs(angle1 - 90.0) <= EPSILON) ||
        (std::fabs(angle2 - 90.0) <= EPSILON) ||
        (std::fabs(angle3 - 90.0) <= EPSILON);

    std::cout << "Third angle: " << angle3 << " degrees\n";
    if (isRightAngled) {
        std::cout << "Result: It IS a right-angled triangle.\n";
    } else {
        std::cout << "Result: It is NOT a right-angled triangle.\n";
    }

    return 0;
}