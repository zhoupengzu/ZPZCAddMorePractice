//
//  RandPractice.cpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/27.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "RandPractice.hpp"
#include <iostream>

using namespace std;

void rand_practice(){
    //设置种子
    srand(1.3);
    for (int i = 0; i < 20; i++) {
        cout << rand() << endl;
    }
}
