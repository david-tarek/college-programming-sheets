# College Programming Sheets — C++ Solutions

A structured collection of C++ solutions and documentation for **COMP 205 —
Object-Oriented Programming** sheets at the Faculty of Science, Ain Shams
University, organized by academic cohort, sheet, and question.

This repository is dedicated to OOP only. It covers the 2026, 2025, and 2022
cohorts. Materials for 2024 and 2023 are not currently available and are not
included.

> **Status:** Repository initialization. No verified sheets have been published
> yet. Materials and solutions will be added only after the original questions
> have been reviewed.

## Purpose

This repository is a long-term record of university programming sheet solutions.
It is intended to:

- Keep solutions organized by cohort, sheet, and question.
- Make revision before exams easier.
- Document the reasoning behind each solution.
- Track progress honestly as sheets are completed and reviewed.
- Practise a clean Git and GitHub workflow.

It is not an official university repository and is not affiliated with any
university or course staff.

## Course Context

| Field | Details |
|-------|---------|
| Course | COMP 205 — Object-Oriented Programming |
| Language | C++ |
| Program | Computer Science (Single Department) |
| Faculty | Faculty of Science, Ain Shams University |

The repository is a personal study archive. It is not an official course
publication, and it does not replace the material or instructions provided by
the course staff.

## Available Cohorts

| Cohort | Role | Content status |
|--------|------|----------------|
| 2026 | Current cohort | Awaiting material inventory |
| 2025 | Previous cohort | Awaiting material inventory |
| 2022 | Earlier cohort | Awaiting material inventory |
| 2024 | Not currently available | Not included |
| 2023 | Not currently available | Not included |

The 2024 and 2023 materials are not available, so no folders, sheets, or
solutions are created for them.

## Repository Structure

```text
college-programming-sheets/
├── README.md
├── .gitignore
├── 2026/
│   └── README.md
├── 2025/
│   └── README.md
├── 2022/
│   └── README.md
└── docs/
    ├── compilation-guide.md
    └── contribution-guide.md
```

The `oop/` and sheet directories are added only when verified materials are
available. A completed sheet will follow this pattern:

```text
2026/
└── oop/
    ├── README.md
    └── sheet-01/
        ├── README.md
        ├── question-01.cpp
        └── question-02.cpp
```

Each cohort has its own README. The `oop/` directory and each sheet will also
have a README once that content exists.

## OOP Sheets

The inventory has not been completed yet. The table below will be populated only
with sheets that have been verified against the original materials.

| Cohort | Sheet | Status |
|--------|-------|--------|
| 2026 | — | Awaiting inventory |
| 2025 | — | Awaiting inventory |
| 2022 | — | Awaiting inventory |

## Navigation

1. Open the folder for the relevant cohort (`2026/`, `2025/`, or `2022/`).
2. Open the `oop/` folder.
3. Open the sheet folder.
4. Read the sheet README for the question list and completion status.
5. Compile the required `question-XX.cpp` file independently.

## Compile and Run

Each question is a standalone C++ program with its own `main()` function.
Compile one file at a time from its sheet directory.

Using GCC or G++:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic question-01.cpp -o question-01
```

Run on Linux or macOS:

```bash
./question-01
```

Run on Windows:

```powershell
.\question-01.exe
```

More details are available in
[`docs/compilation-guide.md`](docs/compilation-guide.md).

## File Naming

- Cohort folders use the four-digit year: `2026`, `2025`, `2022`.
- The OOP subject folder is named `oop`.
- Sheet folders use two digits: `sheet-01`, `sheet-02`.
- Question files use two digits: `question-01.cpp`, `question-02.cpp`.
- Each question file should compile and run independently.

Names such as `test.cpp`, `new.cpp`, and `final-final.cpp` are not used.

## Content Rules

- The repository covers OOP sheets only.
- Question descriptions must come from the actual sheet, not from assumptions.
- Every solution must be linked to the correct cohort, sheet, and question.
- A question is marked completed only after its solution has been reviewed and
  tested.
- Missing materials are documented as missing; they are not invented.
- Original PDFs or copyrighted course files are not published unless their use
  and redistribution are clearly permitted.
- Solutions are learning material, not a substitute for following the course's
  academic integrity rules.

## Solution Status

Solutions may be improved as understanding develops. A solution marked as
completed means that it has been reviewed against the available question and
tested with representative inputs; it does not mean that it is the only valid
solution.

## Contributing and Reporting

The repository is currently maintained as a personal study project.
Suggestions, corrections, and issue reports are welcome through GitHub Issues.
Before contributing, read
[`docs/contribution-guide.md`](docs/contribution-guide.md).

## Last Updated

October 19, 2026
