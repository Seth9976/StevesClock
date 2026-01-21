// 函数: _strnlen
// 地址: 0x40b4ed
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t result = 0

if (arg2 u> 0)
    char* ecx_1 = arg1
    
    while (*ecx_1 != 0)
        result += 1
        ecx_1 = &ecx_1[1]
        
        if (result u>= arg2)
            break

return result
