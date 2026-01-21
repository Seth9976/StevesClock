// 函数: __allrem
// 地址: 0x4099e0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi = 0

if (arg2 s< 0)
    edi = 1
    arg2 = sbb.d(neg.d(arg2), 0, arg1 != 0)
    arg1 = neg.d(arg1)

uint32_t i_1 = arg4

if (i_1 s< 0)
    i_1 = sbb.d(neg.d(i_1), 0, arg3 != 0)
    arg4 = i_1
    arg3 = neg.d(arg3)

uint32_t result

if (i_1 != 0)
    uint32_t i = i_1
    int32_t ecx_1 = arg3
    uint32_t edx_9 = arg2
    int32_t eax_9 = arg1
    
    do
        ecx_1 = rrc.d(ecx_1, 1, (i & 1) != 0)
        uint32_t temp7_1 = edx_9
        edx_9 u>>= 1
        eax_9 = rrc.d(eax_9, 1, (temp7_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t temp0_1 = divu.dp.d(edx_9:eax_9, ecx_1)
    int32_t eax_11 = temp0_1 * arg4
    int32_t eax_13
    int32_t edx_10
    edx_10:eax_13 = mulu.dp.d(temp0_1, arg3)
    int32_t edx_11 = edx_10 + eax_11
    
    if (edx_10 + eax_11 u< edx_10 || edx_11 u> arg2)
        eax_13 -= arg3
    else if (edx_11 u>= arg2 && eax_13 u> arg1)
        eax_13 -= arg3
    
    result = eax_13 - arg1
    
    if (edi - 1 s< 0)
        result = neg.d(result)
else
    result = modu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)
    
    if (edi - 1 s>= 0)
        result = neg.d(result)

return result
