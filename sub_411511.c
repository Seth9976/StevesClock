// 函数: sub_411511
// 地址: 0x411511
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx = arg4
char* ebx = *(ecx + 0xc)
int32_t i_1 = 0
int32_t result

if (arg1 != 0 && arg2 u> 0)
    int32_t i = arg3
    *arg1 = 0
    
    if (i s> 0)
        i_1 = i
    
    if (arg2 u> i_1 + 1)
        int32_t edi
        int32_t var_10_1 = edi
        *arg1 = 0x30
        char* eax_4 = &arg1[1]
        
        if (i s> 0)
            do
                ecx.b = *ebx
                
                if (ecx.b == 0)
                    ecx = 0x30
                else
                    ecx = sx.d(ecx.b)
                    ebx = &ebx[1]
                
                *eax_4 = ecx.b
                eax_4 = &eax_4[1]
                i -= 1
            while (i s> 0)
            
            ecx = arg4
        
        *eax_4 = 0
        
        if (i s>= 0 && *ebx s>= 0x35)
            while (true)
                eax_4 -= 1
                
                if (*eax_4 != 0x39)
                    break
                
                *eax_4 = 0x30
            
            *eax_4 += 1
        
        if (*arg1 != 0x31)
            sub_4111b0(arg1, &arg1[1], _strlen(&arg1[1]) + 1)
        else
            *(ecx + 4) += 1
        
        return 0
    
    *__errno() = 0x22
    result = 0x22
else
    result = 0x16
    *__errno() = 0x16

__invalid_parameter_noinfo()
return result
