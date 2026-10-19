# Contribution Guide

This repository is primarily a personal study project, but corrections and
well-scoped improvements are welcome.

## Before Adding Content

- Confirm the cohort, sheet number, and question number from the original
  material.
- Do not invent missing questions or assume that one cohort's curriculum
  matches another's.
- Follow the course's academic integrity and submission rules.
- Do not publish copyrighted course files unless redistribution is permitted.

## Adding a Sheet

1. Create the sheet directory at the correct path, for example
   `2026/oop/sheet-01/`.
2. Add one standalone `.cpp` file per question, using names such as
   `question-01.cpp`.
3. Add a `README.md` for the sheet containing:
   - A short overview based on the actual sheet.
   - A table of question files, descriptions, and statuses.
   - Compilation instructions.
   - Any relevant notes or limitations.
4. Update the `oop/README.md` and the cohort README.
5. Compile and test each question.
6. Review `git status` before committing.

## Status Labels

Use only these statuses in sheet tables:

- **Not started** — the question is documented but no reviewed solution exists.
- **In progress** — a solution is being written or reviewed.
- **Completed** — the solution has been reviewed and tested against the
  available question.

## Review Checklist

- The solution compiles without errors.
- It produces the required output for normal cases.
- Boundary cases and invalid input are handled as required.
- Variable and function names are clear.
- The approach matches the level of the course.
- The sheet README points to the correct files.
- No build output or private file is staged.

## Commit Messages

Use clear messages that describe the actual change:

```text
Add solutions for 2026 OOP sheet 1
Complete 2026 OOP sheet 2
Add 2025 OOP sheet 1 solutions
Fix edge cases in sheet 1 solutions
Update repository documentation
```

Avoid messages such as `update`, `fix`, or `final` when they do not explain the
change.

## Reporting a Problem

Open a GitHub Issue describing:

- The affected cohort, sheet, and question.
- What is wrong or unclear.
- The expected behaviour, if applicable.
- The compiler and command used, when reporting a build problem.
