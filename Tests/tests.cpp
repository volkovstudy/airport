#include <iostream>
#include "TimeTests.cpp"
#include "TimeConverterTests.cpp"
#include "TimeAdderTests.cpp"
#include "ProjectTests.cpp"

using namespace std;

void testTimeClass();
void testTimeConverterClass();
void testTimeAdderClass();
void testProject();

int main() {
    cout << "Tests of Time class:" << endl;
    testTimeClass();
    cout << endl << endl;

    cout << "Tests of TimeConverter class" << endl;
    testTimeConverterClass();
    cout << endl << endl;

    cout << "Tests for TimeAdder class" << endl;
    testTimeAdderClass();
    cout << endl << endl;

    cout << "Tests of whole project" << endl;
    testProject();

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

void testProject() {
    ProjectTests::testProject("9:45", "0:15", "09:45 00:15 10:00");
}
