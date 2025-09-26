# Modern C++ Learning in Public - Episode 1

## Lesson 1: Understanding Compilation and Code Editors

Welcome to the first lesson of my Modern C++ Learning in Public journey! In this episode, we’ll cover the basics of C++ as a compiled language and how to set up your environment for writing and running C++ programs.

## What You'll Learn
-   **How C++ source code becomes an executable program**
-   **The role of a compiler**
-   **Choosing a code editor to write C++**

## 1. C++ is a Compiled Langauge

Unlike interpreted languages like Python, C++ code needs to be compiled before it can run.

The workflow looks like this:

**1. Write Source Code – eg., `hello.cpp`**
**2. Compile – Using a compiler like `g++`, `clang`, or `MSVC`**
**3. Run Executable – This produces a binary file you can execute**

```text
text

hello.cpp → [compiler] → executable (hello.exe or ./hello)
```

**Key takeaway:** Every time you modify your source code, you must recompile to see the changes in your program.

## 2. Choosing a Code Editor

You can write C++ code in any text editor. Some popular options:

-   **Terminal-based editors:** Vim, Nano
-   **GUI editors/IDEs:** VScode, VS, CLion, Kate (Linux)

> The editor just needs to save text files that your compiler can process

# 3. Example: Hello World

Create a file named `hello.cpp`

```cpp
cpp

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

**Compile and Run**

On Linux

```bash
bash

g++ hello.cpp -o hello
./hello
```

On Windows (using Command Prompt with g++/MinGW):

```bash
bash

g++ hello.cpp -o hello.exe
hello.exe
```

You should see
```
Hello, world!
```

## 4. Important Notes
-   **Always save your file before compiling**
-   **Changes in the source code require recompilation**
-   **Many IDEs allow you to automate compilation or auto-save, which can streamline this process**
-   **Compilation is a key reason for C++'s speed and performance**

## Summary

In this first episode, you learned:
-   **What compilation means in C++**
-   **How source code is turned into an executable**
-   **How to write, save, compile, and run a basic program**

Next up, we’ll set up development environments for Windows, Linux so you can follow along with future lessons.

---

**Follow along, experiment, and share your progress — let’s learn C++ in public together!**

---
