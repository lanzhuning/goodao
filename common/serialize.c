#include <zconf.h>
#include "type.h"
#include <stdlib.h>


Uchar * ser_value(int *pInt, size_t i);

Uchar *ser_int(int i) {
    return ser_value(&i, sizeof(i));
}

Uchar *ser_value(int *pInt, size_t size) {
    Uchar *result = malloc(size);
    for (int i = 1; i <= size; i++) {
        result[size - i] = (0xff) & (*pInt >> (8 * (i - 1)));
    }
    return result;
}

Int un_ser_int(Uchar *arr) {
    Int result = 0;

    for (int index = 0; index < 4; ++index) {
        result = result << (8);
        result = result | *(arr + index);
    }

    return result;
}
