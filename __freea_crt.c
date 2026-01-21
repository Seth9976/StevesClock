// 函数: __freea_crt
// 地址: 0x407229
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* result = arg1

if (result != 0)
    result -= 8
    
    if (*result == 0xdddd)
        result = __free_base(result)

return result
