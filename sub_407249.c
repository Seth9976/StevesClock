// 函数: sub_407249
// 地址: 0x407249
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_1c = edi

if (arg1 == 0)
    goto label_407265

int32_t result
int32_t result_1
void* eax_2

if (_strnlen(arg1, arg2) u< arg2)
    void* eax_4 = *arg3
    uint32_t ecx_2 = *(eax_4 + 0x14)
    
    if (ecx_2 != 0)
        int32_t ecx_4 =
            sub_40b4a7(arg3, ecx_2, 0x100, arg1, 0xffffffff, nullptr, 0, *(eax_4 + 4), 1)
        
        if (ecx_4 != 0)
            if (arg2 u< ecx_4)
                *arg1 = 0
                eax_2 = __errno()
                result_1 = 0x22
                goto label_40726c
            
            int32_t* var_c_1
            
            if (ecx_4 s<= 0 || divu.dp.d(0:0xffffffe0, ecx_4) u< 1)
                var_c_1 = nullptr
            else
                int32_t* eax_11
                
                if (ecx_4 + 8 u> 0x400)
                    eax_11 = sub_40b22c(ecx_4 + 8)
                    
                    if (eax_11 != 0)
                        *eax_11 = 0xdddd
                        eax_11 = &eax_11[2]
                else
                    __alloca_probe_16(ecx_4 + 8)
                    eax_11 = &var_1c
                    
                    if (&var_1c != 0)
                        var_1c = 0xcccc
                        eax_11 = &eax_11[2]
                
                var_c_1 = eax_11
            
            if (var_c_1 != 0)
                void* eax_13 = *arg3
                int32_t result_2
                
                if (sub_40b4a7(arg3, *(eax_13 + 0x14), 0x100, arg1, 0xffffffff, var_c_1, ecx_4, 
                        *(eax_13 + 4), 1) == 0)
                    *__errno() = 0x2a
                    result_2 = 0x2a
                else
                    result_2 = sub_40b1cd(arg1, arg2, var_c_1)
                
                __freea_crt(var_c_1)
                result = result_2
            else
                *__errno() = 0xc
                result = *__errno()
        else
            *__errno() = 0x2a
            result = *__errno()
    else
        char* ecx_3 = arg1
        
        if (*arg1 != 0)
            do
                eax_4.b = *ecx_3
                
                if (eax_4.b s>= 0x41 && eax_4.b s<= 0x5a)
                    eax_4.b += 0x20
                    *ecx_3 = eax_4.b
                
                ecx_3 = &ecx_3[1]
            while (*ecx_3 != 0)
        
        result = 0
else
    *arg1 = 0
label_407265:
    eax_2 = __errno()
    result_1 = 0x16
label_40726c:
    *eax_2 = result_1
    __invalid_parameter_noinfo()
    result = result_1
sub_407fad(eax_1 ^ &__saved_ebp)
return result
