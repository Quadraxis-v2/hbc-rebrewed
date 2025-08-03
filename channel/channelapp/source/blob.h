#ifndef _BLOB_H_
#define _BLOB_H_

#include <sys/types.h>

void *blob_alloc(size_t size);
void blob_free(const void *p);

#endif
