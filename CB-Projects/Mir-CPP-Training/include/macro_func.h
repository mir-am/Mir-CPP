#ifndef MACRO_FUNC_H
#define MACRO_FUNC_H

/*
In this file, several macro functions are defined.
However, these functions are NOT type safe. one better
uses template functions.

*/


// Constansts like PI can be defines as a macro
#define PI 3.1416

// Macro functions
#define SQUARE(x) ((x) * (x))
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))


#endif // MACRO_FUNC_H
