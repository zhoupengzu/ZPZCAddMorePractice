//
//  Person.hpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/28.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    float score;
    Person(string name, int age, float score);
    Person(string name, int age);
    Person(string name);
};

#endif /* Person_hpp */
