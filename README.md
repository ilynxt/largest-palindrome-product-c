# Largest Palindrome Product – C

Brute-force search of the largest palindromic number **≤ N** generated from products of:
- two 2-digit numbers (10..99)
- three 2-digit numbers (10..99)
- two 3-digit numbers (100..999)

## Overview

A palindrome is a number that reads the same forward and backward (e.g., 9009).

This program:
- uses a digit-reversal helper (`miroir`) to detect palindromes
- explores the search space with nested loops
- keeps the maximum palindrome under the constraint **N**

## Technical Focus

- Integer manipulation (digit reversal)
- Nested loops and brute-force exploration
- Safe descending loops (avoid unsigned underflow)
- Max tracking under constraints

## How to run

```bash
gcc palindrome.c -o palindrome
./palindrome
