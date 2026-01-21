// 函数: sub_40a4a7
// 地址: 0x40a4a7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x418398
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418398 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_40a4b3
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* eax = __getptd()
void* result

if ((eax[0x1c] & data_41aa80) == 0 || eax[0x1b] == 0)
    sub_40e3f5(0xd)
    int32_t var_8_1 = 0
    result = eax[0x1a]
    void* result_1 = result
    
    if (result != data_41a988)
        if (result != 0 && InterlockedDecrement(result) == 0 && result != 0x41a560)
            __free_base(result)
        
        eax[0x1a] = data_41a988
        result = data_41a988
        void* result_2 = result
        InterlockedIncrement(result)
    
    int32_t var_8_2 = 0xfffffffe
    sub_40a542()
else
    result = eax[0x1a]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40a4e0
return result
