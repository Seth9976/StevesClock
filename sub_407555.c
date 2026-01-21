// 函数: sub_407555
// 地址: 0x407555
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* esi = arg2

while (*arg1 != 0)
    arg2.b = *esi
    
    if (arg2.b == 0)
        break
    
    **arg3 = arg2.b
    *arg3 += 1
    esi = &esi[1]
    *arg1 -= 1
