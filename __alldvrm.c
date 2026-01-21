// 函数: __alldvrm
// 地址: 0x411710
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

uint32_t result_1

if (i_1 != 0)
    uint32_t i = i_1
    int32_t ecx_2 = arg3
    uint32_t edx_9 = arg2
    int32_t eax_15 = arg1
    
    do
        ecx_2 = rrc.d(ecx_2, 1, (i & 1) != 0)
        uint32_t temp6_1 = edx_9
        edx_9 u>>= 1
        eax_15 = rrc.d(eax_15, 1, (temp6_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t result_2 = divu.dp.d(edx_9:eax_15, ecx_2)
    result_1 = result_2
    int32_t eax_17 = result_2 * arg4
    int32_t eax_14
    int32_t edx_10
    edx_10:eax_14 = mulu.dp.d(arg3, result_1)
    int32_t edx_8 = edx_10 + eax_17
    
    if (edx_10 + eax_17 u< edx_10 || edx_8 u> arg2)
        result_1 -= 1
    else if (edx_8 u>= arg2 && eax_14 u> arg1)
        result_1 -= 1
else
    result_1 = divu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)

uint32_t result = result_1

if (edi == 1)
    result = neg.d(result)

return result
