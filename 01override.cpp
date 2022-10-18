/*
 * @Description:
 * @Author: liuxin
 * @Institution: Shandong University(WeiHai)
 * @Email: 494113931@qq.com
 * @Date: 2022-10-18 19:31:48
 * @LastEditTime: 2022-10-18 20:07:19
 */
#include <stdio.h>

class Parent
{
public:
    void test()
    {
        printf("I AM PARENT\n");
    }
};

class Child : public Parent
{
public:
    void test()
    {
        printf("I AM CHILD\n");
    }
};

int main()
{
    /*1. 新建实例对象，指针调用，输出：I AM CHILD*/
    // Child *ch = new Child();
    // ch->test();
    /*2. 不使用指针，定义变量，输出：I AM CHILD*/
    Child ch;
    ch.test();
    return 0;
}