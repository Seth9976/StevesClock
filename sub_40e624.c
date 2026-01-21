// 函数: sub_40e624
// 地址: 0x40e624
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char result = (arg1[3]).b

if ((result & 0x83) != 0 && (result & 8) != 0)
    __free_base(arg1[2])
    arg1[3] &= 0xfffffbf7
    result = 0
    *arg1 = 0
    arg1[2] = 0
    arg1[1] = 0

return result
