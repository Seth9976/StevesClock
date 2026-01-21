// 函数: sub_4098a2
// 地址: 0x4098a2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 8
int32_t var_8 = 0x418358
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418358 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_4098ae
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_42dd94 == 0)
    sub_40e3f5(6)
    int32_t var_8_1 = 0
    
    if (data_42dd94 == 0)
        sub_4091c1()
        data_42dd94 += 1
    
    int32_t var_8_2 = 0xfffffffe
    result = sub_4098e8()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_4098e7
return result
