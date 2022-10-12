#include <iostream>
#include "TestTemplate.h"
#include "../Time/Time.h"
#include "../TimeAdder/TimeAdder.h"

using namespace std;

class TimeAdderTests : TestTemplate {
public:
    static void testSumTimes() {
        cout << "Sum 9:45 & 0:15 should be 10:00..." << endl;

        Time* firstTime = new Time(9, 45);
        Time* secondTime = new Time(0, 15);

        Time* resultTime = TimeAdder::sumTimes(firstTime, secondTime);

        string expected = "10:00";
        string actual = resultTime->toString();

        bool areSummedRight = equal(expected.begin(), expected.end(), actual.begin(), actual.end());

        printTestResult(areSummedRight);
    }
};
