#pragma once

#define __atomic_exchange(ptr, val, ret, memorder) \
    __win32_atomic_exchange(ptr, val, ret)

#define __atomic_compare_exchange_n(ptr, expected, desired, weak, success_memorder, failure_memorder) \
    __win32_atomic_compare_exchange_n(ptr, expected, desired)

#define __atomic_add_fetch(ptr, val, memorder) __win32_atomic_add_fetch(ptr, val)
#define __atomic_sub_fetch(ptr, val, memorder) __win32_atomic_sub_fetch(ptr, val)
#define __atomic_fetch_add(ptr, val, memorder) __win32_atomic_fetch_add(ptr, val)
#define __atomic_fetch_sub(ptr, val, memorder) __win32_atomic_fetch_sub(ptr, val)

#define __atomic_load_n(ptr, memorder) *(ptr)
#define __atomic_store_n(ptr, val, memorder) *(ptr) = (val)

static __forceinline int __win32_atomic_compare_exchange_n(int *ptr, int *expected, int desired)
{
    int prev = _InterlockedCompareExchange(ptr, desired, *expected);
    if (prev == *expected) {
        return 1;
    }
    *expected = prev;
    return 0;
}

static __forceinline void __win32_atomic_exchange(int *ptr, int *val, int *ret)
{
    *ret = _InterlockedExchange(ptr, *val);
}

static __forceinline int __win32_atomic_add_fetch(int *ptr, int val)
{
    return _interlockedadd(ptr, val);
}

static __forceinline int __win32_atomic_sub_fetch(int *ptr, int val)
{
    return _interlockedadd(ptr, -val);
}

static __forceinline int __win32_atomic_fetch_add(int *ptr, int val)
{
    return _interlockedadd(ptr, val) - val;
}

static __forceinline int __win32_atomic_fetch_sub(int *ptr, int val)
{
    return _interlockedadd(ptr, -val) + val;
}
