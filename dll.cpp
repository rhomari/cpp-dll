
#include "dllheader.hpp"

int returnmyint()
{
    int * myint = new int;
    *myint = 4;
    return *myint;
}
