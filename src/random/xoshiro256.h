#ifndef XOSHIRO256SS_H
#define XOSHIRO256SS_H

/**
 * from https://en.wikipedia.org/wiki/Xorshift xoshiro256**
 */

// Adapted from the code included on Sebastiano Vigna's website

#include <stdint.h>

uint64_t rol64(uint64_t x, int k);

typedef struct {
	uint64_t s[4];
} Xoshiro256ssState;

uint64_t xoshiro256ss(Xoshiro256ssState* state);

/*
 * again from https://en.wikipedia.org/wiki/Xorshift under the header Initialization 
 * small modifications applied 
 */

uint64_t splitmix64(uint64_t* state);

/*
 * custom
 */

// one could do the same for any of the other generators
void xorshift256_init(Xoshiro256ssState* state, uint64_t seed);

#endif