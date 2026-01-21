// 函数: sub_40ac28
// 地址: 0x40ac28
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4183d8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4183d8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_40ac34
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t* eax = __getptd()
void* result

if ((eax[0x1c] & data_41aa80) == 0 || eax[0x1b] == 0)
    sub_40e3f5(0xc)
    int32_t var_8_1 = 0
    result = &eax[0x1b]
    void* var_20_1 = sub_40abdb(result, data_41acc8)
    int32_t var_8_2 = 0xfffffffe
    sub_40ac95(&__saved_ebp)
else
    result = __getptd()[0x1b]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40ac66
return result
