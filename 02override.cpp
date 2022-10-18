/*
 * @Description:
 * @Author: liuxin
 * @Institution: Shandong University(WeiHai)
 * @Email: 494113931@qq.com
 * @Date: 2022-10-18 19:59:20
 * @LastEditTime: 2022-10-18 20:10:25
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
        Parent::test();
        printf("I AM CHILD\n");
    }
};

int main()
{
    Child ch;
    ch.test();
    return 0;
}