## override

```c++
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
    ch.test();
    return 0;
}
```

输出结果为：

```shell
I AM CHILD
```





## override中调用父类方法

```c++
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
```

输出结果为：

```shell
I AM PARENT
I AM CHILD
```



## 不使用virtual

父类指针指向子类对象。

```c++
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
```

输出结果为：

```shell
I AM PARENT
```



## 使用virtual

此为虚拟继承

**虚拟继承：**当一个成员函数需要子类重写，那么在父类应该将其声明为virtual（父类子类同时加virtual 与 只给父类加virtual，效果是一样的），此时的函数称为**虚函数**。

virtual表示该函数即将被子类重写。

```c++
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
```

输出结果为：

```shell
I AM CHILD
```





## 总结

**virtual的产生：**

应对 父类指针指向子类对象 这一情形。

**virtual的作用：**

根据对象的实际类型，调用相应类型的函数。

（说人话：父类指针 指向 子类对象，加virtual，指针按照指向子类对象来处理；不加virtual，指针按照指向父类对象来处理）。