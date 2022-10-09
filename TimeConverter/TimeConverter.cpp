#include "TimeConverter.h"

#define startOfString 0

Time* TimeConverter::convertFromString(string source) {
    int positionOfSplitter = source.find(':');

    string hoursInString = source.substr(startOfString, positionOfSplitter);
    string minutesInString = source.substr(positionOfSplitter + 1, source.size());

    int hours = stoi(hoursInString);
    int minutes = stoi(minutesInString);

    Time* time = new Time(hours, minutes);

    return time;
}
