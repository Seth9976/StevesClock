// 函数: sub_407e02
// 地址: 0x407e02
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* eax = arg1
int32_t var_c = 0
void* var_24
sub_4070a4(&var_24, arg6)
char* eax_1 = arg1
void* var_1c
char var_18

if (eax_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_18 != 0)
        *(var_1c + 0x70) &= 0xfffffffd
    
    return 0

int32_t edi
int32_t var_2c_1 = edi
int32_t result

if (arg2 != 0)
    char* esi_1 = arg3
    *eax_1 = 0
    
    if (esi_1 == 0)
    label_407f70:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
        void* eax_6 = arg5
        
        if (eax_6 == 0)
            eax_6 = *(var_24 + 0xd4)
        
        void* var_10_1 = eax_6
        int32_t var_8 = arg2
        
        if (arg2 u> 0)
            while (true)
                eax_6.b = *esi_1
                
                if (eax_6.b != 0)
                    if (eax_6.b == 0x25)
                        if (arg4 == 0)
                            goto label_407f70
                        
                        void* esi_2 = &esi_1[1]
                        int32_t eax_9 = 0
                        
                        if (*esi_2 == 0x23)
                            eax_9 = 1
                            esi_2 += 1
                        
                        if (sub_4075f0(*esi_2, &arg1, &var_8, &var_24, arg4, var_10_1, eax_9) == 0)
                            if (var_8 u> 0)
                                var_c = 1
                            
                            break
                        
                        esi_1 = esi_2 + 1
                    else
                        if (sub_40d0c6(eax_6.b, &var_24) != 0 && var_8 u> 1)
                            if (esi_1[1] == 0)
                                var_c = 1
                                break
                            
                            *arg1 = *esi_1
                            arg1 = &arg1[1]
                            var_8 -= 1
                            esi_1 = &esi_1[1]
                        
                        eax_6.b = *esi_1
                        *arg1 = eax_6.b
                        arg1 = &arg1[1]
                        esi_1 = &esi_1[1]
                        var_8 -= 1
                    
                    if (var_8 u> 0)
                        continue
                
                if (var_8 u<= 0)
                    break
                
                *arg1 = 0
                result = arg2 - var_8
                
                if (var_18 != 0)
                    *(var_1c + 0x70) &= 0xfffffffd
                
                return result
        
        *eax = 0
        
        if (var_c != 0 || var_8 u> 0)
            goto label_407f70
        
        *__errno() = 0x22
    
    if (var_18 != 0)
        *(var_1c + 0x70) &= 0xfffffffd
    
    result = 0
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_18 != 0)
        *(var_1c + 0x70) &= 0xfffffffd
    
    result = 0

return result
