#define NOBUILD_IMPLEMENTATION
#include "./nobuild.h"

#define CFLAGS "-Wall", "-Wextra"


int main(int argc, char **argv)
{
    GO_REBUILD_URSELF(argc, argv);

    if (!path_exists("build")){
        MKDIRS("build");
    }
    CMD("g++", CFLAGS, "-o", "build/registro", "src/main.cpp");

    return 0;
}
