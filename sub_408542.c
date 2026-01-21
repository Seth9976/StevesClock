// 函数: sub_408542
// 地址: 0x408542
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
