//
//  QuotePractice.hpp
//  ZPZBasicUse
//
//  Created by zhoupengzu on 2017/11/27.
//  Copyright © 2017年 zhoupengzu. All rights reserved.
//

#ifndef QuotePractice_hpp
#define QuotePractice_hpp
//引用
/**
 * 引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量
 * 1、不存在空引用。引用必须连接到一块合法的内存。
 * 2、一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
 * 3、引用必须在创建时被初始化。指针可以在任何时间被初始化。
 * 4、引用不再分配内存空间
 * 5、当返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用
 */
#include <stdio.h>

#endif /* QuotePractice_hpp */
