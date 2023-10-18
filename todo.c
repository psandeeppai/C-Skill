#include <stdio.h>
#include <string.h>

// Define a structure to represent a task
struct Task {
    int id;
    char description[100];
    int completed;
};

// Function to add a task
void addTask(struct Task tasks[], int* count, const char* description) {
    struct Task newTask;
    newTask.id = (*count) + 1;
    strcpy(newTask.description, description);
    newTask.completed = 0;
    tasks[*count] = newTask;
    (*count)++;
}

// Function to remove a task
void removeTask(struct Task tasks[], int* count, int taskId) {
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (tasks[i].id == taskId) {
            for (int j = i; j < *count - 1; j++) {
                tasks[j] = tasks[j + 1];
            }
            (*count)--;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Task with ID %d not found.\n", taskId);
    }
}

// Function to list all tasks
void listTasks(struct Task tasks[], int count) {
    if (count == 0) {
        printf("No tasks to display.\n");
    } else {
        printf("Tasks:\n");
        for (int i = 0; i < count; i++) {
            printf("%d. %s [%s]\n", tasks[i].id, tasks[i].description, (tasks[i].completed ? "Completed" : "Incomplete"));
        }
    }
}

int main() {
    struct Task tasks[100];
    int taskCount = 0;
    int choice;
    char description[100];

    while (1) {
        printf("\nTo-Do List Application\n");
        printf("1. Add Task\n");
        printf("2. Remove Task\n");
        printf("3. List Tasks\n");
        printf("4. Exit\n"); // Added Exit option
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                scanf(" %[^\n]", description);
                addTask(tasks, &taskCount, description);
                break;
            case 2:
                if (taskCount > 0) {
                    printf("Enter task ID to remove: ");
                    int taskId;
                    scanf("%d", &taskId);
                    removeTask(tasks, &taskCount, taskId);
                } else {
                    printf("No tasks to remove.\n");
                }
                break;
            case 3:
                listTasks(tasks, taskCount);
                break;
            case 4:
                return 0; // Exit the program
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
