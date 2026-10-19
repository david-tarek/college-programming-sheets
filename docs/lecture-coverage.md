# Lecture Coverage Map

This document records the concepts covered by the local COMP 205 lecture PDFs
and how they relate to the OOP sheets. The lecture PDFs are handwritten,
image-based notes kept outside the repository. They are **not** published here.
This page is an original topic index and gap analysis, not a transcript or a
reproduction of the lecture material.

## Sources Reviewed

The local folder contains 14 PDF files: 13 lecture-note PDFs and one course
guide. The notes use several variants from 2025 and 2026, so they overlap but are
not exact duplicates.

| Lecture | Files | Pages | Main topics |
|---------|-------|-------|-------------|
| 1 | `1.Function.2025.pdf`, `2.Struct.2025.pdf`, `Lecture_1_Programming2026.pdf`, `oop-lec1.2025.pdf` | 20 | Functions, built-in math functions, return and `void`, default arguments, call by value, call by reference, structs, arrays of structs, nested structs, structs with functions, class preview |
| 2 | `3.Class.2025.pdf`, `lecture 2 oop-1.2026.pdf`, `oop_ lec2.2025.pdf` | 33 | OOP concepts, class definition, access specifiers, data members, member functions, objects, class examples (`Point`, `Circle`, `Vector`, `Ratio`, `Complex`), class vs. struct |
| 3 | `4.Constructor.2025.pdf`, `constructor.2026.pdf`, `lec3-oop2025.pdf` | 32 | Constructors, default and parameterized constructors, default arguments, initialization lists, constructor overloading, copy constructor, arrays inside classes |
| 4 | `5.Static&friend.2025.pdf`, `lec4-oop2025.pdf` | 16 | Static data members and functions, friend functions, friend classes, two-class examples, `Point` norm and distance |
| Course guide | `COMP 205.pdf` | 2 | Official course topic list and resource categories |

The course guide lists more topics than the four lecture folders contain. It
includes recursion, operator overloading, inheritance, virtual and pure virtual
functions, pointers and composition, subscript and stream operators, and
templates. Those topics are not covered by the available lecture notes.

## Coverage by Sheet

**Covered** means the concept is explained in the available notes. **Partial**
means the notes show a related example but not every case needed by the sheet.
**Missing** means the concept was not found in the available notes.

### 2026

| Sheet | Concepts needed | Lecture coverage | Gap |
|-------|-----------------|------------------|-----|
| 01 | Functions, number algorithms, arrays | Functions: covered in Lecture 1. `abs`, `pow`, `sqrt`, and `floor` are covered | Arrays and number algorithms are missing |
| 02 | `struct`/`class`, `Point_3D` | Structs: Lecture 1. Classes and `Point` examples: Lecture 2 | Factorial and prime logic are algorithms, not language topics |
| 03 | Constructors, static members | Constructors: Lecture 3. Static members: Lecture 4 | No major concept gap |
| 04 | Friend functions and friend classes | Lecture 4 | No major concept gap |

### 2025

| Sheet | Concepts needed | Lecture coverage | Gap |
|-------|-----------------|------------------|-----|
| 01 | Functions, factorial, series, primes, `Point_3D` struct | Functions and structs: Lecture 1. `Point` math examples: Lecture 2 | Number algorithms are missing; arrays are a separate prerequisite if needed |
| 02 | Classes, recursive GCD, series, complex numbers | Classes and complex examples: Lecture 2 | Recursion is missing |
| 03 | Constructors, static members, sorting, searching, `Ratio` | Constructors: Lecture 3. Static members and `Ratio`: Lectures 2–4 | Sorting and searching are missing |
| 04 | Friend functions and friend classes | Lecture 4 | No major concept gap |
| 05–07 | Operator overloading, inheritance | — | Missing from the available lecture notes |

### 2024

| Sheet | Concepts needed | Lecture coverage | Gap |
|-------|-----------------|------------------|-----|
| 01 | Functions, default arguments, function overloading, arrays | Functions and default arguments: Lecture 1 | Function overloading and arrays are missing |
| 02 | Structs, classes, arrays of objects, prime and factorial logic | Structs: Lecture 1. Classes: Lecture 2 | Arrays of objects are only partially covered |
| 03 | Classes, static members, recursive GCD, friend functions | Classes: Lecture 2. Constructors: Lecture 3. Static and friend: Lecture 4 | Recursion is missing |
| 04–09 | Operator overloading, inheritance, polymorphism, templates | — | Missing from the available lecture notes |

### 2022

| Sheet | Concepts needed | Lecture coverage | Gap |
|-------|-----------------|------------------|-----|
| 01 | Functions, default arguments, arrays, function overloading | Functions and default arguments: Lecture 1 | Function overloading and arrays are missing |
| 02 | Structs, arrays of structs, series | Lecture 1 | Series logic is an algorithm gap |
| 03 | Classes, ratios, primes, matrix columns | Lecture 2 | Matrix processing is not covered directly |
| 04 | Constructors | Lecture 3 | No major concept gap |
| 05 | Static members, friend functions, primes | Lecture 4 | No major concept gap |
| 06–08 | Operator overloading, inheritance, polymorphism | — | Missing from the available lecture notes |

## Gaps to Cover Separately

These topics appear in sheets or in the course guide but were not found in the
available lecture notes:

- **Arrays and array algorithms:** reading, searching, replacing, reversing,
  sorting, merging, and prefix sums.
- **Function overloading:** not present in the available Lecture 1 notes.
- **Recursion:** listed in the course guide, but not explained in the available
  notes.
- **Destructors:** not found in the available constructor notes. Copy
  constructors are covered in the 2026 constructor notes.
- **Operator overloading, inheritance, polymorphism, and templates:** not
  covered by the four available lecture folders.
- **Pointers, composition, subscript operators, and stream operators:** listed
  in the course guide but not in the available notes.

The external resources in
[`learning-resources.md`](learning-resources.md) cover arrays and function
overloading. Recursion, operator overloading, inheritance, polymorphism, and
templates will need either later lecture notes or additional external resources
before those sheets are solved.

## How to Use These Notes

1. Read the sheet question first, so the purpose of each concept is clear.
2. Use the matching lecture notes to understand the language feature.
3. Use the external videos for topics missing from the notes.
4. Solve the question independently.
5. Add the solution to the repository only after review and testing.

The sheets remain the source of truth for question wording. The lecture notes
explain concepts; they do not replace the sheet instructions or the course
staff's guidance.
