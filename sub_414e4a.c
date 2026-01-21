// 函数: sub_414e4a
// 地址: 0x414e4a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_28 = edi
int32_t var_10 = 0
int32_t eax
uint32_t eax_1
int32_t ecx
int32_t ecx_1
int32_t edx
int32_t edx_1
eax_1, ecx_1, edx_1 = sub_410afb(eax, edx, ecx, arg1, 0, 0, FILE_CURRENT)
int32_t eax_2 = eax_1 & edx_1

if (eax_2 != 0xffffffff)
    uint32_t eax_3
    int32_t edx_2
    eax_3, edx_2 = sub_410afb(eax_2, edx_1, ecx_1, arg1, 0, 0, FILE_END)
    int32_t ecx_3 = eax_3 & edx_2
    
    if (ecx_3 != 0xffffffff)
        int32_t esi_2 = arg2 - eax_3
        bool c_1 = arg2 u< eax_3
        int32_t edi_2 = sbb.d(arg3, edx_2, c_1)
        bool s_1 = sbb.d(arg3, edx_2, c_1) s< 0
        bool o_1 = unimplemented  {sbb edi, edx}
        int32_t esi_3
        
        if (not(s_1) && ((sbb.d(arg3, edx_2, c_1) != 0 && s_1 == o_1) || esi_2 u> 0))
            char* lpMem = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x1000)
            
            if (lpMem != 0)
                int32_t eax_8 = sub_415075(arg1, 0x8000)
                
                while (true)
                    uint32_t eax_9
                    
                    if (edi_2 s< 0 || (edi_2 s<= 0 && esi_2 u< 0x1000))
                        eax_9 = esi_2
                    else
                        eax_9 = 0x1000
                    
                    void* eax_10 = sub_40d9d1(esi_2, arg1, lpMem, eax_9)
                    
                    if (eax_10 == 0xffffffff)
                        if (*___doserrno() == 5)
                            *__errno() = 0xd
                        
                        esi_3 = 0xffffffff
                        var_10 = 0xffffffff
                        break
                    
                    int32_t eax_11
                    int32_t edx_3
                    edx_3:eax_11 = sx.q(eax_10)
                    int32_t temp4_1 = esi_2
                    esi_2 -= eax_11
                    bool c_2 = temp4_1 u< eax_11
                    int32_t temp5_1 = edi_2
                    edi_2 = sbb.d(temp5_1, edx_3, c_2)
                    bool s_2 = sbb.d(temp5_1, edx_3, c_2) s< 0
                    bool o_2 = unimplemented  {sbb edi, edx}
                    
                    if (not(s_2))
                        if (sbb.d(temp5_1, edx_3, c_2) != 0 && s_2 == o_2)
                            continue
                        else if (esi_2 != 0)
                            continue
                    
                    esi_3 = 0
                    break
                
                sub_415075(arg1, eax_8)
                eax_3, ecx_3, edx_2 = HeapFree(GetProcessHeap(), HEAP_NONE, lpMem)
                goto label_414fd3
            
            *__errno() = 0xc
        else if (edi_2 s> 0 || (edi_2 s>= 0 && esi_2 u>= 0))
        label_414fe6:
            uint32_t eax_26
            int32_t edx_5
            eax_26, edx_5 = sub_410afb(eax_3, edx_2, ecx_3, arg1, eax_1, edx_1, FILE_BEGIN)
            
            if ((eax_26 & edx_5) != 0xffffffff)
                return 0
        else
            uint32_t eax_15
            int32_t edx_4
            eax_15, edx_4 = sub_410afb(eax_3, edx_2, ecx_3, arg1, arg2, arg3, FILE_BEGIN)
            
            if ((eax_15 & edx_4) != 0xffffffff)
                BOOL eax_18
                eax_18, ecx_3 = SetEndOfFile(sub_4127e4(arg1))
                int32_t eax_19 = neg.d(eax_18)
                int32_t eax_23
                edx_2:eax_23 = sx.q(neg.d(sbb.d(eax_19, eax_19, eax_18 != 0)) - 1)
                eax_3 = eax_23 & edx_2
                var_10 = edx_2
                
                if (eax_3 != 0xffffffff)
                    goto label_414fe6
                
                *__errno() = 0xd
                uint32_t* eax_25 = ___doserrno()
                eax_3, ecx_3, edx_2 = GetLastError()
                *eax_25 = eax_3
                esi_3 = eax_23
            label_414fd3:
                
                if ((esi_3 & var_10) != 0xffffffff)
                    goto label_414fe6

return *__errno()
