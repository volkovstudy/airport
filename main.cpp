#include <iostream>
#include "Time/Time.h"
#include "TimeConverter/TimeConverter.h"
#include "TimeAdder/TimeAdder.h"

using namespace std;

void printTimes(Time* firstTime, Time* secondTime, Time* thirdTime);

int main() {
    string departureTimeString, timeInFlyString;
    cin >> departureTimeString >> timeInFlyString;

    Time* departureTime = TimeConverter::convertFromString(departureTimeString);
    Time* timeInFly = TimeConverter::convertFromString(timeInFlyString);

    Time* arrivalTime = TimeAdder::sumTimes(departureTime, timeInFly);

    printTimes(departureTime, timeInFly, arrivalTime);

    return 0;
}

void printTimes(Time* firstTime, Time* secondTime, Time* thirdTime) {
    cout << firstTime->toString() << " ";
    cout << secondTime->toString() << " ";
    cout << thirdTime->toString();
    cout << endl;
}
