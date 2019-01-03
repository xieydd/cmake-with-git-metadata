#include <iostream>
#include "version.c"

int main(int argc, char* args[]) {
    std::cout << g_GIT_VERSION << std::endl;
    return 0;
}
