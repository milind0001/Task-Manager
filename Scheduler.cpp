#include "Scheduler.h"
#include <iostream>
#include <algorithm> 
#include <limits>

using namespace std;

Scheduler::Scheduler() : nextTaskId(1) {}

void Scheduler::addTask(const string &title, const string &description, const string &time) {
    Task newTask(nextTaskId++, title, description, time);
    taskList.push_back(newTask);
    cout << "Task added successfully!\n";
}

void Scheduler::viewTasks() const {
    if (taskList.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    for (const Task &task : taskList) {
        task.displayTask();
        cout << "-------------------------\n";
    }
}

void Scheduler::editTask(int taskId) {
    for (Task &task : taskList) {
        if (task.getId() == taskId) {
            string newTitle, newDescription, newTime;
            cout << "Enter new title: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, newTitle);
            cout << "Enter new description: ";
            getline(cin, newDescription);
            cout << "Enter new time (HH:MM): ";
            getline(cin, newTime);

            task.setTitle(newTitle);
            task.setDescription(newDescription);
            task.setTime(newTime);
            cout << "Task updated successfully!\n";
            return;
        }
    }
    cout << "Task not found!\n";
}

void Scheduler::deleteTask(int taskId) {
    auto it = find_if(taskList.begin(), taskList.end(), [taskId](const Task &task) {
        return task.getId() == taskId;
    });

    if (it != taskList.end()) {
        taskList.erase(it);
        cout << "Task deleted successfully!\n";
    } else {
        cout << "Task not found!\n";
    }
}

void Scheduler::displayMenu() const {
    cout << "Task Scheduler Menu:\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Edit Task\n";
    cout << "4. Delete Task\n";
    cout << "5. Exit\n";
}
