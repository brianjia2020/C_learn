#if _WIN32
#include <windows.h>
#elif _linux_
#include <unistd.h>
#endif

#include <stdio.h>

void main(){
    #if _WIN32
    Sleep(5000);
    #elif _linux_
    sleep(5);
    #endif
    puts("Hello Brian");
}
