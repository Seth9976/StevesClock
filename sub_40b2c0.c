// 函数: sub_40b2c0
// 地址: 0x40b2c0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_20 = edi

if (arg5 s> 0)
    char* eax_2 = arg4
    int32_t ecx_1 = arg5
    
    while (true)
        ecx_1 -= 1
        
        if (*eax_2 == 0)
            break
        
        eax_2 = &eax_2[1]
        
        if (ecx_1 == 0)
            ecx_1 = 0xffffffff
            break
    
    int32_t eax_5 = arg5 - ecx_1 - 1
    
    if (eax_5 s< arg5)
        eax_5 += 1
    
    arg5 = eax_5

int32_t result_1 = 0

if (arg8 == 0)
    arg8 = *(*arg1 + 4)

int32_t eax_9
eax_9.b = arg9 != 0
int32_t eax_11 = MultiByteToWideChar(arg8, (eax_9 << 3) + 1, arg4, arg5, nullptr, 0)
int32_t* var_10_1

if (eax_11 != 0)
    if (eax_11 s<= 0 || divu.dp.d(0:0xffffffe0, eax_11) u< 2)
        var_10_1 = nullptr
    else
        int32_t* eax_15
        
        if (eax_11 * 2 + 8 u> 0x400)
            eax_15 = sub_40b22c(eax_11 * 2 + 8)
            
            if (eax_15 != 0)
                *eax_15 = 0xdddd
                eax_15 = &eax_15[2]
        else
            __alloca_probe_16(eax_11 * 2 + 8)
            eax_15 = &var_20
            
            if (&var_20 != 0)
                var_20 = 0xcccc
                eax_15 = &eax_15[2]
        
        var_10_1 = eax_15

int32_t result

if (eax_11 == 0 || var_10_1 == 0)
    result = 0
else
    if (MultiByteToWideChar(arg8, MB_PRECOMPOSED, arg4, arg5, var_10_1, eax_11) != 0)
        int32_t result_2 = LCMapStringW(arg2, arg3, var_10_1, eax_11, nullptr, 0)
        result_1 = result_2
        
        if (result_2 != 0)
            if ((arg3 & 0x400) == 0)
                wchar16* edi_3
                
                if (result_1 s<= 0 || divu.dp.d(0:0xffffffe0, result_1) u< 2)
                    edi_3 = nullptr
                label_40b446:
                    
                    if (edi_3 != 0)
                        if (LCMapStringW(arg2, arg3, var_10_1, eax_11, edi_3, result_1) != 0)
                            PSTR lpMultiByteStr
                            int32_t cbMultiByte
                            
                            if (arg7 != 0)
                                cbMultiByte = arg7
                                lpMultiByteStr = arg6
                            else
                                cbMultiByte = 0
                                lpMultiByteStr = nullptr
                            
                            result_1 = WideCharToMultiByte(arg8, 0, edi_3, result_1, 
                                lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                        
                        __freea_crt(edi_3)
                else
                    if (result_1 * 2 + 8 u> 0x400)
                        int32_t* eax_21 = sub_40b22c(result_1 * 2 + 8)
                        
                        if (eax_21 != 0)
                            *eax_21 = 0xdddd
                            eax_21 = &eax_21[2]
                        
                        edi_3 = eax_21
                        goto label_40b446
                    
                    __alloca_probe_16(result_1 * 2 + 8)
                    
                    if (&var_20 != 0)
                        var_20 = 0xcccc
                        int32_t __saved_ebx
                        edi_3 = &__saved_ebx
                        goto label_40b446
            else if (arg7 != 0 && result_1 s<= arg7)
                LCMapStringW(arg2, arg3, var_10_1, eax_11, arg6, arg7)
    
    __freea_crt(var_10_1)
    result = result_1

sub_407fad(eax_1 ^ &__saved_ebp)
return result
