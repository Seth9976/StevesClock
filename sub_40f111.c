// 函数: sub_40f111
// 地址: 0x40f111
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x418568
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418568 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_5 = &data_40f11d
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = nullptr
int32_t var_20 = 0
sub_40e3f5(1)
int32_t var_8_1 = 0
int32_t esi = 0

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_42fb20)
        break
    
    int32_t* eax_1 = data_42eb1c + (esi << 2)
    
    if (*eax_1 == 0)
        int32_t eax_9 = sub_40ce55(0x38)
        *(data_42eb1c + (esi << 2)) = eax_9
        
        if (eax_9 != 0)
            bool cond:0_1 =
                InitializeCriticalSectionAndSpinCount(*(data_42eb1c + (esi << 2)) + 0x20, 0xfa0)
                != 0
            int32_t eax_14 = data_42eb1c
            
            if (cond:0_1)
                EnterCriticalSection(*(eax_14 + (esi << 2)) + 0x20)
                result = *(data_42eb1c + (esi << 2))
                int32_t* result_2 = result
                result[3] = 0
            else
                __free_base(*(eax_14 + (esi << 2)))
                *(data_42eb1c + (esi << 2)) = 0
        
        break
    
    int32_t eax_3 = *(*eax_1 + 0xc)
    
    if ((eax_3.b & 0x83) == 0 && (eax_3 & 0x8000) == 0)
        if (esi - 3 u<= 0x10 && sub_40e333(esi + 0x10) == 0)
            break
        
        sub_4084d4(esi, *(data_42eb1c + (esi << 2)))
        int32_t* result_3 = *(data_42eb1c + (esi << 2))
        
        if ((result_3[3].b & 0x83) == 0)
            result = result_3
            int32_t* result_1 = result
            break
        
        sub_408542(esi, result_3)
    
    esi += 1

if (result != 0)
    result[3] &= 0x8000
    result[1] = 0
    result[2] = 0
    *result = 0
    result[7] = 0
    result[4] = 0xffffffff

int32_t var_8_2 = 0xfffffffe
sub_40f23b()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40f237
return result
