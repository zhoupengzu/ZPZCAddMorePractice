//
//  LambdaPractice.cpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/27.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "LambdaPractice.hpp"
#include <iostream>

using namespace std;
//[capture](parameters)->return-type{body}，没有返回值时：[capture](parameters){body}
//返回值只能用auto？
/**
 * []      // 沒有定义任何变量。使用未定义变量会引发错误。
 * [x, &y] // x以传值方式传入（默认），y以引用方式传入。
 * [&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
 * [=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
 * [&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
 * [=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
 */
void practice01(){
    auto result1 = [](int a) -> int{
        cout << a << endl;
        return a;
    };
    auto result2 = [](int a) -> void{
        cout << a << endl;
    };
    result1(10);
    result2(10);
}
