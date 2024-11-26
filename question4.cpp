// Name: NELDA
// Student ID: 1123564
// Date of submission: 2024/11/26

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Task structure containing profit and deadline
struct Task {
    int profit, deadline;
    Task(int p, int d) : profit(p), deadline(d) {}
};

// Comparator to sort tasks by profit in descending order
bool compare(Task const& t1, Task const& t2) {
    return t1.profit > t2.profit;
}

// Function to schedule tasks to maximize profit
pair<int, vector<int>> scheduleTasks(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), compare); // Sort tasks by profit

    int maxDeadline = 0;
    for (Task& t : tasks) maxDeadline = max(maxDeadline, t.deadline);

    vector<int> slots(maxDeadline, -1); // Slots for tasks
    int maxProfit = 0;

    for (Task& t : tasks) {
        for (int j = t.deadline - 1; j >= 0; j--) {
            if (slots[j] == -1) { // Assign task to slot
                slots[j] = t.profit;
                maxProfit += t.profit;
                break;
            }
        }
    }

    return {maxProfit, slots};
}

int main() {
    vector<Task> tasks = {{120, 2}, {90, 1}, {60, 2}, {30, 1}};
    auto [profit, scheduledTasks] = scheduleTasks(tasks);

    cout << "Maximum Profit: " << profit << endl;
    cout << "Scheduled Tasks: ";
    for (int p : scheduledTasks) {
        if (p != -1) cout << p << " ";
    }
    cout << endl;

    return 0;
}

