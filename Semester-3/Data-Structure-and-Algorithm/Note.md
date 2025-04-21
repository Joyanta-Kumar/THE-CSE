# Data Structure and Algorithm
DSA is about finding efficient ways to store and retrieve data, to perform operations on data, and to solve specific problems.
## Table of content
- [Data Structure and Algorithm](#data-structure-and-algorithm)
- [Table of content](#table-of-content)
- [It is needed for](#it-is-needed-for)
- [Theory and Terminology](#theory-and-terminology)
- [A simple algorithm](#a-simple-algorithm)

## It is needed for:
1. Managing large amounts of data, such as in a social network or a search engine.
2. Scheduling tasks, to decide which task a computer should do first.
3. Planing routes, like in a GPS system to find the shortest path from A to B.
4. Optimizing process, such as arranging task so they can be completed as quickly as possible.
5. Solving complex problem, from finding the best way to pack a truck to making a computer `learn` from data.

## Theory and Terminology
| Term | Description |
| ---- | ----------- |
| Algorithm | A set of step-by-step instructions to solve a specific problem |
| Data Structure | A way of organizing data so it can be used efficiently |
| Time Complexity | A measure of the amount of time an algorithm takes to run |
| Space Complexity | A measure of the amount of space an algorithm takes to run |
| Big O Notation | A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity |
| Recursion | A programming technique where a function calls itself |
| Divide and Conquer | A method of solving complex problems by breaking them into smaller, more manageable sub-problems, solving the sub-problems, and combining the solutions. |
| Brute Force | A simple and straight forward way an algorithm can work by simply trying all possible solutions and then choosing the best one. |

## A simple algorithm
### Fibonacci Numbers
Named after a 13<sup>th</sup> century_Italian mathematician known as Fibonacci, first two are `0`, `1`, and the next number is always sum of its previous two.

#### How it works:
1. Start with the two first Fibonacci numbers `0` and `1`
2. Add the two previous number to create a new Fibonacci number
3. Update the value of two previous numbers.

#### [Using loop](./Code/Fibonacci/Loop.cpp)
#### [Using recursion](./Code/Fibonacci/Recursion.cpp)
#### [Get n<sup>th</sup> Fibonacci](./Code/Fibonacci/FindNth.cpp)
