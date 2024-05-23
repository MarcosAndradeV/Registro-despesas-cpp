#define NOBUILD_IMPLEMENTATION
#include "./nobuild.h"

#define CFLAGS "-Wall", "-Wextra"


int main(int argc, char **argv)
{
    GO_REBUILD_URSELF(argc, argv);

    if (!path_exists("build")){
        MKDIRS("build");
    }
    CMD("g++", CFLAGS, "-o", "build/Registro", "src/main.cpp", "src/menu.cpp");

    return 0;
}
