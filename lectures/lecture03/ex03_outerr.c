#include <stdio.h>
#include <string.h>

int main()
{
    // Preparing the messages
    const char *out = "Hello, ENSF461!\n";
    const size_t out_l = strlen(out);
    const char *err = "Error, ENSF461!\n";
    const size_t err_l = strlen(err);

    // Write to the standard output
    fwrite(out, 1, out_l, stdout);

    // Write to the standard error
    fwrite(err, 1, err_l, stderr);

    return 0;
}
