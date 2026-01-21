// 函数: sub_40eae0
// 地址: 0x40eae0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = 0xfffffffe
int32_t var_c = 0x418548
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_28 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_2c
int32_t var_8_1 = 0

if (sub_40ea50(&__dos_header) != 0)
    void* eax_5 = sub_40ea90(&__dos_header, arg1 - &__dos_header)
    
    if (eax_5 != 0)
        int32_t var_8_2 = 0xfffffffe
        fsbase->NtTib.ExceptionList = ExceptionList
        return not.d(*(eax_5 + 0x24) u>> 0x1f) & 1

int32_t var_8_3 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
return 0
