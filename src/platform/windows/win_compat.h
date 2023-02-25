/* Copyright (C) 2023 manison <manison@users.noreply.github.com>
   SPDX-License-Identifier: Apache-2.0 */

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#pragma warning(push)
// Suppress "macro expansion producing 'defined' has undefined behavior" warning
// from older SDKs when compiling with standards compliant C preprocessor (/Zc:preprocessor).
#pragma warning(disable: 5105)
#include <Windows.h>
#pragma warning(pop)
#include <intrin.h>
#include "win_atomic.h"
#include "win_dlfcn.h"
#include "win_sync.h"

#ifdef _M_X64
// conversion from 'size_t' to 'CK_ULONG', possible loss of data
// conversion from 'size_t' to 'long', possible loss of data
// conversion from '__int64' to 'int', possible loss of data
#pragma warning(disable: 4267 4244)
#endif

typedef intptr_t ssize_t;

#define __builtin_offsetof          offsetof

#ifdef _MSC_VER
#define VLA_DEF(name, type, size)   type *name = _alloca(sizeof(type) * (size))
#endif

