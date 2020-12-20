#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include "seed.h"

int main()
{
	//param set1
//	u_int64_t key1 = 0x0000000000000000;
//	u_int64_t key2 = 0x0000000000000000;
//	u_int64_t Lv = 0x0001020304050607;
//	u_int64_t Rv = 0x08090a0b0c0d0e0f;

	//param set2
//	u_int64_t Lv = 0x0000000000000000;
//	u_int64_t Rv = 0x0000000000000000;
//	u_int64_t key1 = 0x0001020304050607;
//	u_int64_t key2 = 0x08090a0b0c0d0e0f;

	//param set3
//	u_int64_t Lv = 0xB41E6BE2EBA84A14;
//	u_int64_t Rv = 0x8E2EED84593C5EC7;
//	u_int64_t key1 = 0x28DBC3BC49FFD87D;
//	u_int64_t key2 = 0xCFA509B11D422BE7;


	struct key* kek = malloc(sizeof(*kek));

	const u_int32_t pepe [4] = {0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f};
	u_int32_t key [4] = {0x00000000, 0x00000000, 0x00000000, 0x00000000};
	u_int32_t answ [4];
	u_int32_t decrypt [4];

	key_schedule(kek, key);
	seed_encrypt (kek, pepe, answ);
	
	for (int i = 0; i < 4; i++)
	{
		printf("%x ", answ[i]);
		decrypt[i] = answ[i];
	}
	printf("\n");

	seed_decrypt(kek, decrypt, answ);
	for (int i = 0; i < 4; i++)
	{
		printf("%x ", answ[i]);
	}

	free(kek);

	return 0;
}
