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

using namespace std;  //使用std命名空间

void swapTwoValue();
void swap_01(int a,int b);
void swap_02(int &a, int &b);
void swap_03(int * a, int * b);
void swap_04(int * a, int * b);

int main(int argc, const char * argv[]) {
    // insert code here...
//    forPractice01();
//    forPractice02();
//    forPractice03();
//    swapTwoValue();
    rand_practice();
    return 0;
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

