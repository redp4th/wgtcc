#include "test.h"


void test()
{
    typedef enum {
        AA,
        BB = 3,
        CC = 3,
        DD,
    } idtype_t;
    
    expect(AA, 1);
    expect(BB, 3);
    expect(CC, 4);
    expect(DD, 5);
    
}

int main()
{
    test();
    return 0;
}
