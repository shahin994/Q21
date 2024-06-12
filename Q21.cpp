#include <iostream>

int main() {
    double num1, num2, num3, num4, num5;
    double average, maxNum, minNum;

    std::cout << "Enter five numbers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Calculate average
    average = (num1 + num2 + num3 + num4 + num5) / 5;

    // Find maximum number
    maxNum = num1;
    if (num2 > maxNum) maxNum = num2;
    if (num3 > maxNum) maxNum = num3;
    if (num4 > maxNum) maxNum = num4;
    if (num5 > maxNum) maxNum = num5;

    // Find minimum number
    minNum = num1;
    if (num2 < minNum) minNum = num2;
    if (num3 < minNum) minNum = num3;
    if (num4 < minNum) minNum = num4;
    if (num5 < minNum) minNum = num5;

    std::cout << "Average: " << average << std::endl;
    std::cout << "Maximum number: " << maxNum << std::endl;
    std::cout << "Minimum number: " << minNum << std::endl;

    return 0;
}