#ifndef EVENTS_H
#define EVENTS_H

#define MAX_EVENTS 100

typedef struct {
    char name[50];
    char date[11];
    char time[6];
    char description[200];
} Event;

void add_event(Event events[], int *event_count);
void remove_event(Event events[], int *event_count, int index);
void list_events(const Event events[], int event_count);

#endif