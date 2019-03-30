#ifndef ccore_h
#define ccore_h

#include <stdio.h>

struct Color {
    unsigned char r, g, b, a;
};

struct Color disabledColor(struct Color color);

#endif /* ccore_h */
