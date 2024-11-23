// Name: NELDA
// Student ID: 1123564
// Date of submission: 2024/11/27

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to merge K sorted arrays
vector<int> mergeKSortedArrays(const vector<vector<int>>& arrays) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap for merging
    vector<int> result; // Resultant merged array

    // Push all elements of the arrays into the min heap
    for (const auto& array : arrays) {
        for (int num : array) {
            minHeap.push(num);
        }
    }

    // Extract elements from the min heap to get a sorted array
    while (!minHeap.empty()) {
        result.push_back(minHeap.top()); // Get the smallest element
        minHeap.pop(); // Remove it from the heap
    }

    return result; // Return the merged sorted array
}

int main() {
    vector<vector<int>> arrays = {{1, 2, 7}, {3, 5, 9}, {0, 6, 10}};
    vector<int> mergedArray = mergeKSortedArrays(arrays); // Merge the arrays

    cout << "Merged Sorted Array: ";
    for (int num : mergedArray) {
        cout << num << " "; // Print the merged array
    }
    cout << endl;

    return 0;
}
