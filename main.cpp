#include <iostream>
#include "Time/Time.h"
#include "TimeConverter/TimeConverter.h"
#include "TimeAdder/TimeAdder.h"

using namespace std;

int main() {
    string departureTimeString, timeInFlyString;
    cin >> departureTimeString >> timeInFlyString;

    Time* departureTime = TimeConverter::convertFromString(departureTimeString);
    Time* timeInFly = TimeConverter::convertFromString(timeInFlyString);

    Time* arrivalTime = TimeAdder::sumTimes(departureTime, timeInFly);

    cout << departureTimeString << " ";
    cout << timeInFlyString << " ";
    cout << arrivalTime->toString() << endl;

    return 0;
}
