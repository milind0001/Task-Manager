#include "Task.h"
#include <iostream>

Task::Task(int id, const string &title, const string &description, const string &time)
    : id(id), title(title), description(description), time(time) {}

int Task::getId() const {
    return id;
}

void Task::setTitle(const string &newTitle) {
    title = newTitle;
}

void Task::setDescription(const string &newDescription) {
    description = newDescription;
}

void Task::setTime(const string &newTime) {
    time = newTime;
}

void Task::displayTask() const {
    cout << "ID: " << id << "\nTitle: " << title << "\nDescription: " << description << "\nTime: " << time << endl;
}
