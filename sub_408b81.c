// 函数: sub_408b81
// 地址: 0x408b81
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4182f8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4182f8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_408b8d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t* edi = arg1
int32_t eax
eax.b = edi != 0
int32_t* result

if (eax != 0)
    int32_t eax_2
    eax_2.b = arg2 != 0
    
    if (eax_2 == 0)
        goto label_408ba5
    
    int32_t eax_3
    eax_3.b = *arg2 != 0
    
    if (eax_3 == 0)
        goto label_408ba5
    
    int32_t* eax_4 = sub_40f111()
    arg1 = eax_4
    
    if (eax_4 != 0)
        int32_t var_8_1 = 0
        
        if (*edi != 0)
            int32_t* result_1 = sub_40ee7a(edi, arg2, arg3, eax_4)
            int32_t var_8_2 = 0xfffffffe
            sub_408c33(&__saved_ebp)
            result = result_1
        else
            *__errno() = 0x16
            __local_unwind4(&__security_cookie, &ExceptionList, 0xfffffffe)
            result = nullptr
    else
        *__errno() = 0x18
        result = nullptr
else
label_408ba5:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_408c32
return result
