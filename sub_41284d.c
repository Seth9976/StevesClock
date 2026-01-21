// 函数: sub_41284d
// 地址: 0x41284d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4185c8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4185c8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_412859
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_42ea00)[arg1 s>> 5]
int32_t result = 1

if (*(esi_3 + 8) == 0)
    sub_40e3f5(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        if (InitializeCriticalSectionAndSpinCount(esi_3 + 0xc, 0xfa0) == 0)
            result = 0
        
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_4128e3()

if (result != 0)
    EnterCriticalSection((&data_42ea00)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4128dd
return result
