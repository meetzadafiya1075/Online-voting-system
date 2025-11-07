# Simple Voting System (C)

## Overview
A small command-line voting simulator written in C. It allows users to cast votes for predefined candidates, view vote counts, and see the current leading candidate. This program is intended as a learning/example project for basic C programming, structs, and console I/O.

## Features
- Cast vote for one of four candidates
- Record spoiled votes ("None of These")
- Display vote counts for all candidates and spoiled votes
- Show the leading candidate

## Files
- `c3.c` — main source file containing the voting program logic.

## Build & Run
Compile with `gcc` (or any C compiler):

```bash
gcc c3.c -o voting
./voting
```

Then follow the on-screen menu:
1. Cast the Vote
2. Find Vote Count
3. Find leading Candidate
0. Exit

## Notes & Limitations
- Candidate names and the number of candidates are hard-coded in `c3.c`.
- Input validation is minimal; entering non-numeric input may cause undefined behavior.
- Currently only integer choices are accepted; invalid numeric choices show an error message.

## Suggested Improvements
- Use dynamic memory or arrays to support variable number of candidates.
- Improve input validation (e.g., read line and parse safely).
- Persist results to a file so votes survive program restarts.
- Add unit tests and better error handling.

## License
Use/modify freely for learning purposes.
