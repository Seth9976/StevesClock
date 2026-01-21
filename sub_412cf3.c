// 函数: sub_412cf3
// 地址: 0x412cf3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t i_2 = arg4
int32_t edi
int32_t var_10 = edi

if (i_2 != 0)
    if (arg1 == 0)
        goto label_412d27
    
label_412d19:
    int32_t i_3 = arg2
    
    if (i_3 == 0)
        goto label_412d27
    
    if (i_2 != 0)
        int16_t* ecx_1 = arg3
        
        if (ecx_1 == 0)
            *arg1 = 0
        label_412d27:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            return 0x16
        
        int16_t* eax_3 = arg1
        
        if (i_2 != 0xffffffff)
            int32_t i
            
            do
                int16_t ecx_2 = *(ecx_1 - arg1 + eax_3)
                *eax_3 = ecx_2
                eax_3 = &eax_3[1]
                
                if (ecx_2 == 0)
                    break
                
                int32_t i_4 = i_3
                i_3 -= 1
                
                if (i_4 == 1)
                    break
                
                i = i_2
                i_2 -= 1
            while (i != 1)
            
            if (i_2 == 0)
                *eax_3 = 0
        else
            void* esi_3 = arg1 - ecx_1
            int32_t i_1
            
            do
                int16_t eax_4 = *ecx_1
                *(esi_3 + ecx_1) = eax_4
                ecx_1 = &ecx_1[1]
                
                if (eax_4 == 0)
                    break
                
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (i_3 == 0)
            if (i_2 == 0xffffffff)
                arg1[arg2 - 1] = 0
                return 0x50
            
            *arg1 = 0
            *__errno() = 0x22
            __invalid_parameter_noinfo()
            return 0x22
    else
        *arg1 = 0
else
    if (arg1 != 0)
        goto label_412d19
    
    if (arg2 != arg1)
        goto label_412d27

return 0
