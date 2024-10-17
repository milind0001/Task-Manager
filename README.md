##Overview
TaskMaster is a lightweight, console-based task scheduling and management application written in C++. It allows users to add, view, edit, and delete tasks, helping them organize their daily activities effectively. Each task has a title, description, and time, making it easy to keep track of essential tasks and deadlines.

Key Components
1. Task Management
Users can create tasks with a title, description, and time (in HH
format).
Tasks are assigned a unique ID for easy tracking and manipulation.
2. Task Editing
Existing tasks can be edited by selecting them via their unique ID, allowing users to update the title, description, and time.
3. Task Deletion
Users can delete tasks by their ID, ensuring that irrelevant or completed tasks are removed from the list.
4. Task Display
All tasks are displayed in a clear format with their ID, title, description, and time, making it easy to view and manage tasks at a glance.
Platform
Built using C++ with a modular structure (separated into task handling and scheduling management).
It is a lightweight console application compatible with any C++-compatible environment.
Prerequisites
A C++ compiler (like g++ or similar) to compile and run the program.
Usage
1. Compile the Code
bash
Copy code
g++ main.cpp Task.cpp Scheduler.cpp -o TaskScheduler
2. Run the Program
bash
Copy code
./TaskScheduler
3. Use the Features
Add a Task: Enter task details such as title, description, and time.
View Tasks: Display all the tasks with their ID, title, and time.
Edit a Task: Modify task details using its ID.
Delete a Task: Remove a task using its ID.
Exit: Quit the application.
Code Structure
1. Main Program (main.cpp)
Handles the user input and displays the menu for task management options.
2. Task Class (Task.h / Task.cpp)
Represents individual tasks with an ID, title, description, and time. Provides methods to get task details and modify them.
3. Scheduler Class (Scheduler.h / Scheduler.cpp)
Manages the list of tasks, providing methods to add, edit, delete, and display tasks
