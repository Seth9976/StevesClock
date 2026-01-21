// 函数: sub_40cbb1
// 地址: 0x40cbb1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_38 = edi
int32_t __saved_ebx = 0x16
void var_20
void* var_40 = &var_20
int32_t var_30
__fltout2(*arg1, arg1[1], &var_30)
int32_t result

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16
else if (arg3 != 0)
    int32_t eax_5 = 0xffffffff
    
    if (arg3 != 0xffffffff)
        int32_t ecx_1
        ecx_1.b = var_30 == 0x2d
        eax_5 = arg3 - ecx_1
    
    void* eax_7
    eax_7.b = var_30 == 0x2d
    int32_t var_2c
    int32_t edx_1
    result, edx_1 = sub_411511(eax_7 + arg2, eax_5, var_2c + arg4, &var_30)
    
    if (result == 0)
        result = sub_40caae(&var_30, edx_1, arg2, arg3, arg4, 0, arg5)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

sub_407fad(eax_1 ^ &__saved_ebp)
return result
