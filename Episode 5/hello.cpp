#include <iostream>

int main() {
    // Example of common mistake:
    // std::cout << Hello World!" << std::endl;
    // ^ Missing opening quotation mark around Hello World
    // This would cause multiple compiler errors (even though it's just one typo)
    // The Compiler would say something like "missing terminating character"
    // and then show additional cascading errors below.

    std::cout << "Hello World!" << std::endl;
    // ✅ Correct version:
    // Strings must be enclosed in double quotes
    // Once fixed, the program compiles and prints "Hello World!" to the console

    return EXIT_SUCCESS;
}