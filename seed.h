#ifndef SEED_H
#define SEED_H

#include <stdio.h>
#include <sys/types.h>


struct key
{
	u_int32_t ks[32];
};

void seed_encrypt(struct key*, const u_int32_t [], u_int32_t []);
void seed_decrypt(struct key*, const u_int32_t [], u_int32_t []);

void key_schedule_set(struct key*, u_int32_t []);

#endif
