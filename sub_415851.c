// 函数: sub_415851
// 地址: 0x415851
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x418630
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418630 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_41585d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_42e9d8 != 0)
    if ((arg1 & 0x40) == 0 || data_41b2c8 == 0)
        arg1.d &= 0xffffffbf
    else
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4158c2
return 0
