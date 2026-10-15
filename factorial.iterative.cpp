#include <iostream>

// Function to calculate factorial using an iterative approach
unsigned long long getFactorial(int n) {
    // Factorial is not defined for negative numbers
    if (n < 0) {
        return 0; 
    }
    
    // Base case: 0! and 1! are both 1
    unsigned long long result = 1;
    
    // Loop from 2 up to n to multiply the values
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    
    return result;
}

int main() {
    int number;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long fact = getFactorial(number);
        std::cout << "Factorial of " << number << " is: " << fact << std::endl;
    }
    
    return 0;
}
