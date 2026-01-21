// 函数: sub_407575
// 地址: 0x407575
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* var_8 = arg3
int32_t var_8_1 = 0

if (arg5 != 0)
    char* esi_1 = *arg4
    
    while (*arg3 u> 1)
        int32_t eax
        int32_t edx_1
        edx_1:eax = sx.q(arg1)
        arg1 = divs.dp.d(edx_1:eax, 0xa)
        *esi_1 = (mods.dp.d(edx_1:eax, 0xa)).b + 0x30
        esi_1 = &esi_1[1]
        *arg3 -= 1
        
        if (arg1 s<= 0)
            break
    
    arg1 = *arg4
    *arg4 = esi_1
    char* esi_2 = esi_1 - 1
    
    do
        int32_t edx
        edx.b = *arg1
        arg3.b = *esi_2
        *esi_2 = edx.b
        esi_2 -= 1
        *arg1 = arg3.b
        arg1 += 1
    while (arg1 u< esi_2)
else if (arg2 u>= *arg3)
    *arg3 = 0
else
    for (char* i = arg2 - 1; i != 0xffffffff; i -= 1)
        int32_t eax_1
        int32_t edx_4
        edx_4:eax_1 = sx.q(arg1)
        arg1 = divs.dp.d(edx_4:eax_1, 0xa)
        var_8_1 += 1
        i[*arg4] = (mods.dp.d(edx_4:eax_1, 0xa)).b + 0x30
    
    *arg4 += var_8_1
    *arg3 -= var_8_1
