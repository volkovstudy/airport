#include "TestTemplate.h"
#include "../Time/Time.h"
#include "../TimeConverter/TimeConverter.h"
#include "../TimeAdder/TimeAdder.h"

class ProjectTests : TestTemplate {
public:
    static void testProject(string departureTimeString, string timeInFlyString, string resultString) {
        cout << "Sum times: " << departureTimeString << " & " << timeInFlyString;
        cout << " should be \"" << resultString << "\"..." << endl;

        Time* departureTime = TimeConverter::convertFromString(departureTimeString);
        Time* timeInFly = TimeConverter::convertFromString(timeInFlyString);

        Time* arrivalTime = TimeAdder::sumTimes(departureTime, timeInFly);

        string result = departureTime->toString() + " " + timeInFly->toString() + " " + arrivalTime->toString();

        bool areSummedRight = std::equal(resultString.begin(), resultString.end(), result.begin(), result.end());

        printTestResult(areSummedRight);
    }
};
