// 函数: sub_4075f0
// 地址: 0x4075f0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* var_8 = arg3
int32_t eax = sx.d(arg1)
int32_t edi
int32_t var_14 = edi
int32_t var_1c_1
int32_t var_18_1
int32_t eax_7
char* edx_1

if (eax s> 0x59)
    int32_t var_28_2
    int16_t* var_24_2
    char** var_20_2
    int32_t* var_1c_3
    char* var_18_3
    
    if (eax s> 0x6d)
        if (eax == 0x70)
            int32_t esi_9 = arg5[2]
            
            if (esi_9 s>= 0 && esi_9 s<= 0x17)
                if (esi_9 s> 0xb)
                    edx_1 = *(arg6 + 0x9c)
                else
                    edx_1 = *(arg6 + 0x98)
                
                goto label_407997
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x77)
            eax_7 = arg5[6]
            
            if (eax_7 s>= 0 && eax_7 s<= 6)
                sub_407575(eax_7, 1, arg3, arg2, arg7)
                return 1
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else
            if (eax == 0x78)
                var_18_3 = arg6
                var_1c_3 = arg3
                var_20_2 = arg2
                var_24_2 = arg5
                
                var_28_2 = arg7 == 0 ? 0 : 1
                
                goto label_407873
            
            if (eax == 0x79)
                int32_t eax_44 = arg5[5]
                
                if (eax_44 s>= 0)
                    var_18_1 = arg7
                    eax_7 = mods.dp.d(sx.q(eax_44), 0x64)
                    goto label_40782f
                
                *__errno() = 0x16
                __invalid_parameter_noinfo()
            else if (eax == 0x7a)
                goto label_4078fa
    else if (eax == 0x6d)
        int32_t esi_8 = arg5[4]
        
        if (esi_8 s>= 0 && esi_8 s<= 0xb)
            eax_7 = esi_8 + 1
        label_40782c:
            var_18_1 = arg7
        label_40782f:
            var_1c_1 = 2
            goto label_407831
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
        if (eax == 0x5a)
        label_4078fa:
            sub_4098a2()
            int32_t eax_42
            eax_42.b = arg5[8] != 0
            sub_407555(arg3, (&data_41a518)[eax_42], arg2)
            return 1
        
        if (eax == 0x61)
            int32_t esi_7 = arg5[6]
            
            if (esi_7 s>= 0 && esi_7 s<= 6)
                edx_1 = *(arg6 + (esi_7 << 2))
            label_407997:
                sub_407555(arg3, edx_1, arg2)
                return 1
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x62)
            int32_t esi_6 = arg5[4]
            
            if (esi_6 s>= 0 && esi_6 s<= 0xb)
                edx_1 = *(arg6 + (esi_6 << 2) + 0x38)
                goto label_407997
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x63)
            int32_t var_28_1
            
            var_28_1 = arg7 == 0 ? 0 : 1
            
            if (sub_4079a8(arg4, var_28_1, arg5, arg2, arg3, arg6) != 0 && *arg3 != 0)
                **arg2 = 0x20
                *arg2 += 1
                *arg3 -= 1
            label_407868:
                var_18_3 = arg6
                var_1c_3 = arg3
                var_20_2 = arg2
                var_24_2 = arg5
                var_28_2 = 2
            label_407873:
                
                if (sub_4079a8(arg4, var_28_2, var_24_2, var_20_2, var_1c_3, var_18_3) != 0)
                    return 1
        else if (eax == 0x64)
            int32_t esi_5 = arg5[3]
            
            if (esi_5 s>= 1 && esi_5 s<= 0x1f)
                eax_7 = esi_5
                goto label_40782c
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x6a)
            int32_t esi_4 = arg5[7]
            
            if (esi_4 s>= 0 && esi_4 s<= 0x16d)
                var_18_1 = arg7
                eax_7 = esi_4 + 1
                var_1c_1 = 3
                goto label_407831
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
else if (eax == 0x59)
    int32_t eax_22 = arg5[5]
    
    if (eax_22 s>= 0xfffff894 && eax_22 s<= 0x1fa3)
        int32_t eax_23
        int32_t edx_7
        edx_7:eax_23 = sx.q(eax_22)
        var_18_1 = arg7
        var_1c_1 = 4
        eax_7 = (divs.dp.d(edx_7:eax_23, 0x64) + 0x13) * 0x64 + mods.dp.d(edx_7:eax_23, 0x64)
    label_407831:
        sub_407575(eax_7, var_1c_1, arg3, arg2, var_18_1)
        return 1
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    bool cond:4_1
    
    if (eax s> 0x49)
        if (eax == 0x4d)
            eax_7 = arg5[1]
            
            if (eax_7 s< 0)
                *__errno() = 0x16
                __invalid_parameter_noinfo()
            else
                cond:4_1 = eax_7 s> 0x3b
            label_407657:
                
                if (not(cond:4_1))
                    goto label_40782c
                
                *__errno() = 0x16
                __invalid_parameter_noinfo()
        else
            int32_t ecx = 6
            
            if (eax == 0x53)
                eax_7 = *arg5
                
                if (eax_7 s>= 0 && eax_7 s<= 0x3b)
                    goto label_40782c
                
                *__errno() = 0x16
                __invalid_parameter_noinfo()
            else if (eax == 0x55)
                int32_t eax_19 = arg5[6]
                
                if (eax_19 s< 0 || eax_19 s> 6)
                    *__errno() = 0x16
                    __invalid_parameter_noinfo()
                else
                    ecx = eax_19
                label_407730:
                    int32_t eax_20 = arg5[7]
                    
                    if (eax_20 s>= 0 && eax_20 s<= 0x16d)
                        if (eax_20 s>= ecx)
                            int32_t eax_21
                            int32_t edx_5
                            edx_5:eax_21 = sx.q(eax_20)
                            eax_7 = divs.dp.d(edx_5:eax_21, 7)
                            
                            if (mods.dp.d(edx_5:eax_21, 7) s>= ecx)
                                eax_7 += 1
                        else
                            eax_7 = 0
                        
                        goto label_40782c
                    
                    *__errno() = 0x16
                    __invalid_parameter_noinfo()
            else if (eax == 0x57)
                int32_t eax_18 = arg5[6]
                
                if (eax_18 s>= 0 && eax_18 s<= 6)
                    if (eax_18 != 0)
                        ecx = eax_18 - 1
                    
                    goto label_407730
                
                *__errno() = 0x16
                __invalid_parameter_noinfo()
            else if (eax == 0x58)
                goto label_407868
    else if (eax == 0x49)
        int32_t esi_3 = arg5[2]
        
        if (esi_3 s>= 0 && esi_3 s<= 0x17)
            eax_7 = mods.dp.d(sx.q(esi_3), 0xc)
            
            if (eax_7 == 0)
                eax_7 = 0xc
            
            goto label_40782c
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
        if (eax == 4 || eax == 0xd)
            return 1
        
        if (eax == 0x25)
            **arg2 = 0x25
            *arg2 += 1
            *arg3 -= 1
            return 1
        
        if (eax == 0x41)
            int32_t esi_2 = arg5[6]
            
            if (esi_2 s>= 0 && esi_2 s<= 6)
                edx_1 = *(arg6 + (esi_2 << 2) + 0x1c)
                goto label_407997
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x42)
            int32_t esi_1 = arg5[4]
            
            if (esi_1 s>= 0 && esi_1 s<= 0xb)
                edx_1 = *(arg6 + (esi_1 << 2) + 0x68)
                goto label_407997
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
        else if (eax == 0x48)
            eax_7 = arg5[2]
            
            if (eax_7 s>= 0)
                cond:4_1 = eax_7 s> 0x17
                goto label_407657
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
return 0
