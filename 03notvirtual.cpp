/*
 * @Description:
 * @Author: liuxin
 * @Institution: Shandong University(WeiHai)
 * @Email: 494113931@qq.com
 * @Date: 2022-10-18 20:13:08
 * @LastEditTime: 2022-10-18 20:14:16
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
    Child ch;
    Parent *p = &ch;
    p->test();
    return 0;
}