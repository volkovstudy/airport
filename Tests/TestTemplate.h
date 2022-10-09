#ifndef AIRPORT_TESTTEMPLATE_H
#define AIRPORT_TESTTEMPLATE_H

#include <iostream>

using namespace std;

class TestTemplate {
public:
    static void printTestResult(bool result) {
        if (result)
            cout << "[DONE] Test passed!";
        else
            cout << "[FAIL] Test failed...";
        cout << endl;
    }
};

#endif
