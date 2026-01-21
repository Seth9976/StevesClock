// 函数: __unlock_file
// 地址: 0x408506
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 u< &data_41a010 || arg1 u> 0x41a270)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - &data_41a010) s>> 5) + 0x10)
