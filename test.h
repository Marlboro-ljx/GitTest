
#include <iostream>

class Singleton
{
private:
    static Singleton *instance;

private:
    Singleton()
    {
        num = 1;
    };
    ~Singleton(){};

public:
    static Singleton *getInstance()
    {
        if(NULL == instance)
        {
            instance = new Singleton;

            return instance;
        }
        return instance;
    }

public:
    int num;
};

Singleton *Singleton::instance = NULL;
