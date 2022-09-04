#include <config.h>
#include <stdio.h>

#include "hello.h"

char* HelloMessage = "Hello World.\n";

void print_hello(void) {
    printf("%s", HelloMessage);
}
