//
//  main.cpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/27.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include <iostream>
#include "ForCyclePractice.hpp"
#include "RandPractice.hpp"
#include "Person.hpp"
#include "TemplateClass.hpp"

using namespace std;  //使用std命名空间

void swapTwoValue();
void swap_01(int a,int b);
void swap_02(int &a, int &b);
void swap_03(int * a, int * b);
void swap_04(int * a, int * b);

void structInit();
void practiceSwapUseTemplate();

enum Orders{
    First = 1,
    Second = 2
};
template <typename T, Orders order>
void templatePractice1(T &a, T &b) {
    if (order == First) {
        T temp = a;
        a = b;
        b = temp;
    }
    return;
}

void practiceClassTemplate();

int main(int argc, const char * argv[]) {
    // insert code here...
//    forPractice01();
//    forPractice02();
//    forPractice03();
//    swapTwoValue();
//    rand_practice();
//    structInit();
//    practiceSwapUseTemplate();
    practiceClassTemplate();
    return 0;
}

void practiceClassTemplate() {
    int a = 10;
    int b = 20;
    TemplateClass<int> tp;
    tp.changeData<ChangeStatusChange>(a, b);
    cout << a << endl;
    tp.changeData<ChangeStatusAdd>(a, b);
    cout << a << endl;
}

void practiceSwapUseTemplate() {
    int a = 10;
    int b = 20;
    templatePractice1<int, First>(a, b);
    cout << a << endl;
}

void structInit() {
    struct Person person1 = {
        "zhoupengzu",
        20
    };
    cout << person1.name << endl;
    struct Person person2 = Person("zhoupengzu", 30);
    cout << person2.name << endl;
    struct Person person3 = Person("zhoupengzu", 40, 100);
    cout << person3.score << endl;
}

void swapTwoValue(){
    int a = 10;
    int b = 20;
//    swap_01(a, b);
//    swap_02(a, b);
//    cout << &a << endl;
//    swap_03(&a, &b);
    swap_04(&a, &b);
    cout << a << endl;
    cout << b << endl;
}

//这个是没办法交换
void swap_01(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    
}

void swap_02(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << endl;  //20
}
//这样是不行的
void swap_03(int * a, int * b){
    int * temp = a;
//    cout << temp << endl;
    a = b;
    b = temp;
    cout << *a << endl;
    cout << *b << endl;
}

void swap_04(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

