#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Task.h"
#include <vector>
using namespace std;

class Scheduler {
private:
    vector<Task> taskList;
    int nextTaskId;

public:
    Scheduler();
    void addTask(const string &title, const string &description, const string &time);
    void viewTasks() const;
    void editTask(int taskId);
    void deleteTask(int taskId);
    void displayMenu() const;
};

#endif
