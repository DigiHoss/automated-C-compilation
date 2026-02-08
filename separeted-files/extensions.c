#include <stdio.h>

#include "extensions.h"

extern void hello_from_exts(char name[50]) {
	printf("Hello %s from extensions\n", name);
}
