#include "test.h"


int main()
{
    Singleton * p = Singleton::getInstance();
    printf("%d\n",p->num);
    return 0;
}