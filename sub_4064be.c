// 函数: sub_4064be
// 地址: 0x4064be
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_20 = edi
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_8 = 0

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

sub_408e00(arg1, 0xff, 0x24)

if (arg2 != 0)
    int32_t eax_2 = arg2[1]
    int32_t ecx_1 = *arg2
    
    if ((eax_2 s> 0 || (eax_2 s>= 0 && ecx_1 u>= 0))
            && (eax_2 s< 7 || (eax_2 s<= 7 && ecx_1 u<= 0x93406fff)))
        sub_4098a2()
        
        if (_rand_s(&var_c) == 0 && sub_40995f(&var_10) == 0 && sub_40998c(&var_8) == 0)
            int32_t ecx_5 = arg2[1]
            int32_t edi_2 = *arg2
            int32_t result
            
            if (ecx_5 s< 0 || (ecx_5 s<= 0 && edi_2 u<= 0x3f480))
                result = sub_40625e(arg1, arg2)
                
                if (result != 0)
                    return result
                
                uint32_t ebx_3
                int32_t edi_5
                
                if (var_c == result)
                label_406637:
                    int32_t eax_19
                    int32_t edx_5
                    edx_5:eax_19 = sx.q(*arg1)
                    int32_t eax_21
                    int32_t edx_6
                    edx_6:eax_21 = sx.q(var_8)
                    edi_5 = eax_19 - eax_21
                    ebx_3 = sbb.d(edx_5, edx_6, eax_19 u< eax_21)
                else
                    if (sub_4098f1(arg1) == 0)
                        goto label_406637
                    
                    arg1[2].d = 1
                    int32_t eax_15
                    int128_t* edx_3
                    edx_3:eax_15 = sx.q(var_8 + var_10)
                    int32_t eax_17
                    int32_t edx_4
                    edx_4:eax_17 = sx.q(*arg1)
                    edi_5 = eax_17 - eax_15
                    ebx_3 = sbb.d(edx_4, edx_3, eax_17 u< eax_15)
                
                uint32_t eax_22 = __allrem(edi_5, ebx_3, 0x3c, 0)
                *arg1 = eax_22
                
                if (eax_22 s< 0)
                    int32_t temp7_1 = edi_5
                    edi_5 -= 0x3c
                    *arg1 = eax_22 + 0x3c
                    ebx_3 = adc.d(ebx_3, 0xffffffff, temp7_1 u>= 0x3c)
                
                uint32_t eax_24
                int32_t edx_7
                eax_24, edx_7 = __alldiv(edi_5, ebx_3, 0x3c, 0)
                int32_t eax_26
                int32_t edx_8
                edx_8:eax_26 = sx.q(*(arg1 + 4))
                int32_t edi_8 = eax_24 + eax_26
                uint32_t ebx_6 = adc.d(edx_7, edx_8, eax_24 + eax_26 u< eax_24)
                uint32_t eax_27 = __allrem(edi_8, ebx_6, 0x3c, 0)
                *(arg1 + 4) = eax_27
                
                if (eax_27 s< 0)
                    int32_t temp10_1 = edi_8
                    edi_8 -= 0x3c
                    *(arg1 + 4) = eax_27 + 0x3c
                    ebx_6 = adc.d(ebx_6, 0xffffffff, temp10_1 u>= 0x3c)
                
                uint32_t eax_29
                int32_t edx_9
                eax_29, edx_9 = __alldiv(edi_8, ebx_6, 0x3c, 0)
                int32_t eax_31
                int32_t edx_10
                edx_10:eax_31 = sx.q(*(arg1 + 8))
                int32_t edi_10 = eax_29 + eax_31
                uint32_t ebx_8 = adc.d(edx_9, edx_10, eax_29 + eax_31 u< eax_29)
                uint32_t eax_32 = __allrem(edi_10, ebx_8, 0x18, 0)
                *(arg1 + 8) = eax_32
                
                if (eax_32 s< 0)
                    int32_t temp12_1 = edi_10
                    edi_10 -= 0x18
                    *(arg1 + 8) = eax_32 + 0x18
                    ebx_8 = adc.d(ebx_8, 0xffffffff, temp12_1 u>= 0x18)
                
                uint32_t eax_34
                int32_t edx_11
                eax_34, edx_11 = __alldiv(edi_10, ebx_8, 0x18, 0)
                
                if (edx_11 s< 0)
                label_40670d:
                    int32_t eax_41
                    int32_t edx_14
                    edx_14:eax_41 = sx.q(eax_34 + *(arg1 + 0x18) + 7)
                    *(arg1 + 0xc) += eax_34
                    int32_t eax_42 = *(arg1 + 0xc)
                    *(arg1 + 0x18) = mods.dp.d(edx_14:eax_41, 7)
                    
                    if (eax_42 s> 0)
                        *(arg1 + 0x1c) += eax_34
                    else
                        *(arg1 + 0x1c) += eax_34 + 0x16d
                        *(arg1 + 0x14) -= 1
                        *(arg1 + 0xc) = eax_42 + 0x1f
                        arg1[1].d = 0xb
                else if (edx_11 s> 0 || eax_34 != 0)
                    int32_t eax_37
                    int32_t edx_12
                    edx_12:eax_37 = sx.q(*(arg1 + 0x18) + eax_34)
                    *(arg1 + 0xc) += eax_34
                    *(arg1 + 0x18) = mods.dp.d(edx_12:eax_37, 7)
                    *(arg1 + 0x1c) += eax_34
                else if (edx_11 s<= 0 && (edx_11 s< 0 || eax_34 u< 0))
                    goto label_40670d
            else
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = sx.q(var_8)
                int32_t var_18 = edi_2 - eax_8
                result = sub_40625e(arg1, &var_18)
                
                if (result != 0)
                    return result
                
                if (var_c != result && sub_4098f1(arg1) != 0)
                    int32_t eax_11
                    int32_t edx_2
                    edx_2:eax_11 = sx.q(var_10)
                    int32_t temp8_1 = var_18
                    var_18 -= eax_11
                    int32_t var_14_2 =
                        sbb.d(sbb.d(ecx_5, edx_1, edi_2 u< eax_8), edx_2, temp8_1 u< eax_11)
                    result = sub_40625e(arg1, &var_18)
                    
                    if (result != 0)
                        return result
                    
                    arg1[2].d = 1
            return 0
        
        int32_t var_38
        __builtin_memset(&var_38, 0, 0x14)
        sub_408fb2()
        noreturn
    
    *__errno() = 0x16
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0x16
