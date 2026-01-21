// 函数: sub_40a7b0
// 地址: 0x40a7b0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x4183b8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4183b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_8 = &data_40a7bc
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xffffffff
uint32_t* eax = __getptd()
sub_40a4a7()
void* ebx = eax[0x1a]
uint32_t eax_1 = sub_40a54b(arg1)

if (eax_1 == *(ebx + 4))
    result = 0
else
    int32_t* eax_2 = sub_40ce55(0x220)
    
    if (eax_2 != 0)
        __builtin_memcpy(eax_2, eax[0x1a], 0x220)
        *eax_2 = 0
        int32_t result_1 = sub_40a5c7(eax_1, eax_2)
        result = result_1
        
        if (result_1 == 0)
            if (InterlockedDecrement(eax[0x1a]) == 0)
                int32_t eax_4 = eax[0x1a]
                
                if (eax_4 != 0x41a560)
                    __free_base(eax_4)
            
            eax[0x1a] = eax_2
            InterlockedIncrement(eax_2)
            
            if ((eax[0x1c].b & 2) == 0 && (data_41aa80.b & 1) == 0)
                sub_40e3f5(0xd)
                int32_t var_8_1 = 0
                data_42ddac = eax_2[1]
                data_42ddb0 = eax_2[2]
                data_42ddb4 = eax_2[3]
                int32_t eax_8 = 0
                
                while (true)
                    int32_t var_20_1 = eax_8
                    
                    if (eax_8 s>= 5)
                        break
                    
                    *((eax_8 << 1) + &data_42dda0) = *(eax_2 + (eax_8 << 1) + 0x10)
                    eax_8 += 1
                
                void* eax_9 = nullptr
                int16_t ecx_4
                
                while (true)
                    void* var_20_2 = eax_9
                    
                    if (eax_9 s>= 0x101)
                        break
                    
                    ecx_4.b = *(eax_9 + eax_2 + 0x1c)
                    *(eax_9 + 0x41a780) = ecx_4.b
                    eax_9 += 1
                
                void* eax_10 = nullptr
                
                while (true)
                    void* var_20_3 = eax_10
                    
                    if (eax_10 s>= 0x100)
                        break
                    
                    ecx_4.b = *(eax_10 + eax_2 + 0x11d)
                    *(eax_10 + 0x41a888) = ecx_4.b
                    eax_10 += 1
                
                if (InterlockedDecrement(data_41a988) == 0)
                    void* eax_12 = data_41a988
                    
                    if (eax_12 != 0x41a560)
                        __free_base(eax_12)
                
                data_41a988 = eax_2
                InterlockedIncrement(eax_2)
                int32_t var_8_2 = 0xfffffffe
                sub_40a911()
        else if (result_1 == 0xffffffff)
            if (eax_2 != 0x41a560)
                __free_base(eax_2)
            
            *__errno() = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_40a949
return result
