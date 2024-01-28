# Design and Analysis of Algorithms

## Problem 1: Prepositional Logic Graph
* Description 
Consider a propositional formula F in conjunctive normal form CNF. Given a truth assignment T to the variables of F, a k-flip is another assignment T, which disagrees with T on at most k variables. The task is to develop, implement, and analyze an algorithm A that takes input of a formula F and an integer k. The algorithm generates a random assignment T and improves it using k-flips to satisfy more clauses.

*Implementation
The algorithm is implemented in C and accepts a formula F in the same format as provided in dataset.txt.
Random assignment T is generated for all 1040 variables.
The sparse graph representing the Clause Network is traversed clause by clause.
Node-by-node graph traversal stats are displayed on the output screen.
The initial truth assignment T is randomly generated, and the output T satisfies the given constraint.
Dataset
Clauses are provided in a separate dataset.txt file, with each line representing a clause.

## Problem 2: Compartmentalization
* Description
A commercial land of 1000 x 1000 sq. feet needs to be sold following specific regulations. The problem is to determine the maximum profit that can be achieved by dividing the land into saleable plots based on associated prices.

* Dynamic Programming Solution
Three different dynamic programming solutions are provided:
Simple Recursive Top-Down without Memoization Algorithm.
Recursive Top-Down with Memoization Algorithm.
Iterative Bottom-Up with Memoization Algorithm.
Storage optimization is applied in the iterative algorithm where applicable.
Each algorithm is implemented in C and analyzed for time complexity.
Usage
The algorithm works for any value of n and price P, a vector of prices against each plot size in multiples of 100 sq. feet.
A generic solution that can be tested against a range of test cases is provided.

## Problem 3: Diagonal Pattern
*Description
Given a text T of length n x n and a pattern P of length m x m, find the diagonal occurrences of the pattern in the given text. The pattern can be of any dimension, and there should be at least two blocks of the pattern in the diagonal position.

*Implementation
C implementation is provided to find diagonal occurrences of a pattern in a given text.
The algorithm is designed to work with patterns of any dimension and provides diagonal occurrences meeting the specified conditions.
The algorithm's time complexity is analyzed, and extra space is optimized for efficiency.
Usage
The algorithm is designed to make all possible combinations before attempting to implement.
Provide the text and pattern matrices for finding diagonal occurrences.
