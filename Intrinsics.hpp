#pragma once

#if defined(_MSC_VER)
#if !defined(AliceAndroid) && !defined(AliceIos)
#include <intrin.h>

#define i128 .m128i_i32
#define f128 .m128_f32
#define d128 .m128d_f64
#define f256 .m256_f32
#define d256 .m256d_f64
#define f512 .m512_f32
#define d512 .m512d_f64
#else
#error MSC compiler is not supported for ARM64
#endif
#else
#if defined(AliceAndroid) || defined(AliceIos)
#if defined(__ARM_NEON__)
#include <arm_neon.h>
#endif
#else
#include <x86intrin.h>
#define i128
#define f128
#define d128
#define f256
#define d256
#define f512
#define d512
#endif
#endif
