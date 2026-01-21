// 函数: sub_40e9a9
// 地址: 0x40e9a9
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x418528
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418528 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_40e9b5
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4087cd()
int32_t var_8_1 = 0
int32_t result = sub_40e8c2(arg1)
int32_t var_8_2 = 0xfffffffe
sub_40e9df()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40e9de
return result
