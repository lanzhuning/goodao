#include <stdio.h>
#include "common/serialize.h"
#include "common/type.h"



int main() {
    printf("Hello, World!\n");
    Uchar *addr = ser_int(234567);
    printf("a1:%d\n",*addr);
    printf("a1:%d\n",*(addr+1));
    printf("a1:%d\n",*(addr+2));
    printf("a1:%d\n",*(addr+3));

    Int result = un_ser_int(addr);

    printf("result:%d",result);
    return 0;
}

