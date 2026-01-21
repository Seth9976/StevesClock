// 函数: sub_4098f1
// 地址: 0x4098f1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x418378
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418378 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_4098fd
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40e3f5(6)
int32_t var_8_1 = 0
int32_t result = sub_4096cb(arg1)
int32_t var_8_2 = 0xfffffffe
sub_409929()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_409928
return result
