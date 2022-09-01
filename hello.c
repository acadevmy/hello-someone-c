#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* someone = "world";
    if (argc >= 2) {
        someone = argv[1];
    };
    printf("Hello, %s!\n", someone);
    return 0;
}
