# Push Swap

A 42 school algorithmic project focused on sorting data using two stacks with a limited set of operations.

## Overview
Push Swap is a sorting algorithm project that requires sorting a stack of numbers using two stacks (A and B) and a limited set of operations. The goal is to sort the numbers in ascending order with the minimum number of operations possible.

## Installation

```bash
git clone <repository-url>
cd push_swap
make
```

For the bonus checker program:
```bash
make bonus
```

## Usage

```bash
./push_swap 2 1 3 6 5 8
```

For the checker (bonus):
```bash
./checker 2 1 3 6 5 8
```

## Operations

The following operations are available:

- sa: Swap the first 2 elements of stack A.
- sb: Swap the first 2 elements of stack B.
- ss: sa and sb at the same time.
- pa: Push the first element of stack B to stack A.
- pb: Push the first element of stack A to stack B.
- ra: Rotate stack A.
- rb: Rotate stack B.
- rr: ra and rb at the same time.

## Algorithm
The project implements different sorting strategies based on the input size:
- For 2 numbers: Simple swap if needed
- For 3 numbers: Optimized algorithm for 3 numbers
- For 4-5 numbers: Insertion sort using both stacks
- For larger sets: Custom algorithm optimizing the number of operations


## Bonus
The checker program validates if a sequence of operations correctly sorts the stack. It reads operations from standard input and executes them on the given numbers.
