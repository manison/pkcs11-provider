/* Copyright (C) 2023 manison <manison@users.noreply.github.com>
   SPDX-License-Identifier: Apache-2.0 */

#pragma once

static __forceinline void * __win32_dlopen(const char *module)
{
    return LoadLibraryA(module);
}

static __forceinline void * __win32_dlsym(void *module, const char *symbol)
{
    return (void *)GetProcAddress((HMODULE)module, symbol);
}

#define dlopen(module, flags)   __win32_dlopen(module)
#define dlclose                 FreeLibrary
#define dlsym(module, symbol)   __win32_dlsym(module, symbol)
#define dlerror()               NULL
