// 函数: sub_40ad24
// 地址: 0x40ad24
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x4183f8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x4183f8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_40ad30
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
GetModuleHandleW(u"KERNEL32.DLL")
*(arg1 + 0x5c) = 0x4177d8
*(arg1 + 8) = 0
*(arg1 + 0x14) = 1
*(arg1 + 0x70) = 1
*(arg1 + 0xc8) = 0x43
*(arg1 + 0x14b) = 0x43
*(arg1 + 0x68) = 0x41a560
sub_40e3f5(0xd)
int32_t var_8_1 = 0
InterlockedIncrement(*(arg1 + 0x68))
int32_t var_8_2 = 0xfffffffe
sub_40adc6()
sub_40e3f5(0xc)
int32_t var_8_3 = 1
*(arg1 + 0x6c) = arg2

if (arg2 == 0)
    *(arg1 + 0x6c) = data_41acc8

sub_40a968(*(arg1 + 0x6c))
int32_t var_8_4 = 0xfffffffe
int32_t result = sub_40adcf()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40adbf
return result
