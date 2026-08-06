#include <stdio.h>
#include <stdlib.h>

int main() {
    system("mkdir demo_dir");        // create directory
    system("mkdir demo_dir/sub");    // create subdirectory
    system("tree demo_dir");         // show structure
    system("rmdir demo_dir/sub");    // remove subdirectory
    system("rmdir demo_dir");        // remove main directory
    return 0;
}