#ifndef XOSHIRO256SS_C
#define XOSHIRO256SS_C

/**
 * from https://en.wikipedia.org/wiki/Xorshift xoshiro256**
 */

// Adapted from the code included on Sebastiano Vigna's website

#include <stdint.h>

#include "xoshiro256.h"

uint64_t rol64(uint64_t x, int k) {
	return (x << k) | (x >> (64 - k));
}

uint64_t xoshiro256ss(Xoshiro256ssState* state) {
	uint64_t* s = state->s;
	const uint64_t result = rol64(s[1] * 5, 7) * 9;
	const uint64_t t = s[1] << 17;

	s[2] ^= s[0];
	s[3] ^= s[1];
	s[1] ^= s[2];
	s[0] ^= s[3];

	s[2] ^= t;
	s[3] = rol64(s[3], 45);

	return result;
}

/*
 * again from https://en.wikipedia.org/wiki/Xorshift under the header Initialization 
 * small modifications applied 
 */

uint64_t splitmix64(uint64_t* state) {
	uint64_t result = (*state += 0x9E3779B97F4A7C15);
	result = (result ^ (result >> 30)) * 0xBF58476D1CE4E5B9;
	result = (result ^ (result >> 27)) * 0x94D049BB133111EB;
	return result ^ (result >> 31);
}

/*
 * custom
 */

// one could do the same for any of the other generators
void xorshift256_init(Xoshiro256ssState* state, uint64_t seed) {
    uint64_t smstate = seed;

	state->s[0] = splitmix64(&smstate);
	state->s[1] = splitmix64(&smstate);
	state->s[2] = splitmix64(&smstate);
	state->s[3] = splitmix64(&smstate);
}

#endif