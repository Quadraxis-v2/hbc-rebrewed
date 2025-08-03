#ifndef _ECDSA_H_
#define _ECDSA_H_

#include <ogcsys.h>

int check_ecdsa(const u8 *Q, const u8 *R, const u8 *S, const u8 *hash);

#endif
