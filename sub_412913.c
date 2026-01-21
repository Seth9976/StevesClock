// 函数: sub_412913
// 地址: 0x412913
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0x4185e8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x4185e8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_3 = &data_41291f
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xffffffff
int32_t edi = 0
int32_t var_28 = 0
int32_t result

if (sub_40e333(0xb) != 0)
    sub_40e3f5(0xb)
    int32_t var_8_1 = 0
    
    while (true)
        int32_t var_2c_1 = edi
        
        if (edi s>= 0x40)
            break
        
        int32_t* esi_1 = (&data_42ea00)[edi]
        
        if (esi_1 == 0)
            int32_t* i = __calloc_crt(0x20, 0x40)
            int32_t* i_1 = i
            
            if (i != 0)
                (&data_42ea00)[edi] = i
                data_42e9e0 += 0x20
                
                while (i u< (&data_42ea00)[edi] + 0x800)
                    i[1].b = 0
                    *i = 0xffffffff
                    *(i + 5) = 0xa
                    i[2] = 0
                    i = &i[0x10]
                    int32_t* i_2 = i
                
                int32_t result_2 = edi << 5
                result_1 = result_2
                *((&data_42ea00)[result_2 s>> 5] + ((result_2 & 0x1f) << 6) + 4) = 1
                
                if (sub_41284d(result_2) == 0)
                    result_1 = 0xffffffff
            
            break
        
        while (true)
            int32_t* var_24_1 = esi_1
            
            if (esi_1 u>= (&data_42ea00)[edi] + 0x800)
                break
            
            if ((esi_1[1].b & 1) == 0)
                if (esi_1[2] == 0)
                    sub_40e3f5(0xa)
                    int32_t var_8_2 = 1
                    
                    if (esi_1[2] == 0)
                        if (InitializeCriticalSectionAndSpinCount(&esi_1[3], 0xfa0) != 0)
                            esi_1[2] += 1
                        else
                            var_28 = 1
                    
                    int32_t var_8_3 = 0
                    sub_4129e5()
                
                if (var_28 == 0)
                    EnterCriticalSection(&esi_1[3])
                    
                    if ((esi_1[1].b & 1) != 0)
                        LeaveCriticalSection(&esi_1[3])
                    else if (var_28 == 0)
                        esi_1[1].b = 1
                        *esi_1 = 0xffffffff
                        result_1 = ((esi_1 - (&data_42ea00)[edi]) s>> 6) + (edi << 5)
                        break
            
            esi_1 = &esi_1[0x10]
        
        if (result_1 != 0xffffffff)
            break
        
        edi += 1
    
    int32_t var_8_4 = 0xfffffffe
    sub_412aa3()
    result = result_1
else
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_412aa2
return result
