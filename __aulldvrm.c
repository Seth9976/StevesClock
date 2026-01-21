// 函数: __aulldvrm
// 地址: 0x410e50
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t result

if (arg4 != 0)
    uint32_t i = arg4
    int32_t ebx_1 = arg3
    uint32_t edx_4 = arg2
    int32_t eax_10 = arg1
    
    do
        ebx_1 = rrc.d(ebx_1, 1, (i & 1) != 0)
        uint32_t temp4_1 = edx_4
        edx_4 u>>= 1
        eax_10 = rrc.d(eax_10, 1, (temp4_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t result_1 = divu.dp.d(edx_4:eax_10, ebx_1)
    result = result_1
    int32_t eax_12 = result_1 * arg4
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = mulu.dp.d(arg3, result)
    int32_t edx_3 = edx_5 + eax_12
    
    if (edx_5 + eax_12 u< edx_5 || edx_3 u> arg2)
        result -= 1
    else if (edx_3 u>= arg2 && eax_9 u> arg1)
        result -= 1
else
    result = divu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)

return result
