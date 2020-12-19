#ifndef SEED_H
#define SEED_H

#include <stdio.h>
#include <sys/types.h>


struct key
{
	u_int32_t ks[32];
};

//error_t seedInit(SeedContext *context, u_int8_t key, size_t key);

void seed_encrypt(struct key*, const u_int32_t [], u_int32_t []);//, u_int64_t kLv, u_int64_t kRv);
void seed_decrypt(struct key*, const u_int32_t [], u_int32_t []);

//u_int32_t G(u_int32_t);
//u_int64_t F(u_int64_t, u_int32_t, u_int32_t);
void key_schedule(struct key*, u_int32_t []);//, u_int64_t);

#endif
