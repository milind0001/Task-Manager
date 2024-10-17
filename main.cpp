#include "Scheduler.h"
#include <iostream>

using namespace std;

int main() {
    Scheduler scheduler;
    int choice;

    do {
        scheduler.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string title, description, time;
            cout << "Enter task title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter task description: ";
            getline(cin, description);
            cout << "Enter task time (HH:MM): ";
            getline(cin, time);
            scheduler.addTask(title, description, time);
            break;
        }
        case 2:
            scheduler.viewTasks();
            break;
        case 3: {
            int taskId;
            cout << "Enter task ID to edit: ";
            cin >> taskId;
            scheduler.editTask(taskId);
            break;
        }
        case 4: {
            int taskId;
            cout << "Enter task ID to delete: ";
            cin >> taskId;
            scheduler.deleteTask(taskId);
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
