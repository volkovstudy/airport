#include <iostream>
#include "TimeTests.cpp"
#include "TimeConverterTests.cpp"

using namespace std;

void testTimeClass();
void testTimeConverterClass();

int main() {
    cout << "Tests of Time class:" << endl;
    testTimeClass();
    cout << endl << endl;

    cout << "Tests of TimeConverter class" << endl;
    testTimeConverterClass();

    return 0;
}

void testTimeClass() {
    TimeTests::testAddHours();
    cout << endl;
    TimeTests::testMinusHours();
    cout << endl;
    TimeTests::testAddMinutes();
    cout << endl;
    TimeTests::testMinusMinutes();
    cout << endl;
    TimeTests::testChanging24Hours();
    cout << endl;
    TimeTests::testChanging60Minutes();
    cout << endl;
    TimeTests::testToString();
}

void testTimeConverterClass() {
    TimeConverterTests::testConvertFromString();
}
