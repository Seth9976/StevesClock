// 函数: _vwscanf
// 地址: 0x40691b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4181f0
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4181f0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_406927
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg2 != 0
uint32_t result

if (eax != 0)
    sub_408493(arg2)
    int32_t var_8_1 = 0
    uint32_t result_1 = sub_406838(arg1, arg2)
    int32_t var_8_2 = 0xfffffffe
    sub_40697a(&__saved_ebp)
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_406979
return result
