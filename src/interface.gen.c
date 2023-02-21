/* DO NOT EDIT, autogenerated from src/interface.pre */
/* Modify src/interface.pre then run make generate-code */

CK_RV p11prov_Initialize(P11PROV_CTX *ctx, CK_VOID_PTR pInitArgs)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Initialize");
    ret = intf->Initialize(pInitArgs);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Initialize");
    }
    return ret;
}

CK_RV p11prov_Finalize(P11PROV_CTX *ctx, CK_VOID_PTR pReserved)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Finalize");
    ret = intf->Finalize(pReserved);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Finalize");
    }
    return ret;
}

CK_RV p11prov_GetInfo(P11PROV_CTX *ctx, CK_INFO_PTR pInfo)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetInfo");
    ret = intf->GetInfo(pInfo);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetInfo");
    }
    return ret;
}

CK_RV p11prov_GetInterface(P11PROV_CTX *ctx, CK_UTF8CHAR_PTR pInterfaceName,
                           CK_VERSION_PTR pVersion,
                           CK_INTERFACE_PTR_PTR ppInterface, CK_FLAGS flags)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetInterface");
    ret = intf->GetInterface(pInterfaceName, pVersion, ppInterface, flags);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetInterface");
    }
    return ret;
}

CK_RV p11prov_GetFunctionList(P11PROV_CTX *ctx,
                              CK_FUNCTION_LIST_PTR_PTR ppFunctionList)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetFunctionList");
    ret = intf->GetFunctionList(ppFunctionList);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetFunctionList");
    }
    return ret;
}

CK_RV p11prov_GetSlotList(P11PROV_CTX *ctx, CK_BBOOL tokenPresent,
                          CK_SLOT_ID_PTR pSlotList, CK_ULONG_PTR pulCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetSlotList");
    ret = intf->GetSlotList(tokenPresent, pSlotList, pulCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetSlotList");
    }
    return ret;
}

CK_RV p11prov_GetSlotInfo(P11PROV_CTX *ctx, CK_SLOT_ID slotID,
                          CK_SLOT_INFO_PTR pInfo)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetSlotInfo");
    ret = intf->GetSlotInfo(slotID, pInfo);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetSlotInfo");
    }
    return ret;
}

CK_RV p11prov_GetTokenInfo(P11PROV_CTX *ctx, CK_SLOT_ID slotID,
                           CK_TOKEN_INFO_PTR pInfo)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetTokenInfo");
    ret = intf->GetTokenInfo(slotID, pInfo);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetTokenInfo");
    }
    return ret;
}

CK_RV p11prov_GetMechanismList(P11PROV_CTX *ctx, CK_SLOT_ID slotID,
                               CK_MECHANISM_TYPE_PTR pMechanismList,
                               CK_ULONG_PTR pulCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetMechanismList");
    ret = intf->GetMechanismList(slotID, pMechanismList, pulCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetMechanismList");
    }
    return ret;
}

CK_RV p11prov_GetMechanismInfo(P11PROV_CTX *ctx, CK_SLOT_ID slotID,
                               CK_MECHANISM_TYPE type,
                               CK_MECHANISM_INFO_PTR pInfo)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetMechanismInfo");
    ret = intf->GetMechanismInfo(slotID, type, pInfo);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetMechanismInfo");
    }
    return ret;
}

CK_RV p11prov_OpenSession(P11PROV_CTX *ctx, CK_SLOT_ID slotID, CK_FLAGS flags,
                          CK_VOID_PTR pApplication, CK_NOTIFY Notify,
                          CK_SESSION_HANDLE_PTR phSession)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "OpenSession");
    ret = intf->OpenSession(slotID, flags, pApplication, Notify, phSession);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "OpenSession");
    }
    return ret;
}

CK_RV p11prov_CloseSession(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "CloseSession");
    ret = intf->CloseSession(hSession);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "CloseSession");
    }
    return ret;
}

CK_RV p11prov_GetSessionInfo(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                             CK_SESSION_INFO_PTR pInfo)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetSessionInfo");
    ret = intf->GetSessionInfo(hSession, pInfo);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetSessionInfo");
    }
    return ret;
}

CK_RV p11prov_GetOperationState(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                                CK_BYTE_PTR pOperationState,
                                CK_ULONG_PTR pulOperationStateLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetOperationState");
    ret = intf->GetOperationState(hSession, pOperationState,
                                  pulOperationStateLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetOperationState");
    }
    return ret;
}

CK_RV p11prov_SetOperationState(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                                CK_BYTE_PTR pOperationState,
                                CK_ULONG ulOperationStateLen,
                                CK_OBJECT_HANDLE hEncryptionKey,
                                CK_OBJECT_HANDLE hAuthenticationKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "SetOperationState");
    ret =
        intf->SetOperationState(hSession, pOperationState, ulOperationStateLen,
                                hEncryptionKey, hAuthenticationKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "SetOperationState");
    }
    return ret;
}

CK_RV p11prov_Login(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                    CK_USER_TYPE userType, CK_UTF8CHAR_PTR pPin,
                    CK_ULONG ulPinLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Login");
    ret = intf->Login(hSession, userType, pPin, ulPinLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Login");
    }
    return ret;
}

CK_RV p11prov_CreateObject(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                           CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulCount,
                           CK_OBJECT_HANDLE_PTR phObject)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "CreateObject");
    ret = intf->CreateObject(hSession, pTemplate, ulCount, phObject);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "CreateObject");
    }
    return ret;
}

CK_RV p11prov_CopyObject(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                         CK_OBJECT_HANDLE hObject, CK_ATTRIBUTE_PTR pTemplate,
                         CK_ULONG ulCount, CK_OBJECT_HANDLE_PTR phNewObject)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "CopyObject");
    ret = intf->CopyObject(hSession, hObject, pTemplate, ulCount, phNewObject);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "CopyObject");
    }
    return ret;
}

CK_RV p11prov_DestroyObject(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                            CK_OBJECT_HANDLE hObject)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DestroyObject");
    ret = intf->DestroyObject(hSession, hObject);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DestroyObject");
    }
    return ret;
}

CK_RV p11prov_GetAttributeValue(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                                CK_OBJECT_HANDLE hObject,
                                CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GetAttributeValue");
    ret = intf->GetAttributeValue(hSession, hObject, pTemplate, ulCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GetAttributeValue");
    }
    return ret;
}

CK_RV p11prov_SetAttributeValue(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                                CK_OBJECT_HANDLE hObject,
                                CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "SetAttributeValue");
    ret = intf->SetAttributeValue(hSession, hObject, pTemplate, ulCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "SetAttributeValue");
    }
    return ret;
}

CK_RV p11prov_FindObjectsInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                              CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "FindObjectsInit");
    ret = intf->FindObjectsInit(hSession, pTemplate, ulCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "FindObjectsInit");
    }
    return ret;
}

CK_RV p11prov_FindObjects(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                          CK_OBJECT_HANDLE_PTR phObject,
                          CK_ULONG ulMaxObjectCount,
                          CK_ULONG_PTR pulObjectCount)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "FindObjects");
    ret =
        intf->FindObjects(hSession, phObject, ulMaxObjectCount, pulObjectCount);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "FindObjects");
    }
    return ret;
}

CK_RV p11prov_FindObjectsFinal(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "FindObjectsFinal");
    ret = intf->FindObjectsFinal(hSession);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "FindObjectsFinal");
    }
    return ret;
}

CK_RV p11prov_EncryptInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                          CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "EncryptInit");
    ret = intf->EncryptInit(hSession, pMechanism, hKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "EncryptInit");
    }
    return ret;
}

CK_RV p11prov_Encrypt(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                      CK_BYTE_PTR pData, CK_ULONG ulDataLen,
                      CK_BYTE_PTR pEncryptedData,
                      CK_ULONG_PTR pulEncryptedDataLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Encrypt");
    ret = intf->Encrypt(hSession, pData, ulDataLen, pEncryptedData,
                        pulEncryptedDataLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Encrypt");
    }
    return ret;
}

CK_RV p11prov_DecryptInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                          CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DecryptInit");
    ret = intf->DecryptInit(hSession, pMechanism, hKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DecryptInit");
    }
    return ret;
}

CK_RV p11prov_Decrypt(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                      CK_BYTE_PTR pEncryptedData, CK_ULONG ulEncryptedDataLen,
                      CK_BYTE_PTR pData, CK_ULONG_PTR pulDataLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Decrypt");
    ret = intf->Decrypt(hSession, pEncryptedData, ulEncryptedDataLen, pData,
                        pulDataLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Decrypt");
    }
    return ret;
}

CK_RV p11prov_DigestInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                         CK_MECHANISM_PTR pMechanism)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DigestInit");
    ret = intf->DigestInit(hSession, pMechanism);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DigestInit");
    }
    return ret;
}

CK_RV p11prov_DigestUpdate(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                           CK_BYTE_PTR pPart, CK_ULONG ulPartLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DigestUpdate");
    ret = intf->DigestUpdate(hSession, pPart, ulPartLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DigestUpdate");
    }
    return ret;
}

CK_RV p11prov_DigestFinal(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                          CK_BYTE_PTR pDigest, CK_ULONG_PTR pulDigestLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DigestFinal");
    ret = intf->DigestFinal(hSession, pDigest, pulDigestLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DigestFinal");
    }
    return ret;
}

CK_RV p11prov_SignInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                       CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "SignInit");
    ret = intf->SignInit(hSession, pMechanism, hKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "SignInit");
    }
    return ret;
}

CK_RV p11prov_Sign(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                   CK_BYTE_PTR pData, CK_ULONG ulDataLen,
                   CK_BYTE_PTR pSignature, CK_ULONG_PTR pulSignatureLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Sign");
    ret = intf->Sign(hSession, pData, ulDataLen, pSignature, pulSignatureLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Sign");
    }
    return ret;
}

CK_RV p11prov_SignUpdate(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                         CK_BYTE_PTR pPart, CK_ULONG ulPartLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "SignUpdate");
    ret = intf->SignUpdate(hSession, pPart, ulPartLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "SignUpdate");
    }
    return ret;
}

CK_RV p11prov_SignFinal(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                        CK_BYTE_PTR pSignature, CK_ULONG_PTR pulSignatureLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "SignFinal");
    ret = intf->SignFinal(hSession, pSignature, pulSignatureLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "SignFinal");
    }
    return ret;
}

CK_RV p11prov_VerifyInit(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                         CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "VerifyInit");
    ret = intf->VerifyInit(hSession, pMechanism, hKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "VerifyInit");
    }
    return ret;
}

CK_RV p11prov_Verify(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                     CK_BYTE_PTR pData, CK_ULONG ulDataLen,
                     CK_BYTE_PTR pSignature, CK_ULONG ulSignatureLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "Verify");
    ret = intf->Verify(hSession, pData, ulDataLen, pSignature, ulSignatureLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "Verify");
    }
    return ret;
}

CK_RV p11prov_VerifyUpdate(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                           CK_BYTE_PTR pPart, CK_ULONG ulPartLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "VerifyUpdate");
    ret = intf->VerifyUpdate(hSession, pPart, ulPartLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "VerifyUpdate");
    }
    return ret;
}

CK_RV p11prov_VerifyFinal(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                          CK_BYTE_PTR pSignature, CK_ULONG ulSignatureLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "VerifyFinal");
    ret = intf->VerifyFinal(hSession, pSignature, ulSignatureLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "VerifyFinal");
    }
    return ret;
}

CK_RV p11prov_GenerateKeyPair(
    P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession, CK_MECHANISM_PTR pMechanism,
    CK_ATTRIBUTE_PTR pPublicKeyTemplate, CK_ULONG ulPublicKeyAttributeCount,
    CK_ATTRIBUTE_PTR pPrivateKeyTemplate, CK_ULONG ulPrivateKeyAttributeCount,
    CK_OBJECT_HANDLE_PTR phPublicKey, CK_OBJECT_HANDLE_PTR phPrivateKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GenerateKeyPair");
    ret = intf->GenerateKeyPair(hSession, pMechanism, pPublicKeyTemplate,
                                ulPublicKeyAttributeCount, pPrivateKeyTemplate,
                                ulPrivateKeyAttributeCount, phPublicKey,
                                phPrivateKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GenerateKeyPair");
    }
    return ret;
}

CK_RV p11prov_DeriveKey(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                        CK_MECHANISM_PTR pMechanism, CK_OBJECT_HANDLE hBaseKey,
                        CK_ATTRIBUTE_PTR pTemplate, CK_ULONG ulAttributeCount,
                        CK_OBJECT_HANDLE_PTR phKey)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "DeriveKey");
    ret = intf->DeriveKey(hSession, pMechanism, hBaseKey, pTemplate,
                          ulAttributeCount, phKey);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "DeriveKey");
    }
    return ret;
}

CK_RV p11prov_GenerateRandom(P11PROV_CTX *ctx, CK_SESSION_HANDLE hSession,
                             CK_BYTE_PTR RandomData, CK_ULONG ulRandomLen)
{
    P11PROV_INTERFACE *intf = p11prov_ctx_get_interface(ctx);
    CK_RV ret = CKR_GENERAL_ERROR;
    if (!intf) {
        P11PROV_raise(ctx, ret, "Can't get module interfaces");
        return ret;
    }
    P11PROV_debug("Calling C_"
                  "GenerateRandom");
    ret = intf->GenerateRandom(hSession, RandomData, ulRandomLen);
    if (ret != CKR_OK) {
        P11PROV_raise(ctx, ret,
                      "Error returned by C_"
                      "GenerateRandom");
    }
    return ret;
}
