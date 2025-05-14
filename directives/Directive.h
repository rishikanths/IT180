#include <iostream>
#ifndef PI
#define PI 3.141
#endif
#ifdef PI
#define PI2 PI*2
#endif
#ifndef PI
#error Cannot compile
#endif

