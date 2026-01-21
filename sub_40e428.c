// 函数: sub_40e428
// 地址: 0x40e428
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x4184a8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4184a8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_40e434
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
sub_40e3f5(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t edi = 3

while (true)
    int32_t var_24_1 = edi
    
    if (edi s>= data_42fb20)
        break
    
    int32_t eax = data_42eb1c
    
    if (*(eax + (edi << 2)) != 0)
        int32_t* eax_1 = *(eax + (edi << 2))
        
        if ((eax_1[3].b & 0x83) != 0 && sub_4085de(eax_1) != 0xffffffff)
            result += 1
        
        if (edi s>= 0x14)
            DeleteCriticalSection(*(data_42eb1c + (edi << 2)) + 0x20)
            __free_base(*(data_42eb1c + (edi << 2)))
            *(data_42eb1c + (edi << 2)) = 0
    
    edi += 1

int32_t var_8_2 = 0xfffffffe
sub_40e4bb()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40e4ba
return result
