#include <math.h>
#include "Time.h"

#define hoursInDay 24
#define minutesInHour 60

Time::Time(int hours, int minutes) : hours(hours), minutes(minutes) {}

void Time::addHours(int hours) {
    if (hours <= 0) return;

    int tempResult = this->hours + hours;

    if (tempResult > hoursInDay) {
        int amountOfDays = tempResult / hoursInDay;
        int difference = tempResult - hoursInDay * amountOfDays;

        this->hours = difference;
    } else {
        this->hours = tempResult;
    }
}

void Time::minusHours(int hours) {
    if (hours <= 0) return;

    int tempResult = this->hours - hours;

    if (tempResult < 0) {
        int positiveResult = abs(tempResult);

        int amountOfDays = positiveResult / hoursInDay;
        int removedDaysResult = (positiveResult - (amountOfDays * hoursInDay));
        int difference = hoursInDay - removedDaysResult;

        this->hours = difference;
    } else {
        this->hours = tempResult;
    }
}

void Time::addMinutes(int minutes) {
    if (minutes <= 0) return;

    int tempResult = this->minutes + minutes;

    if (tempResult > minutesInHour) {
        int amountOfHours = tempResult / minutesInHour;
        int difference = tempResult - minutesInHour * amountOfHours;

        this->minutes = difference;
        addHours(amountOfHours);
    } else {
        this->minutes = tempResult;
    }
}

void Time::minusMinutes(int minutes) {
    if (minutes <= 0) return;

    int tempResult = this->minutes - minutes;

    if (tempResult < 0) {
        int positiveResult = abs(tempResult);

        int amountOfHours = positiveResult / minutesInHour;
        int removedHoursResult = (positiveResult - (amountOfHours * minutesInHour));
        int difference = minutesInHour - removedHoursResult;

        this->minutes = difference;
        minusHours(amountOfHours+1); // +1 because of main hour in minutes variable
    } else {
        this->minutes = tempResult;
    }
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setHours(int hours) {
    Time::hours = hours;
}

void Time::setMinutes(int minutes) {
    Time::minutes = minutes;
}
