# Modern C++ Learning in Public - Episode 4

## Lesson 4: Writing Your First C++ Program (Hello World)

In this lesson, we’ll write our first C++ program: a simple Hello World application. This is the foundation of learning C++, helping you understand program structure, output, and namespaces.

## What You’ll Learn

-   **Structure of a minimal C++ program**
-   **Using `main()` as the entry point**
-   **Outputting text to the console with `std::cout`**
-   **Using newlines with `\n` and `std::endl`**
-   **Understanding namespaces (`std`)**
-   **Compiling and running a program**

## 1. Minimal C++ Program

Every C++ program needs a main function, which serves as the entry point. By convention, `main` returns an integer indicating whether the program ran successfully(0 for success)

```cpp
cpp

#include <iostream> // Input/output stream library

int main() {
    return 0; // Indicates successful execution
}
```

> This program doesn't do anything yet but is the minimal structure needed to run

## 2. Outputting Hello World

To display text in the console, include the iostream library and use std::cout:

```cpp
cpp

#include <iostream>

int main() {
    std::cout << "Hello World!\n"; // Using newline character
    std::cout << "Hello World!" << std::endl; // Using std::endl
    return 0;
}
```

-   `\n` → newline character
-   `std::endl` → newline + flushes the output stream
-   `std::cout` → standard console output

## 3. Understanding Namespaces

1.  `std` stands for `standard namespace`
2.  if you omit `std::`, you can add:

```cpp
cpp

using namespace std;
```

-   This allows using `cout` and `endl` without the `std::` prefix
-   Namespaces organize code and prevent name conflicts. Using `std::` explicitly is common best practice

## 4. Compiling and Running

Using g++ (GNU Compiler Collection):

```bash
bash

g++ hello.cpp -o hello  # Compile
./hello                 # Run the program.
```
- Output:

```bash
bash

Hello World!
```

## 5. Key Takeaways

-   C++ requires explicit structure (`main`, return values, headers).
-   Standard library provides useful tools like `std::cout` and `std::endl`.
-   Namespaces help organize and access library features.
-   Writing, compiling, and running programs manually helps you understand program flow.
-   Mistakes are normal — experimenting is part of learning.



This lesson establishes the foundation for writing more advanced C++ programs in future episodes.

> **Remember:** the best way to learn is by typing the code, experimenting, and debugging yourself.

