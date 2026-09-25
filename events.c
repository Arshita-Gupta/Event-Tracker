#include <stdio.h>
#include <string.h>
#include "events.h"

void add_event(Event events[], int *event_count) {
    if (*event_count >= MAX_EVENTS) {
        printf("Event limit reached. Cannot add more events.\n");
        return;
    }

    printf("Enter event name: ");
    scanf(" %49[^\n]", events[*event_count].name);

    printf("Enter date (YYYY-MM-DD): ");
    scanf(" %10s", events[*event_count].date);

    printf("Enter time (HH:MM): ");
    scanf(" %5s", events[*event_count].time);

    printf("Enter description: ");
    scanf(" %199[^\n]", events[*event_count].description);

    (*event_count)++;

    printf("Event added successfully.\n");
}

void remove_event(Event events[], int *event_count, int index) {
    if (index < 0 || index >= *event_count) {
        printf("Invalid event index.\n");
        return;
    }

    for (int i = index; i < *event_count - 1; i++) {
        events[i] = events[i + 1];
    }

    (*event_count)--;

    printf("Event removed successfully.\n");
}

void list_events(const Event events[], int event_count) {
    if (event_count == 0) {
        printf("No events to display.\n");
        return;
    }

    printf("\nEvents:\n");

    for (int i = 0; i < event_count; i++) {
        printf("\n%d. %s\n", i + 1, events[i].name);
        printf("   Date: %s\n", events[i].date);
        printf("   Time: %s\n", events[i].time);
        printf("   Description: %s\n", events[i].description);
    }
}