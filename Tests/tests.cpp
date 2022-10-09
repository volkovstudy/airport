#include <iostream>
#include "TimeTests.cpp"

using namespace std;

void testTimeClass();

int main() {
    testTimeClass();

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
}
