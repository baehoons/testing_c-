// #include <iostream>
// using namespace std;
 
// class Plus{
//     public:
//     Plus(){
//         num = 0;
//     }
    
//     int operator()(){
//         num++;
//         return num;
//     }
    
//     int operator()(int n){
//         num = ++n;
//         return num;
//     }
    
//     friend ostream& operator<<(ostream&, const Plus&);
    
//     private:
//     int num;
    
// };
 
// ostream& operator<<(ostream& os, const Plus& plus){
//     os << plus.num << endl;
//     return os;
// }
 
// int main() {
//     Plus plus;
//     int num;
//     num = plus(5);
    
//     cout << num << endl;
    
//     for(int i = 0; i < 5; i++)
//         plus();
        
//     cout << plus << endl;
//     return 0;
// }

//���뼱

// #include<iostream>
// using namespace std;

// template <class T>
// void simple_sort(int *arr, int n, T cmp){
//     for(int i = 0; i< n-1; i++){
//         for(int j=i+1;j<5;j++){
//             if(cmp(arr[i],arr[j])){
//                arr[i] ^= arr[j] ^= arr[i] ^= arr[j];
//             }
//         }
//     }
// }

// void sort_print(int *arr, int n){
//     for(int i = 0; i<5; i++){
//         cout<<arr[i] << " ";
//     }
//     cout<<endl;
// }

// int main(void){
//     int arr[5] = {10,5,41,100,2};
//     simple_sort(arr, 5,[](int a, int b){
//         return(a<b ?true:false);
//     });
//     sort_print(arr,5);

//     simple_sort(arr, 5,[](int a, int b){
//         return(a>b ?true:false);
//     });
//     sort_print(arr,5);
//     return 0;
// }

//���뼱

// #include<iostream>
 
// int main(void) {
//     int val;
//     std::cout << "���� : ";
//     std::cin >> val;
//     std::cout << "��� : " << val << std::endl;

//     return 0;
// } 

//���뼱

// #include<iostream>

// namespace IamA
// {
//     void printOut() { std::cout << "���!" << std::endl; }
// }
 
// namespace IamB
// {
//     void printOut() { std::cout << "qwewqe!" << std::endl; }
// }
 
// int main(void) {
//     IamA::printOut();
//     IamB::printOut();
//     return 0;
// }

// #include<iostream>
 
//  using namespace std;

// namespace IamA{ void printOut();}
 
// namespace IamB{ void printOut();}
 
// int main(void) {
//     IamA::printOut();
//     IamB::printOut();

//     return 0;
// }
 
// void IamA::printOut() { cout << "���!" << endl; }
 
// void IamB::printOut() { std::cout << "���!" << std::endl; }

// #include<iostream>
 
// using namespace std;
 
// int main(void) {
//     int num1 = 10;
//     int &num2 = num1;   //������ ����
 
//     cout << "num1�� �� : " << num1 << endl<<endl;
//     cout << "num2�� �� : " << num2 << endl<<endl;
 
//     cout << endl;
 
//     cout << "num1�� �ּ� �� : " << &num1 << endl<<endl;
//     cout << "num2�� �ּ� �� : " << &num2 << endl<<endl;
//     return 0;
// }


// #include<iostream>    
// using namespace std;
 
// class MyStruct
// {
// public:
//     int num1;
//     char arr[10];
 
 
//     void print(void) { 
//         cout << "My Struct"  << endl; 
//         cout << "num1 = " << num1 << endl;
//         cout << "arr[0] = " << arr << endl;
//     }
// };
 
// int main(void) {
 
//     MyStruct m = { 10, "MY" };
//     m.print();
 
//     return 0;
// }

// #include<iostream>
 
// class A {`
//     int num;
// };
 
// int main(void) {
 
//     A *p = new A();
//     int *arr = new int[10];
 
//     delete p;
//     delete arr[];      //delete p, arr[]; �� ��ü ����
 
//     return 0;
// }


#include<iostream>
#include<string>
 
using namespace std;
 
 
class A {
public:
    A() {
        cout << "Class A!!" << endl;
    }
};
 
 
class B : public A {
    int num;
    string name;
public :
    B() {
        cout << "Class B!!" << endl;
    }
 
    B(int num, string name) {
        this->num = num;
        this->name = name;
        cout<<("Class B!! num = %d, name = %s\n", this->num, this->name.c_str());
    }
};
 
 
int main(void) {
     
    B b(10, "Hwan");
 
    return 0;