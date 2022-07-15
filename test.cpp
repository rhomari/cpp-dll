#include "windows.h"
#include "iostream"
using namespace std;

int main()
{
    HINSTANCE hinstance = LoadLibrary("lib.dll");
    if (hinstance == NULL)
    {
        cout << "LoadLibrary failed" << endl;
        return 1;
    }
    FARPROC myfunction = GetProcAddress(hinstance, "returnmyint");
    if (myfunction == NULL)
    {
        cout << "GetProcAddress failed" << endl;
        return 1;
    }
    cout << "The value of myint is: " << myfunction() << endl;
    
    FreeLibrary(hinstance);

    return 0;
}