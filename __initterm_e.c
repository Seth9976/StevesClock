// 函数: __initterm_e
// 地址: 0x408812
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* i = arg1
int32_t result = 0

for (; i u< arg2; i = &i[1])
    if (result != 0)
        break
    
    int32_t ecx_1 = *i
    
    if (ecx_1 != 0)
        result = ecx_1()

return result
