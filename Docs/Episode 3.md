# Modern C++ Learning in Public - Episode 3

**Lesson 3: Setting Up C++ on Windows with Visual Studio**

In this lesson, we’ll set up a C++ development environment on Windows using Microsoft Visual Studio. Visual Studio is a full-featured IDE that supports modern C++ standards and provides helpful tools like IntelliSense, code completion, and integrated debugging.

## What You'll Learn

-   **How to install Visual Studio Community Edition**
-   **Creating a C++ project**
-   **Writing and running a simple program**
-   **Basic project settings and compiler standards**
-   **Introduction to debugging with breakpoints**

## 1. Installing Visual Studio

1.   Go to **[Visual Studio Downloads](https://visualstudio.microsoft.com/)**
2.   Choose **Visual Studio Community Edition** (free for all users)
3.   Download and install the latest version

> **Note:** Visual Studio Code is a lightweight editor, but for this series we use full IDE

## 2. Creating a New C++ Project

1.  Open Visual Studio
2.  Click **Create a new project**
3.  Choose **Empty Project** (gives full control over project structure).
4.  Name your project (e.g., `HelloApplication`) and select a folder
5.  Click Create

## 3. Adding a Source File

1.  in **Solution Explorer**, right-click your project → Add → New Item.
2.  Choose C++ File (.cpp) and name it ``main.cpp``
3.  Add your code

```cpp
cpp

#include <iostream>

int main() {
    std::cout << "Hello Windows!" << std::endl;
    return 0;
}
```
## 4. Bulding and Running

-   Click the **Play** button (Debug mode) to compile and run
-   The output will appear in the console window.

## 5. Handling Errors

-   Visual Studio highlights compilation errors and warnings.
-   Double-clicking an error jumps to the relevant line.
-   Fix the issue and rebuild the project.

## 6. Project Settings

-   Right-click the project → **Properties**
-   Common settings:
    -   **C++ Language Standard:** Set to C++17, C++20, or later
    -   **Include Directories:** Add header paths for additional libraries
    -   **Library Directories:** Add paths to external libraries
    -   **Debug/Release Mode:** Choose build configuration
    -   **Architecture:** 32-bit or 64-bit

> Most of these settings correspond to command-line compiler flags.

## 7. Introduction to Debugging

-   Set a **breakpoint** by clicking the pressing `F5`.
-   Run the program in **Debug** mode. Execution will pause at the breakpoint
-   Inspect variables in the Autos or Locals window.
-   Step through the code using:
    -   **Step Over (`F10`)**
    -   **Step Into (`F11`)**
    -   **Step Into (`Shift + F11`)**

This helps understand program flow and catch bugs early.

## Summary

By the end of this lesson, you should be able to:
-   Install Visual Studio Community Edition on Windows
-   Create a new C++ project and source file
-   Write, build, and run a simple program
-   Adjust project settings and compiler standards
-   Use basic debugging tools to inspect code

With your environment set up, you’re ready to start writing more advanced modern C++ programs in the next lesson.

