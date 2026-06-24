#include <stdio.h>
#include <process.h>

int main()
{
    int mypid = _getpid();

    printf("I am a process! My pid is %d\n", mypid);

    return 0;
}