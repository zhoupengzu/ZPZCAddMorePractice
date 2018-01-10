//
//  TemplatePractice.hpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2018/1/10.
//  Copyright © 2018年 zhoupengzu. All rights reserved.
//

#ifndef TemplateClass_hpp
#define TemplateClass_hpp

#include <stdio.h>
#include <string>
#include <iostream>

/**
 * 1、带模版的方法和类不支持定义和实现分离
 * 2、在书写模版的实现的时候，要注意
 */

using namespace std;

enum ChangeStatus{
  ChangeStatusChange,
    ChangeStatusAdd
};

template <class type>
class TemplateClass {
public:
    TemplateClass();
    TemplateClass(string name, int age);
//    ~TemplateClass();
    template <ChangeStatus change>
    void changeData(type &a, type &b);
    void normalMethod();
private:
    string name;
    int age;
};

template<class type>
TemplateClass<type>::TemplateClass(void) {
    this->name = "";
    this->age = 0;
    cout << "init" << endl;
}

//序列化列表初始化
template<class type>
TemplateClass<type>::TemplateClass(string name, int age):name(name),age(age){ }

template<class type>
void TemplateClass<type>::normalMethod(){
    
}

template<class type>
template<ChangeStatus change>
void TemplateClass<type>::changeData(type &a, type &b) {
    switch (change) {
        case ChangeStatusAdd:
            if (typeid(a) == typeid(int) && typeid(b) == typeid(int)) {
                int temp = a;
                a = a + b;
                b = temp + b;
            } else {
                cout << "illegal data" << endl;
            }
            break;
        case ChangeStatusChange:{
            type temp = a;
            a = b;
            b = temp;
        }
            break;
        default:
            break;
    }
}

#endif /* TemplatePractice_hpp */
