#include "pch.h"
#include "dllc.h"
#include <iostream>

int testinit(int a, int b)
{
    return a + b;
}

bool to_grayscale(uint8_t* ptr, int to_skip, int to_edit)
{
    bool flag = 1;

    //ustaw pointer
    ptr = ptr + 4*to_skip;

    //edytuj piksele
    for (uint8_t i = 0; i < to_edit * 4; i += 4) {
        uint8_t gray = ptr[i] * 0.11 + ptr[i + 1] * 0.59 + ptr[i + 2] * 0.3;
        ptr[i] = gray;
        ptr[i+1] = gray;
        ptr[i+2] = gray;
    }

    flag = 0;
    return flag;
}

