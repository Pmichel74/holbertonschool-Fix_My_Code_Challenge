# 🛠️ Fix My Code Challenge 🛠️

## 📋 Description
This repository contains challenges where existing code needs to be fixed. These challenges cover various programming languages including C, Python, JavaScript, Ruby and more. The main goal is to identify and correct errors in pre-existing code without rewriting everything from scratch.

## 🎯 Objectives
- Debug existing code in various programming languages
- Identify logic errors, syntax issues, and implementation bugs
- Apply fixes with minimal changes to the original code structure
- Improve code reliability and functionality

## 🗂️ Directory Structure
- **0-fizzbuzz/** - Fix FizzBuzz implementation
- **1-print_square/** - Fix the print square function
- **2-sort/** - Fix sorting algorithm
- **3-user/** - Fix user authentication
- **4-delete_dnodeint/** - Fix doubly linked list node deletion

## 🔍 Challenge Details

### ✅ 0-FizzBuzz
A popular coding challenge with a bug where some numbers aren't correctly categorized.

### ✅ 1-Print Square
Function that should print a square with the character '#' has incorrect implementation.

### ✅ 2-Sort
Sorting algorithm with logical error causing incorrect ordering.

### ✅ 3-User
User class with authentication issues where users can't properly login.

### ✅ 4-Delete Node in Doubly Linked List
Implementation of node deletion in a doubly linked list with pointer manipulation errors, specifically correcting the pointer manipulation in the `else` section by properly updating the `next` and `prev` pointers before freeing the node.

## 🚀 Getting Started

### Prerequisites
- GCC compiler for C programs
- Python interpreter
- Node.js for JavaScript
- Ruby interpreter

### Running the Code
Each directory contains specific instructions on how to compile and run the code:

```bash
# For C programs
gcc -Wall -Werror -Wextra -pedantic *.c -o output
./output

# For Python
python3 main.py

# For JavaScript
node main.js

# For Ruby
ruby main.rb
```

## 🧪 Testing
Each challenge includes test files to verify the correctness of your fixes. Run these tests to ensure your solutions work as expected.

## 📜 License
This project is licensed under the MIT License - see the LICENSE file for details.

## 🙏 Acknowledgments
- Holberton School for providing the broken code challenges
- Fellow developers who contributed to finding solutions