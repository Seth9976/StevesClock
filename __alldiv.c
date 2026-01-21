// 函数: __alldiv
// 地址: 0x4090e0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi = 0

if (arg2 s< 0)
    edi = 1
    arg2 = sbb.d(neg.d(arg2), 0, arg1 != 0)
    arg1 = neg.d(arg1)

uint32_t i_1 = arg4

if (i_1 s< 0)
    edi += 1
    i_1 = sbb.d(neg.d(i_1), 0, arg3 != 0)
    arg4 = i_1
    arg3 = neg.d(arg3)

uint32_t result

if (i_1 != 0)
    uint32_t i = i_1
    int32_t ecx_1 = arg3
    uint32_t edx_8 = arg2
    int32_t eax_10 = arg1
    
    do
        ecx_1 = rrc.d(ecx_1, 1, (i & 1) != 0)
        uint32_t temp6_1 = edx_8
        edx_8 u>>= 1
        eax_10 = rrc.d(eax_10, 1, (temp6_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t result_2 = divu.dp.d(edx_8:eax_10, ecx_1)
    uint32_t result_1 = result_2
    int32_t eax_12 = result_2 * arg4
    int32_t eax_14
    int32_t edx_9
    edx_9:eax_14 = mulu.dp.d(arg3, result_1)
    int32_t edx_10 = edx_9 + eax_12
    
    if (edx_9 + eax_12 u< edx_9 || edx_10 u> arg2)
        result_1 -= 1
    else if (edx_10 u>= arg2 && eax_14 u> arg1)
        result_1 -= 1
    
    result = result_1
else
    result = divu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)

if (edi == 1)
    result = neg.d(result)

return result
