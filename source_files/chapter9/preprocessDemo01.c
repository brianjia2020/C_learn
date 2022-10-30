#if _WIN32
#include <windows.h>
#elif _linux_ || __MACH__
#include <unistd.h>
#endif

#include <stdio.h>

void main(){
    #if _WIN32
    Sleep(5000);
    #elif _linux_ || __MACH__
    sleep(5);
    #endif
    puts("Hello Brian");
}

/*
for windows operating system, the code looks like:

#include <windows.h>
#include <stdio.h>

void main(){
    Sleep(5000);
    puts("Hello Brian");
}
*/
