// 函数: sub_40cc72
// 地址: 0x40cc72
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_38 = edi
int32_t __saved_ebx = 0x16
void var_20
void* var_40 = &var_20
int32_t var_30
__fltout2(*arg1, arg1[1], &var_30)
int32_t result

if (arg2 != 0 && arg3 != 0)
    void* eax_4
    eax_4.b = var_30 == 0x2d
    char* edi_1 = eax_4 + arg2
    void* ecx_2
    
    if (arg3 != 0xffffffff)
        ecx_2 = arg3 - eax_4
    else
        ecx_2 = arg3
    
    int32_t ecx_3
    int32_t edx_1
    result, ecx_3, edx_1 = sub_411511(edi_1, ecx_2, arg4, &var_30)
    
    if (result == 0)
        int32_t var_2c
        ecx_3.b = var_2c - 1 s< var_2c - 1
        
        if (var_2c - 1 s< 0xfffffffc || var_2c - 1 s>= arg4)
            int32_t* var_40_3 = arg6
            int32_t var_44_2 = 1
            result = sub_40c4f0(arg2, edx_1, ecx_3, arg3, arg4, arg5, &var_30)
        else
            if (ecx_3.b != 0)
                int32_t eax_6
                
                do
                    eax_6.b = *edi_1
                    edi_1 = &edi_1[1]
                while (eax_6.b != 0)
                
                edi_1[0xfffffffe] = eax_6.b
            
            result = sub_40caae(&var_30, edx_1, arg2, arg3, arg4, 1, arg6)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

sub_407fad(eax_1 ^ &__saved_ebp)
return result
