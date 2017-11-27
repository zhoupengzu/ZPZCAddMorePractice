//
//  ForCyclePractice.cpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/27.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "ForCyclePractice.hpp"
#include <iostream>

using namespace std;

void forPractice01() {
    for (int i = 0; i < 10; i++) {
        cout << i <<endl;
    }
}
//基于范围
void forPractice02(){
    int my_array[5] = {1,2,3,4,5};
    for(int &x:my_array){
//        cout << x <<endl;
        x = x * 2;
    }
    cout << *(my_array + 2) << endl; //取第3个  6
}
void forPractice03(){
    string str = "Hello,World!";
    for(char &ch : str){
        ch = toupper(ch);
    }
    cout << str << endl; //HELLO,WORLD!
}
