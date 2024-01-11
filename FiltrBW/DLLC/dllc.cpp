#include "pch.h"
#include "dllc.h"


int testinit(int a, int b)
{
    return a + b;
}

bool to_grayscale(uint8_t* ptr, int to_skip, int to_edit)
{
    bool flag = 1;

    /*uint8_t tred[256];
    uint8_t tgreen[256];
    uint8_t tblue[256];

    for (int i = 0; i <= 255; i++)
    {
        tred[i] = i * 0.11f;
        tgreen[i] = i * 0.59f;
        tblue[i] = i * 0.3f;
    }*/

    //ustaw pointer
    ptr = ptr + 4*to_skip;

    //edytuj piksele
    to_edit *= 4;
    for (int i = 0; i < to_edit; i += 4) {
        uint8_t gray = ptr[i] * 0.11f + ptr[i + 1] * 0.59f + ptr[i + 2] * 0.3f;
        //uint8_t gray = tred[ptr[i]] + tgreen[ptr[i + 1]] + tblue[ptr[i + 2]];
        ptr[i] = gray;
        ptr[i+1] = gray;
        ptr[i+2] = gray;
    }

    flag = 0;
    return flag;
}

