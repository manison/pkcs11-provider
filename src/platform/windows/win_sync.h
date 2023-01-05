#pragma once

typedef SRWLOCK p11prov_rwlock_t;

static __forceinline int p11prov_rwlock_init(p11prov_rwlock_t *lock)
{
    InitializeSRWLock(lock);
    return 0;
}

static __forceinline int p11prov_rwlock_destroy(p11prov_rwlock_t *lock)
{
    return 0;
}

#define p11prov_rwlock_rdlock(lock)      0, AcquireSRWLockShared(lock)
#define p11prov_rwlock_rdunlock(lock)    0, ReleaseSRWLockShared(lock)
#define p11prov_rwlock_wrlock(lock)      0, AcquireSRWLockExclusive(lock)
#define p11prov_rwlock_wrunlock(lock)    0, ReleaseSRWLockExclusive(lock)


typedef CRITICAL_SECTION pthread_mutex_t;

#define pthread_mutex_init(lock, flags)  (InitializeCriticalSectionEx(lock, 3000, 0) ? 0 : ENOMEM)
#define pthread_mutex_destroy(lock)      0, DeleteCriticalSection(lock)
#define pthread_mutex_lock(lock)         0, EnterCriticalSection(lock)
#define pthread_mutex_unlock(lock)       0, LeaveCriticalSection(lock)
#define pthread_mutex_trylock(lock)      (TryEnterCriticalSection(lock) ? 0 : EBUSY)
