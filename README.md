# Event Tracker

A simple command-line event management application written in C.

## Overview

Event Tracker allows users to add, remove, and view events through a menu-driven command-line interface. Each event stores a name, date, time, and description.

## Features

- Add events
- Remove events
- List events
- Store event name, date, time, and description
- Support up to 100 events
- Menu-driven command-line interface

## Project Structure

```text
Event-Tracker/
├── events.c
├── events.h
├── main.c
├── utils.c
├── Makefile
├── README.md
└── .gitignore
```

## Technologies

- C
- GCC
- Make

## Build and Run

Using Make:

```bash
make
./event-tracker
```

On Windows:

```powershell
.\event-tracker.exe
```