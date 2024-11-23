// Name: NELDA
// Student ID: 1123564
// Date of submission: 2024/11/27

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task {
    int profit, deadline;
    Task(int p, int d) : profit(p), deadline(d) {}
};

bool compare(Task const& t1, Task const& t2) {
    return t1.profit > t2.profit; // Sort by profit descending
}

pair<int, vector<int>> scheduleTasks(vector<Task>& tasks) {
    sort(tasks.begin(), tasks.end(), compare);

    int maxDeadline = 0;
    for (Task& t : tasks) maxDeadline = max(maxDeadline, t.deadline);

    vector<int> slots(maxDeadline, -1);
    int maxProfit = 0;

    for (Task& t : tasks) {
        for (int j = t.deadline - 1; j >= 0; j--) {
            if (slots[j] == -1) {
                slots[j] = t.profit;
                maxProfit += t.profit;
                break;
            }
        }
    }

    return {maxProfit, slots};
}

int main() {
    vector<Task> tasks = {{100, 3}, {19, 1}, {27, 2}, {30, 2}};
    auto [profit, scheduledTasks] = scheduleTasks(tasks);

    cout << "Maximum Profit: " << profit << endl;
    cout << "Scheduled Tasks: [";
    for (int p : scheduledTasks) {
        if (p != -1) cout << p << ",";
    }
    cout << "]";
    cout << endl;

    return 0;
}
