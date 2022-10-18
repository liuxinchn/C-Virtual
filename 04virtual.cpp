/*
 * @Description:
 * @Author: liuxin
 * @Institution: Shandong University(WeiHai)
 * @Email: 494113931@qq.com
 * @Date: 2022-10-18 20:16:09
 * @LastEditTime: 2022-10-18 20:17:04
 */
#include <stdio.h>

class Parent
{
public:
    virtual void test()
    {
        printf("I AM PARENT\n");
    }
};

class Child : public Parent
{
public:
    virtual void test()
    {
        printf("I AM CHILD\n");
    }
};

int main()
{
    Child ch;
    Parent *p = &ch;
    p->test();
    return 0;
}