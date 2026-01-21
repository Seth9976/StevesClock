// 函数: sub_40823e
// 地址: 0x40823e
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 == 0)
    return sub_408286(arg1)

if (sub_4081d6(arg1) != 0)
    return 0xffffffff

if ((arg1[3] & 0x4000) == 0)
    return 0

enum WIN32_ERROR eax_3 = sub_40e1a2(__fileno(arg1))
int32_t eax_4 = neg.d(eax_3)
return sbb.d(eax_4, eax_4, eax_3 != NO_ERROR)
