#include <cmath>
#include "Time.h"

#define hoursInDay 24
#define minutesInHour 60

Time::Time(int hours, int minutes) {
    setHours(hours);
    setMinutes(minutes);
}

void Time::addHours(int hours) {
    if (hours <= 0) return;

    int tempResult = this->hours + hours;

    if (tempResult > hoursInDay) {
        int amountOfDays = tempResult / hoursInDay;
        int difference = tempResult - hoursInDay * amountOfDays;

        setHours(difference);
    } else {
        setHours(tempResult);
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

        setHours(difference);
    } else {
        setHours(tempResult);
    }
}

void Time::addMinutes(int minutes) {
    if (minutes <= 0) return;

    int tempResult = this->minutes + minutes;

    if (tempResult > minutesInHour) {
        int amountOfHours = tempResult / minutesInHour;
        int difference = tempResult - minutesInHour * amountOfHours;

        setMinutes(difference);
        addHours(amountOfHours);
    } else if (tempResult == minutesInHour) {
        setMinutes(tempResult);
        addHours(1);
    } else {
        setMinutes(tempResult);
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

        setMinutes(difference);
        minusHours(amountOfHours+1); // +1 because of main hour in minutes variable
    } else {
        setMinutes(tempResult);
    }
}

string Time::toString() const {
    string hoursString = to_string(hours);
    if (hours % 10 == 0 && hours != 10)
        hoursString = to_string(hours) + "0";
    if (hours / 10 == 0)
        hoursString = "0" + to_string(hours);

    string minutesString = to_string(minutes);
    if (minutes % 10 == 0 && minutes != 10)
        minutesString = to_string(minutes) + "0";
    if (minutes / 10 == 0)
        minutesString = "0" + to_string(minutes);

    return hoursString + ":" + minutesString;
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setHours(int hours) {
    if (hours == 24)
        Time::hours = 0;
    else
        Time::hours = hours;
}

void Time::setMinutes(int minutes) {
    if (minutes == 60)
        Time::minutes = 0;
    else
        Time::minutes = minutes;
}
