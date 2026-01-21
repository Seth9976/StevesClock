// 函数: sub_40e333
// 地址: 0x40e333
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x418488
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418488 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_40e33f
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 1

if (data_42dd98 == 0)
    __FF_MSGBANNER()
    sub_40ebc2(0x1e)
    __endthreadex(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_41ad10) == 0)
    CRITICAL_SECTION* lpCriticalSection = sub_40ce55(0x18)
    
    if (lpCriticalSection != 0)
        sub_40e3f5(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_41ad10) != 0)
            __free_base(lpCriticalSection)
        else if (InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0xfa0) != 0)
            *((arg1 << 3) + &data_41ad10) = lpCriticalSection
        else
            __free_base(lpCriticalSection)
            *__errno() = 0xc
            result_1 = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_40e3ec()
        result = result_1
    else
        *__errno() = 0xc
        result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40e3eb
return result
