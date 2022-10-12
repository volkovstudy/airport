#include <iostream>
#include "TimeTests.cpp"
#include "TimeConverterTests.cpp"
#include "TimeAdderTests.cpp"

using namespace std;

void testTimeClass();
void testTimeConverterClass();
void testTimeAdderClass();

int main() {
    cout << "Tests of Time class:" << endl;
    testTimeClass();
    cout << endl << endl;

    cout << "Tests of TimeConverter class" << endl;
    testTimeConverterClass();
    cout << endl << endl;

    cout << "Tests for TimeAdder class" << endl;
    testTimeAdderClass();

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

void testTimeAdderClass() {
    TimeAdderTests::testSumTimes();
}
