#include "counter.h"

static int counter = 0;

void initCounter() {
    counter = 0;
}

int getCounterValue() {
    return counter;
}

void incrementCounter() {
    counter++;
}

void decrementCounter() {
    counter--;
}

void setCounterValue(int value) {
    counter = value;
}
