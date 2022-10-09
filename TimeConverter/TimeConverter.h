#ifndef AIRPORT_TIMECONVERTER_H
#define AIRPORT_TIMECONVERTER_H

#include "../Time/Time.h"

class TimeConverter {
public:
    static Time* convertFromString(string source);
};


#endif
