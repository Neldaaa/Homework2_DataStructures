# Homework 2 - Data Structures
**Author: Nelda 1123564**

Welcome to my Homework 2 project on Data Structures! In this repository, you'll find solutions to four intriguing problems that demonstrate the power and versatility of data structures in Python. Each problem is not only a challenge but also a practical application of concepts like binary trees, heaps, and priority queues. Let's dive into the details!

## Table of Contents
- [Question 1: Binary Tree - Find the Diameter of a Binary Tree](#question-1-binary-tree---find-the-diameter-of-a-binary-tree)
- [Question 2: Heap Sort - Build a Priority Queue for Tasks](#question-2-heap-sort---build-a-priority-queue-for-tasks)
- [Question 3: Merge K Sorted Arrays Using Min Priority Queue](#question-3-merge-k-sorted-arrays-using-min-priority-queue)
- [Question 4: Schedule Tasks with Deadlines Using Max Priority Queue](#question-4-schedule-tasks-with-deadlines-using-max-priority-queue)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Question 1: Binary Tree - Find the Diameter of a Binary Tree
In this challenge, we calculate the **diameter** of a binary tree, defined as the longest path between any two nodes. The program allows you to build the tree using level-order input, where `-1` represents null nodes. We implement an efficient recursive function to compute the diameter.

### Key Features:
- Level-order construction of the binary tree
- Efficient diameter calculation using recursion

## Question 2: Heap Sort - Build a Priority Queue for Tasks
This program manages a **task priority queue** using a max heap. Each task has a name and a priority level, allowing you to:
- **Add a Task**: Insert a new task with a specified priority.
- **Get the Highest Priority Task**: Remove and return the task with the highest priority.
- **Display Remaining Tasks**: Print all tasks in descending order of priority.

### Key Features:
- Dynamic task management with a priority system
- User-friendly interface for adding and retrieving tasks

## Question 3: Merge K Sorted Arrays Using Min Priority Queue
Given K sorted arrays, this program merges them into a single sorted array using a **Min Priority Queue**. The process involves:
- Inserting the first element of each array into the queue.
- Extracting the smallest element and adding the next element from the corresponding array until all elements are merged.

### Key Features:
- Efficient merging of multiple sorted arrays
- Utilizes a priority queue for optimal performance

## Question 4: Schedule Tasks with Deadlines Using Max Priority Queue
In this task scheduling program, you are given N tasks, each with a profit and a deadline. The goal is to maximize profit by scheduling tasks effectively using a **Max Priority Queue**.

### Key Features:
- Optimized task scheduling for maximum profit
- Intuitive handling of deadlines and profits

## Getting Started
To run the programs, ensure you have Python installed on your machine. Clone this repository and navigate to the respective question files to execute the solutions.

```bash
git clone https://github.com/yourusername/homework2-datastructures.git
cd homework2-datastructures
python question1.py  # Replace with the appropriate question file
