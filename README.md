---

# Simple Calculator

A basic command-line calculator that performs addition, subtraction, multiplication, and division.

## Table of Contents
1. [Features](#features)
2. [Prerequisites](#prerequisites)
3. [Compilation and Usage](#compilation-and-usage)
    - [Using IDE (e.g., Code::Blocks)](#using-ide-e-g-codeblocks)
    - [Using g++ compiler](#using-g-compiler)

## Features
- Supports addition (+), subtraction (-), multiplication (*), and division (/).
- Displays help information when the user enters "help" as an operator.

## Prerequisites
- C++17 compatible compiler (e.g., g++, clang++)
- Standard Library support for polymorphic allocator (`std::pmr`)

## Compilation and Usage

### Using IDE (e.g., Code::Blocks)
1. Open your project in Code::Blocks or any other preferred IDE.
2. Build the project to generate an executable file (e.g., `calculator`).
3. Navigate to the build folder containing the generated executable, for example:

```sh
cd build/
```

4. Run the calculator application using one of the following methods:
    - Double-click on the executable file in the IDE.
    - Open a terminal/command prompt and enter:

        ```sh
        ./calculator
        ```
        or
        ```
        calculator.exe
        ```

5. Follow the prompts to perform calculations.

### Using g++ compiler
1. Make sure you have g++ compiler installed on your system.
2. Navigate to the project directory containing the source code (e.g., `main.cpp`).
3. Compile the source code using the following command:

    ```sh
    g++ -std=c++17 -o calculator main.cpp
    ```

4. Navigate to the build folder containing the generated executable, for example:

    ```sh
    cd build/
    ```

5. Run the calculator application by entering:

    ```sh
    ./calculator
    ```
    or
    ```
    calculator.exe
    ```

6. Follow the prompts to perform calculations.

---
