// 函数: sub_40625e
// 地址: 0x40625e
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = 0
int128_t* esi = arg1

if (esi != 0)
    sub_408e00(esi, 0xff, 0x24)

if (esi == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    int32_t ecx_1 = *arg2
    uint32_t eax_3 = arg2[1]
    
    if ((eax_3 s> 0xffffffff || (eax_3 s>= 0xffffffff && ecx_1 u>= 0xffff5740))
            && (eax_3 s< 7 || (eax_3 s<= 7 && ecx_1 u<= 0x934126cf)))
        int32_t edi
        int32_t var_20_1 = edi
        int128_t* ecx_2 = __alldiv(ecx_1, eax_3, 0x1e13380, 0) + 0x46
        arg1 = ecx_2
        int32_t eax_13
        int32_t edx_3
        edx_3:eax_13 = sx.q(ecx_2 - 1)
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = sx.q(divs.dp.d(sx.q(ecx_2 + 0x12b), 0x190) - divs.dp.d(sx.q(ecx_2 - 1), 0x64)
            + ((eax_13 + (edx_3 & 3)) s>> 2) - 0x11)
        int32_t eax_19
        int32_t edx_6
        edx_6:eax_19 = sx.q(ecx_2 - 0x46)
        int32_t eax_20
        int32_t edx_7
        eax_20, edx_7 = __allmul(eax_19, edx_6, 0xfffffe93, 0xffffffff)
        int32_t eax_22
        int32_t edx_9
        eax_22, edx_9 = __allmul(eax_20 - eax_17, sbb.d(edx_7, edx_5, eax_20 u< eax_17), 0x15180, 0)
        int32_t edi_4 = ecx_1 + eax_22
        uint32_t var_10_2 = adc.d(eax_3, edx_9, ecx_1 + eax_22 u< ecx_1)
        
        if (var_10_2 s> 0 || (var_10_2 s>= 0 && edi_4 u>= 0))
            void* ecx_9 = arg1 & 0x80000003
            bool cond:3_1 = ecx_9 != 0
            
            if (ecx_9 s< 0)
                cond:3_1 = ((ecx_9 - 1) | 0xfffffffc) != 0xffffffff
            
            int32_t eax_30
            int32_t edx_14
            
            if (not(cond:3_1))
                edx_14:eax_30 = sx.q(arg1)
            
            if (not(cond:3_1) && mods.dp.d(edx_14:eax_30, 0x64) != 0)
                var_8 = 1
            else if (mods.dp.d(sx.q(arg1 + 0x76c), 0x190) == 0)
                var_8 = 1
        else
            int128_t* eax_23 = ecx_2 - 1
            int32_t temp6_1 = edi_4
            edi_4 += 0x1e13380
            var_10_2 = adc.d(var_10_2, 0, temp6_1 u>= 0xfe1ecc80)
            void* ecx_4 = eax_23 & 0x80000003
            bool cond:5_1 = ecx_4 != 0
            arg1 = eax_23
            
            if (ecx_4 s< 0)
                cond:5_1 = ((ecx_4 - 1) | 0xfffffffc) != 0xffffffff
            
            if (cond:5_1)
                goto label_40638b
            
            if (mods.dp.d(sx.q(eax_23), 0x64) != 0)
            label_406397:
                int32_t temp9_1 = edi_4
                edi_4 += 0x15180
                var_10_2 = adc.d(var_10_2, 0, temp9_1 + 0x15180 u< temp9_1)
                var_8 = 1
            else
                eax_23 = arg1
            label_40638b:
                
                if (mods.dp.d(sx.q(eax_23 + 0x76c), 0x190) == 0)
                    goto label_406397
        
        *(esi + 0x14) = arg1
        uint32_t eax_37 = __alldiv(edi_4, var_10_2, 0x15180, 0)
        *(esi + 0x1c) = eax_37
        int32_t eax_38
        int32_t edx_18
        edx_18:eax_38 = sx.q(eax_37)
        int32_t eax_39
        int32_t edx_19
        eax_39, edx_19 = __allmul(eax_38, edx_18, 0xfffeae80, 0xffffffff)
        int32_t edi_5 = edi_4 + eax_39
        uint32_t var_10_3 = adc.d(var_10_2, edx_19, edi_4 + eax_39 u< edi_4)
        void* edx_20 = &data_41a294
        
        if (var_8 == 0)
            edx_20 = &data_41a2c8
        
        int32_t i = *(esi + 0x1c)
        int32_t ecx_13 = 1
        
        if (*(edx_20 + 4) s< i)
            do
                ecx_13 += 1
            while (*(edx_20 + (ecx_13 << 2)) s< i)
        
        esi[1].d = ecx_13 - 1
        *(esi + 0xc) = i - *(edx_20 + ((ecx_13 - 1) << 2))
        *(esi + 0x18) = mods.dp.d(sx.q(__alldiv(*arg2, arg2[1], 0x15180, 0) + 4), 7)
        uint32_t eax_46 = __alldiv(edi_5, var_10_3, 0xe10, 0)
        *(esi + 8) = eax_46
        int32_t eax_47
        int32_t edx_23
        edx_23:eax_47 = sx.q(eax_46)
        int32_t eax_48
        int32_t edx_24
        eax_48, edx_24 = __allmul(eax_47, edx_23, 0xfffff1f0, 0xffffffff)
        int32_t edi_6 = edi_5 + eax_48
        uint32_t eax_49 = __alldiv(edi_6, adc.d(var_10_3, edx_24, edi_5 + eax_48 u< edi_5), 0x3c, 0)
        *(esi + 4) = eax_49
        *esi = edi_6 - eax_49 * 0x3c
        esi[2].d = 0
        return 0
    
    *__errno() = 0x16

return 0x16
