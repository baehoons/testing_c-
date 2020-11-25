#include <Arduino.h>

#include <WiFi.h>
#include <Test.hpp>

// Test* test;
// void setup() {
//   test = new Test();
//   test->getpin();
  
  

// }
// void loop() {
//   test->standard();

// }

#include<iostream>
 
using namespace std;
 
template <class T>
void simple_sort(int *arr, int n, T cmp) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (cmp(arr[i], arr[j]))
                arr[i] ^= arr[j] ^= arr[i] ^= arr[j];
        }
    }
}
 
void sort_print(int *arr, int n) {
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
void setup() {
  int arr[5] = { 10, 5, 41, 100, 2 };
 
    simple_sort(arr, 5, [](int a, int b) {
        return (a < b ? true : false); });
    sort_print(arr, 5);
 
    simple_sort(arr, 5, [](int a, int b) {
        return (a > b ? true : false); });
    sort_print(arr, 5);
  
  

}
void loop() {
  

}
