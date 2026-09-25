#include <stdio.h>
#include "events.h"

void display_menu() {
    printf("\nEvent Tracker Menu:\n");
    printf("1. Add Event\n");
    printf("2. Remove Event\n");
    printf("3. List Events\n");
    printf("4. Exit\n");
}

int main() {
    Event events[MAX_EVENTS];
    int event_count = 0;
    int choice;
    int index;

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_event(events, &event_count);
                break;

            case 2:
                if (event_count == 0) {
                    printf("No events to remove.\n");
                } else {
                    list_events(events, event_count);
                    printf("\nEnter event number to remove: ");
                    scanf("%d", &index);
                    remove_event(events, &event_count, index - 1);
                }
                break;

            case 3:
                list_events(events, event_count);
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