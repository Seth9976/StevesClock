// 函数: sub_4070a4
// 地址: 0x4070a4
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    uint32_t* eax_1 = __getptd()
    arg1[2] = eax_1
    *arg1 = eax_1[0x1b]
    arg1[1] = eax_1[0x1a]
    
    if (*arg1 != data_41acc8 && (eax_1[0x1c] & data_41aa80) == 0)
        *arg1 = sub_40ac28()
    
    if (arg1[1] != data_41a988 && (*(arg1[2] + 0x70) & data_41aa80) == 0)
        arg1[1] = sub_40a4a7()
    
    void* eax_6 = arg1[2]
    
    if ((*(eax_6 + 0x70) & 2) == 0)
        *(eax_6 + 0x70) |= 2
        arg1[3].b = 1

return arg1
