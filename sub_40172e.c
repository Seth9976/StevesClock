// 函数: sub_40172e
// 地址: 0x40172e
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0

if (arg2 == 1)
    __free_base(arg1)
    return 

data_42404c += 1

if (*arg1 != 0)
    void* esi_1 = arg1
    
    do
        sub_40172e(*esi_1, arg2 - 1, arg3)
        
        if (arg2 - 1 s> 1)
            __free_base(*esi_1)
        
        *esi_1 = 0
        var_8_1 += 1
        esi_1 = &arg1[var_8_1]
    while (*esi_1 != 0)

int32_t temp0_1 = data_42404c
data_42404c -= 1

if (temp0_1 == 1 && arg3 != 0)
    __free_base(arg1)
