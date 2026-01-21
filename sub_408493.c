// 函数: sub_408493
// 地址: 0x408493
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 u< &data_41a010 || arg1 u> 0x41a270)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = sub_40e3f5(((arg1 - &data_41a010) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
