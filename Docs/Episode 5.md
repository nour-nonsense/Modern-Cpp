# Modern C++ Learning in Public - Episode 5

## Lesson 5: Debugging Your First Errors

In this lesson, we’ll continue with our Hello World program — but this time, we’ll focus on what happens when things go wrong. Making mistakes is normal, and learning how to read and fix compiler errors is a critical skill for every C++ programmer.

## What You’ll Learn

-   **How compiler errors and warnings appear**
-   **Why one mistake can cause multiple error messages**
-   **How to approach fixing errors (top-down strategy)**
-   **Why small changes make debugging easier**
-   **Treating warnings as errors with -Werror**

## 1. Example Mistake: Missing Quotation Mark

If you forget to close a string:

```cpp
cpp

#include <iostream>

int main() {
    std::cout << Hello World"; // missing closing quote
    return 0;
}
```

Comiling this program:

```bash
bash

g++ hello.cpp -o hello
```
Produces multiple errors, even though the actual mistake is just one missing quotation mark.

## 2. Debugging Strategy

- **Start from the top:** The first error message is usually the most useful. Later errors cascade from the first one
- **Read carefully:** The compiler might say something like:


```bash
bash

warning: missing terminating " character
```

in plain English: "You forget to close your string"

- **Fix one issue at a time:** Correct the missing quotation, then recompile

## 3. Making Small Changes

- Write and compile in small steps
- If you add too much code at once, it's harder to isolate what broke
- Frequent compiling helps you catch errors early

## 4. Treat Warnings as Errors

Warnings often indicate deeper issues. You can make the compiler treat them as errors with the -Werror flag:

```bash
bash

g++ -Werror hello.cpp -o hello  # Compile
```
This ensures you never ignore potential problems

## 5. Key Takeaways

-   Mistakes are normal — expect them.
-   Compiler errors can look intimidating, but fix the first one first.
-   Make small changes to keep debugging manageable.
-   Treat warnings seriously; -Werror enforces this habit.
-   Building strong debugging habits early will save hours later.



This lesson builds on Hello World by showing that errors are part of the learning process. In future lessons, we’ll continue writing new programs while reinforcing good habits.

> **Remember:** Every programmer makes mistakes. Debugging is not a setback — it’s a skill you build over time.

