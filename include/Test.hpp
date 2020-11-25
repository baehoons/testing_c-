#pragma once
#ifndef TEST_HPP
#define TEST_HPP
#include <Arduino.h>

#define LED_PIN_R 21
#define LED_PIN_Y 22
#define LED_PIN_G 23

#define BUTTON 19

class Test {
    public :
        int count;
        void getpin();
        void change(int a, int b);
        void standard();
        
        
};

#endif