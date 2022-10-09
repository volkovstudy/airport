#include <iostream>
#include "../Time/Time.h"
#include "TestTemplate.h"

using namespace std;

class TimeTests : TestTemplate {
private:
    static void printTimeInfo(Time* time) {
        cout << "Time object: " << time->getHours() << ":" << time->getMinutes() << endl;
    }
public:
    static void testAddHours() {
        cout << "Adding 15 hours to 10:00. Should be 1:00..." << endl;

        Time* time = new Time(10, 0);
        time->addHours(15);

        bool isHoursAppliedCorrectly = time->getHours() == 1;

        printTestResult(isHoursAppliedCorrectly);
    }
    static void testMinusHours() {
        cout << "Removing 40 hours from 5:00. Should be 13:00... " << endl;

        Time* time = new Time(5, 0);
        time->minusHours(40);

        bool isHoursRemovedCorrectly = time->getHours() == 13;

        printTestResult(isHoursRemovedCorrectly);
    }
    static void testAddMinutes() {
        cout << "Adding 65 minutes to 12:00. Should be 13:05..." << endl;

        Time* time = new Time(12, 0);
        time->addMinutes(65);

        bool isMinutesAppliedCorrectly = time->getMinutes() == 5;
        bool isHoursChangedCorrectly = time->getHours() == 13;

        printTestResult(isMinutesAppliedCorrectly && isHoursChangedCorrectly);
    }
    static void testMinusMinutes() {
        cout << "Removing 65 minutes from 12:00. Should be 10:55..." << endl;

        Time* time = new Time(12, 0);
        time->minusMinutes(65);

        bool isMinutesRemovedCorrectly = time->getMinutes() == 55;
        bool isHoursChangedCorrectly = time->getHours() == 10;

        printTestResult(isMinutesRemovedCorrectly == isHoursChangedCorrectly);
    }
    static void testToString() {
        cout << "Converting object values to string..." << endl;

        Time* time = new Time(0, 5);

        string expected = "00:05";
        string actual = time->toString();

        bool isConvertedRight = std::equal(actual.begin(), actual.end(), expected.begin(), expected.end());

        printTestResult(isConvertedRight);
    }
    static void testChanging24Hours() {
        cout << "Changing the 24th hour to 0..." << endl;

        Time* time = new Time(23, 0);
        time->addHours(1);

        bool isHourChanged = time->getHours() == 0;

        printTestResult(isHourChanged);
    }
    static void testChanging60Minutes() {
        cout << "Changing the 60th minute to 0..." << endl;

        Time* time = new Time(12, 59);
        time->addMinutes(1);

        bool isMinutesChanged = time->getMinutes() == 0;

        printTestResult(isMinutesChanged);
    }
};