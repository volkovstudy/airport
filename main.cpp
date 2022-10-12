#include <iostream>
#include "Time/Time.h"
#include "TimeConverter/TimeConverter.h"

using namespace std;

Time* getArrivalTime(Time* departureTime, Time* timeInFly);

int main() {
    string departureTimeString, timeInFlyString;
    cin >> departureTimeString >> timeInFlyString;

    Time* departureTime = TimeConverter::convertFromString(departureTimeString);
    Time* timeInFly = TimeConverter::convertFromString(timeInFlyString);

    Time* arrivalTime = getArrivalTime(departureTime, timeInFly);

    cout << departureTimeString << " ";
    cout << timeInFlyString << " ";
    cout << arrivalTime->toString() << endl;

    return 0;
}

Time* getArrivalTime(Time* departureTime, Time* timeInFly) {
    int departureHours = departureTime->getHours();
    int departureMinutes = departureTime->getMinutes();

    Time* arrivalTime = new Time(departureHours, departureMinutes);

    arrivalTime->addHours(timeInFly->getHours());
    arrivalTime->addMinutes(timeInFly->getMinutes());

    return arrivalTime;
}
