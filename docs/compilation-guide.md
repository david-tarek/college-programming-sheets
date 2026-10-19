# Compilation Guide

Each question is a standalone C++ program with its own `main()` function.
Compile and run one source file at a time.

## Requirements

- A C++ compiler such as GCC/G++ (MinGW on Windows), Clang, or MSVC.
- A terminal or PowerShell window.

The examples below use C++17 and enable common warnings. If your course
requires a different standard, use that standard instead.

## GCC or G++

From the sheet directory:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic question-01.cpp -o question-01
```

Run the program:

```bash
# Linux or macOS
./question-01

# Windows PowerShell
.\question-01.exe
```

## Clang

```bash
clang++ -std=c++17 -Wall -Wextra -pedantic question-01.cpp -o question-01
```

Run it using the same commands as the GCC example.

## MSVC

Open a Developer Command Prompt and run:

```powershell
cl /std:c++17 /EHsc /W4 question-01.cpp
```

Run:

```powershell
.\question-01.exe
```

## Common Problems

### `g++` is not recognized

The compiler is not on the system `PATH`. Install a C++ toolchain (for example,
MinGW-w64) and add its `bin` directory to `PATH`, or use the terminal provided
by your IDE.

### The output file has no `.exe` on Windows

Check the command and the current directory. On Windows, GCC normally creates
`question-01.exe` when `-o question-01` is used.

### The program closes immediately

Run it from a terminal rather than by double-clicking the executable. If the
course requires it, pause before returning from `main()`.

### Compilation succeeds but the result is wrong

Compilation only checks the code's syntax and types. Review the logic, test
normal cases, boundary cases, and invalid input where relevant.

## Build Outputs

Compiled files such as `.exe`, `.o`, and `.out` are ignored by Git. Do not commit
them unless there is a documented reason to do so.
