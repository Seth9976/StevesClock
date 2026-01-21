// 函数: sub_4155a9
// 地址: 0x4155a9
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t result_1 = 0

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

char* esi_1 = *arg1
int32_t edi
int32_t var_24_1 = edi
int32_t result

if (esi_1 == 0)
    *__errno() = 0x16
    result = 0xffffffff
else
    void* eax_2 = __execvp(esi_1, 0x3d)
    PSTR ecx_1 = 0x3d
    
    if (eax_2 == 0 || esi_1 == eax_2)
        *__errno() = 0x16
        result = 0xffffffff
    else
        int32_t eax_3
        eax_3.b = *(eax_2 + 1) == 0
        int32_t* eax_4 = data_42dca8
        
        if (eax_4 == data_42dcac)
            eax_4, ecx_1 = sub_415549(eax_4)
            data_42dca8 = eax_4
        
        if (eax_4 != 0)
            goto label_41567b
        
        if (arg2 != 0 && data_42dcb0 != 0)
            if (sub_413f10(ecx_1) == 0)
                goto label_41567b
            
            *__errno() = 0x16
            result = 0xffffffff
        else if (eax_3 != 0)
            result = 0
        else
            int32_t* eax_7 = sub_40ce55(4)
            data_42dca8 = eax_7
            
            if (eax_7 == 0)
                result = 0xffffffff
            else
                *eax_7 = 0
                
                if (data_42dcb0 != 0)
                    goto label_41567b
                
                int32_t* eax_8 = sub_40ce55(4)
                data_42dcb0 = eax_8
                
                if (eax_8 == 0)
                    result = 0xffffffff
                else
                    *eax_8 = 0
                label_41567b:
                    int32_t* esi_2 = data_42dca8
                    
                    if (esi_2 == 0)
                        result = 0xffffffff
                    else
                        int32_t edi_4 = sub_4154f7(eax_2 - esi_1, esi_1)
                        int32_t eax_14
                        
                        if (edi_4 s>= 0 && *esi_2 != 0)
                            void* esi_3 = &esi_2[edi_4]
                            __free_base(*esi_3)
                            
                            if (eax_3 != 0)
                                while (*esi_3 != 0)
                                    *esi_3 = *(esi_3 + 4)
                                    edi_4 += 1
                                    esi_3 = &esi_2[edi_4]
                                
                                if (edi_4 u>= 0x3fffffff)
                                    goto label_415742
                                
                                eax_14 = __recalloc_crt(data_42dca8, edi_4, 4)
                                
                                if (eax_14 == 0)
                                    goto label_415742
                                
                                goto label_41573a
                            
                            *esi_3 = esi_1
                            *arg1 = 0
                        label_415742:
                            
                            if (arg2 != 0)
                                PSTR lpName = __calloc_crt(_strlen(esi_1) + 2, 1)
                                
                                if (lpName != 0)
                                    if (sub_40b1cd(lpName, _strlen(esi_1) + 2, esi_1) != 0)
                                        int32_t var_38
                                        __builtin_memset(&var_38, 0, 0x14)
                                        sub_408fb2()
                                        noreturn
                                    
                                    void* eax_23 = lpName - esi_1 + eax_2
                                    *eax_23 = 0
                                    int32_t ecx_12 = neg.d(eax_3)
                                    
                                    if (SetEnvironmentVariableA(lpName, 
                                            not.d(sbb.d(ecx_12, ecx_12, eax_3 != 0)) & (eax_23 + 1)) == 0)
                                        result_1 = 0xffffffff
                                        *__errno() = 0x2a
                                    
                                    __free_base(lpName)
                            
                            if (eax_3 != 0)
                                __free_base(esi_1)
                                *arg1 = 0
                            
                            result = result_1
                        else if (eax_3 != 0)
                            __free_base(esi_1)
                            *arg1 = 0
                            result = 0
                        else
                            if (edi_4 s< 0)
                                edi_4 = neg.d(edi_4)
                            
                            if (edi_4 + 2 s< edi_4 || edi_4 + 2 u>= 0x3fffffff)
                                result = 0xffffffff
                            else
                                eax_14 = __recalloc_crt(data_42dca8, 4, edi_4 + 2)
                                
                                if (eax_14 != 0)
                                    char** ecx_6 = eax_14 + (edi_4 << 2)
                                    *ecx_6 = esi_1
                                    ecx_6[1] = 0
                                    *arg1 = 0
                                label_41573a:
                                    data_42dca8 = eax_14
                                    goto label_415742
                                
                                result = 0xffffffff

return result
