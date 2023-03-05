/* Copyright (C) 2022 Simo Sorce <simo@redhat.com>
   SPDX-License-Identifier: Apache-2.0 */

#ifndef _PROVIDER_H
#define _PROVIDER_H

/* on macOS, snprintf and vsnprintf are in -D_XOPEN_SOURCE=600. This may be
 * a bug in macOS' headers, or a deliberate choice because snprintf changed
 * behavior with X/Open 6. */
#define _XOPEN_SOURCE 600
#ifdef WIN32
#include "platform/windows/win_compat.h"
#else
#include "config.h"
#endif

#include <stdbool.h>
#include <sys/types.h>

#include "pkcs11.h"
#include <openssl/core_dispatch.h>
#include <openssl/core_object.h>
#include <openssl/types.h>
#include <openssl/crypto.h>
#include <openssl/macros.h>
#include <openssl/params.h>
#include <openssl/err.h>
#include <openssl/proverr.h>
#include <openssl/core_names.h>
#include <openssl/provider.h>

#ifndef VLA_DEF
#define VLA_DEF(name, type, size) type name[size]
#endif

#define UNUSED __attribute__((unused))
#define RET_OSSL_OK 1
#define RET_OSSL_ERR 0
#define RET_OSSL_BAD -1

#define P11PROV_PKCS11_MODULE_PATH "pkcs11-module-path"
#define P11PROV_PKCS11_MODULE_INIT_ARGS "pkcs11-module-init-args"
#define P11PROV_PKCS11_MODULE_TOKEN_PIN "pkcs11-module-token-pin"
#define P11PROV_PKCS11_MODULE_ALLOW_EXPORT "pkcs11-module-allow-export"
#define P11PROV_PKCS11_MODULE_LOGIN_BEHAVIOR "pkcs11-module-login-behavior"

#define P11PROV_DEFAULT_PROPERTIES "provider=pkcs11"
#define P11PROV_NAME_RSA "RSA"
#define P11PROV_NAMES_RSA "RSA:rsaEncryption:1.2.840.113549.1.1.1"
#define P11PROV_DESCS_RSA "PKCS11 RSA Implementation"
#define P11PROV_NAME_RSAPSS "RSA-PSS"
#define P11PROV_NAMES_RSAPSS "RSA-PSS:RSASSA-PSS:1.2.840.113549.1.1.10"
#define P11PROV_DESCS_RSAPSS "PKCS11 RSA PSS Implementation"
#define P11PROV_NAME_EC "EC"
#define P11PROV_NAMES_EC "EC:id-ecPublicKey:1.2.840.10045.2.1"
#define P11PROV_DESCS_EC "PKCS11 EC Implementation"
#define P11PROV_NAME_ECDSA "ECDSA"
#define P11PROV_NAMES_ECDSA P11PROV_NAME_ECDSA
#define P11PROV_DESCS_ECDSA "PKCS11 ECDSA Implementation"
#define P11PROV_NAME_ECDH "ECDH"
#define P11PROV_NAMES_ECDH P11PROV_NAME_ECDH
#define P11PROV_DESCS_ECDH "PKCS11 ECDH Implementation"
#define P11PROV_NAME_HKDF "HKDF"
#define P11PROV_NAMES_HKDF P11PROV_NAME_HKDF
#define P11PROV_DESCS_HKDF "PKCS11 HKDF Implementation"
#define P11PROV_DESCS_URI "PKCS11 URI Store"
#define P11PROV_NAMES_ED25519 "ED25519:1.3.101.112"
#define P11PROV_NAME_ED25519 "ED25519"
#define P11PROV_DESCS_ED25519 "PKCS11 ED25519 Implementation"
#define P11PROV_NAMES_ED448 "ED448:1.3.101.113"
#define P11PROV_NAME_ED448 "ED448"
#define P11PROV_DESCS_ED448 "PKCS11 ED448 Implementation"

#define P11PROV_PARAM_KEY_LABEL "pkcs11_key_label"
#define P11PROV_PARAM_KEY_ID "pkcs11_key_id"
#define P11PROV_PARAM_SLOT_ID "pkcs11_slot_id"

typedef struct p11prov_ctx P11PROV_CTX;
typedef struct p11prov_module_ctx P11PROV_MODULE;
typedef struct p11prov_interface P11PROV_INTERFACE;
typedef struct p11prov_uri P11PROV_URI;
typedef struct p11prov_obj P11PROV_OBJ;
typedef struct p11prov_slot P11PROV_SLOT;
typedef struct p11prov_slots_ctx P11PROV_SLOTS_CTX;
typedef struct p11prov_session P11PROV_SESSION;
typedef struct p11prov_session_pool P11PROV_SESSION_POOL;

#ifndef WIN32
#include <pthread.h>
typedef pthread_rwlock_t p11prov_rwlock_t;
#define p11prov_rwlock_init(l)      pthread_rwlock_init(l, NULL)
#define p11prov_rwlock_destroy(l)   pthread_rwlock_destroy(l)
#define p11prov_rwlock_rdlock(l)    pthread_rwlock_rdlock(l)
#define p11prov_rwlock_rdunlock(l)  pthread_rwlock_unlock(l)
#define p11prov_rwlock_wrlock(l)    pthread_rwlock_wrlock(l)
#define p11prov_rwlock_wrunlock(l)  pthread_rwlock_unlock(l)
#endif

/* Provider ctx */
P11PROV_INTERFACE *p11prov_ctx_get_interface(P11PROV_CTX *ctx);
CK_UTF8CHAR_PTR p11prov_ctx_pin(P11PROV_CTX *ctx);
OSSL_LIB_CTX *p11prov_ctx_get_libctx(P11PROV_CTX *ctx);
CK_RV p11prov_ctx_status(P11PROV_CTX *ctx);
P11PROV_SLOTS_CTX *p11prov_ctx_get_slots(P11PROV_CTX *ctx);
void p11prov_ctx_set_slots(P11PROV_CTX *ctx, P11PROV_SLOTS_CTX *slots);
CK_RV p11prov_ctx_get_quirk(P11PROV_CTX *ctx, CK_SLOT_ID id, const char *name,
                            void **data, CK_ULONG *size);
CK_RV p11prov_ctx_set_quirk(P11PROV_CTX *ctx, CK_SLOT_ID id, const char *name,
                            void *data, CK_ULONG size);

#define ALLOW_EXPORT_PUBLIC 0
#define DISALLOW_EXPORT_PUBLIC 1
int p11prov_ctx_allow_export(P11PROV_CTX *ctx);

#define PUBKEY_LOGIN_AUTO 0
#define PUBKEY_LOGIN_ALWAYS 1
#define PUBKEY_LOGIN_NEVER 2
int p11prov_ctx_login_behavior(P11PROV_CTX *ctx);

#include "debug.h"

/* Errors */
void p11prov_raise(P11PROV_CTX *ctx, const char *file, int line,
                   const char *func, int errnum, const char *fmt, ...);

#define P11PROV_raise(ctx, errnum, format, ...) \
    do { \
        p11prov_raise((ctx), OPENSSL_FILE, OPENSSL_LINE, OPENSSL_FUNC, \
                      (errnum), format, ##__VA_ARGS__); \
        P11PROV_debug("Error: 0x%08lX; " format, (unsigned long)(errnum), \
                      ##__VA_ARGS__); \
    } while (0)

/* dispatching */
#define DECL_DISPATCH_FUNC(type, prefix, name) \
    static OSSL_FUNC_##type##_##name##_fn prefix##_##name

#include "interface.h"
#include "objects.h"
#include "keymgmt.h"
#include "store.h"
#include "signature.h"
#include "asymmetric_cipher.h"
#include "exchange.h"
#include "kdf.h"
#include "encoder.h"
#include "digests.h"
#include "util.h"
#include "session.h"

/* TLS */
int tls_group_capabilities(OSSL_CALLBACK *cb, void *arg);

#endif /* _PROVIDER_H */
