// 函数: sub_40ae6b
// 地址: 0x40ae6b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x418420
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x418420 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_13 = &data_40ae77
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t eax = *(arg1 + 0x24)
    
    if (eax != 0)
        __free_base(eax)
    
    int32_t eax_1 = *(arg1 + 0x2c)
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x34)
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    int32_t eax_3 = *(arg1 + 0x3c)
    
    if (eax_3 != 0)
        __free_base(eax_3)
    
    int32_t eax_4 = *(arg1 + 0x40)
    
    if (eax_4 != 0)
        __free_base(eax_4)
    
    int32_t eax_5 = *(arg1 + 0x44)
    
    if (eax_5 != 0)
        __free_base(eax_5)
    
    int32_t eax_6 = *(arg1 + 0x48)
    
    if (eax_6 != 0)
        __free_base(eax_6)
    
    int32_t eax_7 = *(arg1 + 0x5c)
    
    if (eax_7 != 0x4177d8)
        __free_base(eax_7)
    
    sub_40e3f5(0xd)
    int32_t var_8_1 = 0
    int32_t edi_1 = *(arg1 + 0x68)
    
    if (edi_1 != 0 && InterlockedDecrement(edi_1) == 0 && edi_1 != 0x41a560)
        __free_base(edi_1)
    
    int32_t var_8_2 = 0xfffffffe
    sub_40af85()
    sub_40e3f5(0xc)
    int32_t var_8_3 = 1
    int32_t* edi_2 = *(arg1 + 0x6c)
    
    if (edi_2 != 0)
        sub_40a9f7(edi_2)
        
        if (edi_2 != data_41acc8 && edi_2 != 0x41abf0 && *edi_2 == 0)
            sub_40aa90(edi_2)
    
    int32_t var_8_4 = 0xfffffffe
    sub_40af91()
    result = __free_base(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40af7f
return result
