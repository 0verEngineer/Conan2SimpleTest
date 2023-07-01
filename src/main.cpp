
#include <iostream>
#include <zlib.h>

int main(int argc, char *argv[])
{
    printf("ZLIB VERSION: %s\n", zlibVersion());
    std::cout << "Hello World!" << std::endl;
}
