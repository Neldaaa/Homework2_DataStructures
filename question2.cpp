// Name: NELDA
// Student ID: 1123564
// Date of submission: 2024/11/27

#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

// Task structure containing name and priority
struct Task {
    string name;    // Name of the task
    int priority;   // Priority of the task
    Task(string n, int p) : name(n), priority(p) {}
};

// Custom comparator for max heap
struct CompareTask {
    bool operator()(Task const& t1, Task const& t2) {
        return t1.priority < t2.priority; // Higher priority tasks first
    }
};

int main() {
    priority_queue<Task, vector<Task>, CompareTask> pq; // Max heap for tasks

    // Changed input
    pq.push(Task("Email", 25));
    pq.push(Task("Homework", 15));
    pq.push(Task("Meeting", 30));
    pq.push(Task("Shopping", 10));

    // Displaying and processing tasks
    cout << "Highest Priority Task: " << pq.top().name << endl;
    pq.pop(); // Remove highest priority task

    pq.push(Task("Workout", 20));

    cout << "Next Highest Priority Task: " << pq.top().name << endl;
    pq.pop(); // Remove highest priority task

    // Display remaining tasks
    cout << "Remaining tasks: ";
    while (!pq.empty()) {
        Task t = pq.top();
        cout << "(" << t.name << ", " << t.priority << ") ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
