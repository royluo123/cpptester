#include <iostream>
#include "MapTest.h"
#include "test/TestThread.h"

int main() {
    MapTest* mapTest = new MapTest();
    mapTest->testSwep();
    std::cout << "..........."<<std::endl;
    mapTest->testSort();

    TestThread* testThread = new TestThread();
    testThread->testPost();

    return 0;
}
