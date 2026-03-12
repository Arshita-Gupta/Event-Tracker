#include <stdio.h>
#include "events.h"

void display_menu() {
    printf("Event Tracker Menu:\n");
    printf("1. Add Event\n");
    printf("2. Remove Event\n");
    printf("3. List Events\n");
    printf("4. Exit\n");
}

int main() {
    int choice;

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_event();
                break;
            case 2:
                remove_event();
                break;
            case 3:
                list_events();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}