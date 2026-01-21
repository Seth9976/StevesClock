// 函数: sub_40fad6
// 地址: 0x40fad6
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_10 = edi

if (arg4 != 0)
    if (arg1 == 0)
        goto label_40fb0a
    
label_40fafc:
    int32_t i_2 = arg2
    
    if (i_2 u<= 0)
        goto label_40fb0a
    
    if (arg4 != 0)
        char* edx_1 = arg3
        
        if (edx_1 == 0)
            *arg1 = 0
        label_40fb0a:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            return 0x16
        
        char* ecx_1 = arg1
        
        if (arg4 != 0xffffffff)
            char* esi_5 = edx_1 - arg1
            int32_t i
            
            do
                edx_1.b = *(esi_5 + ecx_1)
                *ecx_1 = edx_1.b
                ecx_1 = &ecx_1[1]
                
                if (edx_1.b == 0)
                    break
                
                int32_t i_3 = i_2
                i_2 -= 1
                
                if (i_3 == 1)
                    break
                
                i = arg4
                arg4 -= 1
            while (i != 1)
            
            if (arg4 == 0)
                *ecx_1 = 0
        else
            void* esi_3 = arg1 - edx_1
            int32_t i_1
            
            do
                ecx_1.b = *edx_1
                *(esi_3 + edx_1) = ecx_1.b
                edx_1 = &edx_1[1]
                
                if (ecx_1.b == 0)
                    break
                
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (i_2 == 0)
            if (arg4 == 0xffffffff)
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
        goto label_40fafc
    
    if (arg2 != 0)
        goto label_40fb0a

return 0
