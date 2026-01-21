// 函数: sub_408286
// 地址: 0x408286
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0x14
int32_t var_8 = 0x418230
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x418230 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_408292
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t result_1 = 0
sub_40e3f5(1)
int32_t var_8_1 = 0
int32_t esi = 0

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_42fb20)
        break
    
    int32_t* eax_1 = data_42eb1c + (esi << 2)
    
    if (*eax_1 != 0)
        int32_t eax_2 = *eax_1
        
        if ((*(eax_2 + 0xc) & 0x83) != 0)
            sub_4084d4(esi, eax_2)
            int32_t var_8_2 = 1
            int32_t* eax_4 = *(data_42eb1c + (esi << 2))
            char ecx_1 = (eax_4[3]).b
            
            if ((ecx_1 & 0x83) != 0)
                if (arg1 == 1)
                    if (sub_40823e(eax_4) != 0xffffffff)
                        result_2 += 1
                else if (arg1 == 0 && (ecx_1 & 2) != 0)
                    int32_t eax_6 = sub_40823e(eax_4)
                    
                    if (eax_6 == 0xffffffff)
                        result_1 |= eax_6
            
            int32_t var_8_3 = 0
            sub_408328(esi)
    
    esi += 1

int32_t var_8_4 = 0xfffffffe
sub_408357()
int32_t result = result_2

if (arg1 != 1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_408356
return result
