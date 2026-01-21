// 函数: sub_410cd6
// 地址: 0x410cd6
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

BOOL lpMultiByteStr = arg2
int32_t edi
int32_t var_20 = edi

if (lpMultiByteStr == 0 && arg3 u> 0)
    if (arg1 != 0)
        *arg1 = 0
    
    return 0

if (arg1 != 0)
    *arg1 = 0xffffffff

if (arg3 u> 0x7fffffff)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

void* var_14
sub_4070a4(&var_14, arg4)
void* eax_3 = var_14
void* var_c
char var_8
wchar16 wideCharStr

if (*(eax_3 + 0x14) != 0)
    arg2 = 0
    int32_t eax_10 =
        WideCharToMultiByte(*(eax_3 + 4), 0, &wideCharStr, 1, lpMultiByteStr, arg3, nullptr, &arg2)
    
    if (eax_10 == 0)
        if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
            if (lpMultiByteStr != 0 && arg3 u> 0)
                sub_408e00(lpMultiByteStr, 0, arg3)
            
            goto label_410d8d
        
    label_410d60:
        *__errno() = 0x2a
        int32_t result = *__errno()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result
    
    if (arg2 != 0)
        goto label_410d60
    
    if (arg1 != 0)
        *arg1 = eax_10
else
    eax_3.w = wideCharStr
    
    if (eax_3.w u> 0xff)
        if (lpMultiByteStr != 0 && arg3 u> 0)
            sub_408e00(lpMultiByteStr, 0, arg3)
        
        goto label_410d60
    
    if (lpMultiByteStr == 0)
        goto label_410dab
    
    if (arg3 u<= 0)
    label_410d8d:
        *__errno() = 0x22
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x22
    
    *lpMultiByteStr = eax_3.b
label_410dab:
    
    if (arg1 != 0)
        *arg1 = 1

if (var_8 == 0)
    return 0

*(var_c + 0x70) &= 0xfffffffd
return 0
