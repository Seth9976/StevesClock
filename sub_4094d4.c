// 函数: sub_4094d4
// 地址: 0x4094d4
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = 0
int32_t edi
int32_t var_1c = edi
int32_t edi_1 = arg6
int32_t result
int32_t esi_3

if (arg5 != 1)
    int32_t eax_38 = edi_1 & 0x80000003
    bool cond:1_1 = eax_38 != 0
    
    if (eax_38 s< 0)
        cond:1_1 = ((eax_38 - 1) | 0xfffffffc) != 0xffffffff
    
    int32_t eax_43
    int32_t edx_18
    
    if (not(cond:1_1))
        edx_18:eax_43 = sx.q(edi_1)
        result = divs.dp.d(edx_18:eax_43, 0x64)
    
    int32_t eax_45
    int32_t edx_20
    
    if (cond:1_1 || mods.dp.d(edx_18:eax_43, 0x64) == 0)
        edx_20:eax_45 = sx.q(edi_1 + 0x76c)
        result = divs.dp.d(edx_20:eax_45, 0x190)
    
    int32_t esi_4
    
    if ((not(cond:1_1) && mods.dp.d(edx_18:eax_43, 0x64) != 0)
            || mods.dp.d(edx_20:eax_45, 0x190) == 0)
        esi_4 = (&data_41a290)[arg1]
    else
        esi_4 = *((arg1 << 2) + &data_41a2c4)
    
    esi_3 = esi_4 + arg9
else
    int32_t eax_1 = edi_1 & 0x80000003
    bool cond:2_1 = eax_1 != 0
    
    if (eax_1 s< 0)
        int32_t eax_3 = (eax_1 - 1) | 0xfffffffc
        eax_1 = eax_3 + 1
        cond:2_1 = eax_3 != 0xffffffff
    
    int32_t eax_5
    int32_t edx
    
    if (not(cond:2_1))
        edx:eax_5 = sx.q(edi_1)
    
    int32_t eax_8
    int32_t edx_2
    
    if (cond:2_1 || mods.dp.d(edx:eax_5, 0x64) == 0)
        edx_2:eax_8 = sx.q(edi_1 + 0x76c)
    
    int32_t eax_11
    int32_t esi_1
    
    if ((not(cond:2_1) && mods.dp.d(edx:eax_5, 0x64) != 0) || mods.dp.d(edx_2:eax_8, 0x190) == 0)
        eax_11 = arg1 << 2
        esi_1 = *(eax_11 + &data_41a290)
    else
        eax_11 = arg1 << 2
        esi_1 = *(eax_11 + &data_41a2c4)
    
    int32_t eax_14
    int32_t edx_4
    edx_4:eax_14 = sx.q(edi_1 + 0x12b)
    int32_t eax_17
    int32_t edx_5
    edx_5:eax_17 = sx.q(edi_1 - 1)
    edi_1 = arg6
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = sx.q(edi_1 - 1)
    int32_t temp1_3 = mods.dp.d(
        sx.q(edi_1 * 0x16d + ((eax_20 + (edx_8 & 3)) s>> 2) + esi_1 + 1
            + divs.dp.d(edx_4:eax_14, 0x190) - divs.dp.d(edx_5:eax_17, 0x64) - 0x63db), 
        7)
    result = arg7 * 7 - temp1_3 + arg8
    
    if (temp1_3 s> arg8)
        esi_3 = esi_1 + 1 + result
    else
        esi_3 = esi_1 + 1 + result - 7
    
    if (arg7 == 5)
        int32_t eax_31
        int32_t edx_14
        
        if (eax_1 == 0)
            edx_14:eax_31 = sx.q(edi_1)
        
        int32_t eax_34
        int32_t edx_16
        
        if (eax_1 != 0 || mods.dp.d(edx_14:eax_31, 0x64) == 0)
            edx_16:eax_34 = sx.q(edi_1 + 0x76c)
        
        if ((eax_1 == 0 && mods.dp.d(edx_14:eax_31, 0x64) != 0)
                || mods.dp.d(edx_16:eax_34, 0x190) == 0)
            result = *(eax_11 + &data_41a294)
        else
            result = *(eax_11 + &data_41a2c8)
        
        if (esi_3 s> result)
            esi_3 -= 7

int32_t ecx_5 = ((arg3 * 0x3c + arg10) * 0x3c + arg11) * 0x3e8 + arg12

if (arg4 != 1)
    data_41a480 = esi_3
    data_41a484 = ecx_5
    
    if (sub_40995f(&var_8) != 0)
        int32_t var_30
        __builtin_memset(&var_30, 0, 0x14)
        sub_408fb2()
        noreturn
    
    result = var_8 * 0x3e8
    int32_t temp4_1 = data_41a484
    data_41a484 += result
    
    if (temp4_1 + result s>= 0)
        result = 0x5265c00
        
        if (data_41a484 s>= 0x5265c00)
            data_41a484 -= 0x5265c00
            data_41a480 += 1
    else
        data_41a484 += 0x5265c00
        data_41a480 -= 1
    
    data_41a47c = edi_1
else
    data_41a474 = esi_3
    data_41a478 = ecx_5
    data_41a470 = edi_1

return result
