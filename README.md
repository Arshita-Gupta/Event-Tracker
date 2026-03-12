# Event Tracker

## Overview
The Event Tracker is a simple C application that allows users to manage their events efficiently. Users can add, remove, and list events through a user-friendly menu interface.

## Features
- Add new events with details such as name, date, and time.
- Remove existing events.
- List all scheduled events.
- Input validation to ensure data integrity.

## File Structure
```
event-tracker
├── src
│   ├── main.c        # Entry point of the application
│   ├── events.c      # Implementation of event management functions
│   ├── events.h      # Header file for event management
│   └── utils.c       # Utility functions for input validation and formatting
├── Makefile          # Build instructions for the project
└── README.md         # Documentation for the project
```

## Building the Project
To compile the project, navigate to the project directory and run the following command:

```
make
```

This will generate the executable for the Event Tracker application.

## Running the Application
After building the project, you can run the application using the following command:

```
./event-tracker
```

Follow the on-screen menu to manage your events.