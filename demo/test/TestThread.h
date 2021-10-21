//
// Created by Administrator on 2021/10/21.
//

#ifndef DEMO_TESTTHREAD_H
#define DEMO_TESTTHREAD_H

void *PrintHello(void *threadarg);

class TestThread {
public:
    TestThread();

    void testPost();


};


#endif //DEMO_TESTTHREAD_H
