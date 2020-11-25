#ifndef MyTemp_h
#define MyTemp_h



class Test;

template<typename T>
class Test2{
    public:

        Test2() {}
        void call(Test* moduleTest);
        void printB();
        Test2(T t1, T Test2);
        void show();
    
    private:
        T t1;
        T t2;
};

#endif