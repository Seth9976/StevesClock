// 函数: sub_40e560
// 地址: 0x40e560
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x4184c8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4184c8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_40e56c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_42e9e0)
        esi_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_42e9e0
            || (sx.d(*((&data_42ea00)[arg1 s>> 5] + esi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else
        sub_41284d(arg1)
        int32_t var_8_1 = 0
        int32_t result_1
        
        if ((*((&data_42ea00)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            result_1 = 0xffffffff
        else
            result_1 = sub_40e4c4(arg1)
        
        int32_t var_8_2 = 0xfffffffe
        sub_40e61c()
        result = result_1
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40e618
return result
