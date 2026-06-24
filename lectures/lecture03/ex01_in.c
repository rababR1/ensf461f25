#if defined(_WIN32) || defined(_WIN64)
#include <io.h>
#define read _read
#define write _write
#else
#include <unistd.h>
#endif
#include <string.h>

int main()
{
    char inputbuf[1024];
    int bytesread;

    bytesread = read(0, inputbuf, sizeof(inputbuf));
    if (bytesread < 1)
        return -1;

    write(1, inputbuf, strlen(inputbuf) - 1);
    return 0;
}