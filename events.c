#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "events.h"

#define MAX_EVENTS 100

typedef struct {
    char name[50];
    char date[20];
    char time[10];
} Event;

static Event events[MAX_EVENTS];
static int event_count = 0;

void add_event(const char *name, const char *date, const char *time) {
    if (event_count < MAX_EVENTS) {
        strncpy(events[event_count].name, name, sizeof(events[event_count].name) - 1);
        strncpy(events[event_count].date, date, sizeof(events[event_count].date) - 1);
        strncpy(events[event_count].time, time, sizeof(events[event_count].time) - 1);
        event_count++;
        printf("Event added: %s on %s at %s\n", name, date, time);
    } else {
        printf("Event limit reached. Cannot add more events.\n");
    }
}

void remove_event(int index) {
    if (index < 0 || index >= event_count) {
        printf("Invalid event index.\n");
        return;
    }
    for (int i = index; i < event_count - 1; i++) {
        events[i] = events[i + 1];
    }
    event_count--;
    printf("Event removed.\n");
}

void list_events() {
    if (event_count == 0) {
        printf("No events to display.\n");
        return;
    }
    printf("Events:\n");
    for (int i = 0; i < event_count; i++) {
        printf("%d: %s on %s at %s\n", i, events[i].name, events[i].date, events[i].time);
    }
}