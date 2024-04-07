#ifndef _FACTOR_H_
#define _FACTOR_H_
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);

#endif /* _FACTOR_H_ */
