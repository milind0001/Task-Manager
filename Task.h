#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

class Task {
private:
    int id;
    string title;
    string description;
    string time;

public:
    Task(int id, const string &title, const string &description, const string &time);
    int getId() const;
    void setTitle(const string &newTitle);
    void setDescription(const string &newDescription);
    void setTime(const string &newTime);
    void displayTask() const;
};

#endif
