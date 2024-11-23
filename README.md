# Homework 2 - Data Structures
**Author: Nelda 1123564**

## Table of Contents
- [Question 1: Binary Tree - Find the Diameter of a Binary Tree](#question-1-binary-tree---find-the-diameter-of-a-binary-tree)
- [Question 2: Heap Sort - Build a Priority Queue for Tasks](#question-2-heap-sort---build-a-priority-queue-for-tasks)
- [Question 3: Merge K Sorted Arrays Using Min Priority Queue](#question-3-merge-k-sorted-arrays-using-min-priority-queue)
- [Question 4: Schedule Tasks with Deadlines Using Max Priority Queue](#question-4-schedule-tasks-with-deadlines-using-max-priority-queue)

## Question 1: Binary Tree - Find the Diameter of a Binary Tree
Write a program to calculate the **diameter**  of a binary tree. The diameter of a binary tree is the length of the longest path between any two nodes in the tree. The path may or may not pass through the root.

You are required to:
- Build the binary tree using level-order input. Use -1 to represent null nodes.
- Implement a function to calculate the diameter of the binary tree efficiently using recursion.

## Question 2: Heap Sort - Build a Priority Queue for Tasks
Write a program to manage a task priority queue using a **max heap**. Each task has a name and a priority level. 

Your program should:
- **Add a Task**: Insert a new task with a specified priority.
- **Get the Highest Priority Task**: Remove and return the task with the highest priority.
- **Display Remaining Tasks**: Print all tasks in descending order of priority.

## Question 3: Merge K Sorted Arrays Using Min Priority Queue
You are given K sorted arrays of integers. Write a Python program to merge these arrays into a single sorted array using a **Min Priority Queue**. 

Your program should:
- Insert the first element of each array into a Min Priority Queue along with the array index and element index.
- Extract the smallest element from the queue, add it to the result array, and insert the next element from the same array into the queue.
- Continue this process until all elements from all arrays are merged.
   
## Question 4: Schedule Tasks with Deadlines Using Max Priority Queue
You are given N tasks, each with a profit and a deadline. Write a Python program to schedule the tasks such that the maximum profit is achieved, using a  **Max Priority Queue**.

You are required to:
- Schedule each task to be completed within its specified deadline (1-based index).
- Ensure that only one task can be scheduled at a time.




