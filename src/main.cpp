
#include <iostream>
#include <zlib.h>
#include <libssh2_sftp.h>

int main(int argc, char *argv[])
{
    printf("Libssh2 version: %s\n", libssh2_version(0));
    printf("ZLIB VERSION: %s\n", zlibVersion());
    std::cout << "Hello World!" << std::endl;
}
