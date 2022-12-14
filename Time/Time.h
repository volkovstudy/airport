#ifndef AIRPORT_TIME_H
#define AIRPORT_TIME_H

#include <string>

using namespace std;

class Time {
private:
    int hours, minutes;
public:
    Time(int hours, int minutes);

    void addHours(int hours);
    void minusHours(int hours);

    void addMinutes(int minutes);
    void minusMinutes(int minutes);

    string toString() const;

    int getHours() const;
    int getMinutes() const;

    void setHours(int hours);
    void setMinutes(int minutes);
};


#endif
