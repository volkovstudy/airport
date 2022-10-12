#include "TimeAdder.h"

Time *TimeAdder::sumTimes(Time *source1, Time *source2) {
    int firstHours = source1->getHours();
    int firstMinutes = source1->getMinutes();

    Time* resultTime = new Time(firstHours, firstMinutes);
    resultTime->addHours(source2->getHours());
    resultTime->addMinutes(source2->getMinutes());

    return resultTime;
}
