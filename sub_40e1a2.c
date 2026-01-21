// 函数: sub_40e1a2
// 地址: 0x40e1a2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x418468
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418468 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_3 = &data_40e1ae
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_42e9e0)
        esi_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_42e9e0
            || (sx.d(*(esi_3 + (&data_42ea00)[arg1 s>> 5] + 4)) & 1) == 0)
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = ~NO_ERROR
    else
        sub_41284d(arg1)
        int32_t var_8_1 = 0
        enum WIN32_ERROR result_1
        
        if ((*(esi_3 + (&data_42ea00)[arg1 s>> 5] + 4) & 1) == 0)
            *__errno() = 9
            result_1 = ~NO_ERROR
        else
            if (FlushFileBuffers(sub_4127e4(arg1)) != 0)
                result_1 = NO_ERROR
            else
                result_1 = GetLastError()
            
            if (result_1 != NO_ERROR)
                *___doserrno() = result_1
                *__errno() = 9
                result_1 = ~NO_ERROR
        
        int32_t var_8_2 = 0xfffffffe
        sub_40e273()
        result = result_1
else
    *__errno() = 9
    result = ~NO_ERROR

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40e26f
return result
