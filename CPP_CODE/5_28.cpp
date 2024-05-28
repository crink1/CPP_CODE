//class H2O {
//public:
//    int cnt = 0;
//    mutex mut;
//    condition_variable cond;
//    H2O() {
//
//    }
//    sem_t sem;
//    void hydrogen(function<void()> releaseHydrogen) {
//        unique_lock<mutex> lock(mut);
//        while (cnt >= 2)
//        {
//            cond.wait(lock);
//        }
//        // releaseHydrogen() outputs "H". Do not change or remove this line.
//        releaseHydrogen();
//        cnt++;
//        if (cnt == 2)
//        {
//            cond.notify_all();
//        }
//    }
//
//    void oxygen(function<void()> releaseOxygen) {
//        unique_lock<mutex> lock(mut);
//        while (cnt != 2)
//        {
//            cond.wait(lock);
//        }
//        // releaseOxygen() outputs "O". Do not change or remove this line.
//        releaseOxygen();
//        cnt = 0;
//        cond.notify_all();
//    }
//};