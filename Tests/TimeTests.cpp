#include <iostream>
#include "../Time/Time.h"

using namespace std;

class TimeTests {
private:
    static void printTestResult(bool result) {
        if (result)
            cout << "[DONE] Test passed!";
        else
            cout << "[FAIL] Test failed...";
        cout << endl;
    }
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
};