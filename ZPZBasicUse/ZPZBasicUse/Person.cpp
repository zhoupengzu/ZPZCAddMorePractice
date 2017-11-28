//
//  Person.cpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/28.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#include "Person.hpp"

Person::Person(string name, int age) {
    this -> name = name;
    this -> age = age;
}

Person::Person(string name):name(name){
    
}

Person::Person(string name, int age, float score): name(name),age(age),score(score){ }
