// 函数: sub_406984
// 地址: 0x406984
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x418210
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418210 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_406990
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_1 = 0
int32_t eax
eax.b = arg1 != 0
uint32_t result

if (eax != 0)
    sub_408493(arg1)
    int32_t var_8_1 = 0
    
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_2 = __fileno(arg1)
        void* ecx_6
        
        if (eax_2 == 0xffffffff || eax_2 == 0xfffffffe)
            ecx_6 = &data_41a520
        else
            ecx_6 = ((eax_2 & 0x1f) << 6) + (&data_42ea00)[eax_2 s>> 5]
        
        void* eax_5
        
        if ((*(ecx_6 + 0x24) & 0x7f) == 0)
            if (eax_2 == 0xffffffff || eax_2 == 0xfffffffe)
                eax_5 = &data_41a520
            else
                eax_5 = ((eax_2 & 0x1f) << 6) + (&data_42ea00)[eax_2 s>> 5]
        
        if ((*(ecx_6 + 0x24) & 0x7f) != 0 || (*(eax_5 + 0x24) & 0x80) != 0)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result_1 = 0xffffffff
    
    if (result_1 == 0)
        int32_t temp0_1 = arg1[1]
        arg1[1] -= 1
        uint32_t result_2
        
        if (temp0_1 - 1 s< 0)
            result_2 = sub_40a04f(arg1)
        else
            char* ecx_9 = *arg1
            result_2 = zx.d(*ecx_9)
            *arg1 = &ecx_9[1]
        
        result_1 = result_2
    
    int32_t var_8_2 = 0xfffffffe
    sub_406a70(arg1)
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_406a6c
return result
