// test.h
#ifndef __TEST_H__
#define __TEST_H__

void test();
#endif

// test.c
#include <string.h>

#include <stdio.h>

void test()

{

printf("just test it\n");

}

// main.c

#include "test.h"

int main(int argc, char **argv)

{

test();

return 0;

}