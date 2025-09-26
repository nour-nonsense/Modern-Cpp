# Modern C++ Learning in Public - Episode 2

## Lesson 2: Setting Up a Modern C++ Compiler

In this lesson, we’ll make sure you have a C++ compiler installed and ready to use for modern C++ development (C++11 and beyond).

## What You'll Learn
-   **How to check for an existing compiler**
-   **How to install g++ or clang++**
-   **How to verify your compiler version**
-   **How to use modern C++ features**

## 1. Check if You Already Have a Compiler

Open a terminal and run:

```bash
bash

g++ --version
```

> **Tip:** Different systems may have different versions. For modern C++, aim for at least g++ 11, though 17 or newer is recommended.

## 2. Installing a Compiler on Linux

If you don’t have `g++`, install it using your package manager:

**Debian/Ubuntu:**

```bash
bash

sudo apt-get install g++
sudo apt-get install build-essential
```

**Other Linux distributions:**
-   **Fedora/CentOS:** `sudo yum install gcc-c++`
-   **Arch Linux:** `sudo pacman -S gcc`

This will give you a modern version of `g++` suitable for C++11+.

# 3. Installing Clang++

You can also use the Clang compiler:

```bash
bash

sudo apt-get install clang
```

Or download it directly from the [Clang website](https://clang.llvm.org/)
. Either g++ or clang++ works fine for learning modern C++.

## 4. Checking and Using Compiler Versions

To see which version is installed:

```bash
bash

g++ --version
```

If your system installs an older version, you can often install a specific version, for example:

```bash
bash

sudo apt-get install g++-10
```

Many systems allow setting an alias so you can just use `g++` instead of g++-10.

> **Tip:** Throughout these lessons, I’ll specify the C++ standard explicitly:

```bash
bash

g++ -std=c++17 main.cpp -o main
```

I usually use C++17, sometimes C++20, and occasionally C++23 or C++26 for newer features.

## Summary

After completing this lesson, you should:
-   **Have a modern C++ compiler installed (`g++` or `clang++`)**
-   **Know how to check your compiler version**
-   **Be ready to compile and run C++ programs using modern standards**

With your compiler ready, we’re set to move on to the next lesson and start writing modern C++ code.

---

**Follow along, experiment, and share your progress — let’s learn C++ in public together!**

---
