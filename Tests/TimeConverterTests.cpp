#include <string>
#include "../TimeConverter/TimeConverter.h"
#include "TestTemplate.h"

using namespace std;

class TimeConverterTests : TestTemplate {
private:
    static bool equal(string source1, string source2) {
        return std::equal(source1.begin(), source1.end(), source2.begin(), source2.end());
    }
public:
    static void testConvertFromString() {
        cout << "Converting string \"12:00\" to Time object..." << endl;
        Time* expected = new Time(12, 0);
        string expectedString = expected->toString();

        Time* actual = TimeConverter::convertFromString(expectedString);
        string actualString = actual->toString();

        bool isEqual = equal(expectedString, actualString);

        printTestResult(isEqual);
    }
};