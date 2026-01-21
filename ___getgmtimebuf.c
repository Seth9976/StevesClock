// 函数: ___getgmtimebuf
// 地址: 0x40918a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t* eax = sub_40add8()

if (eax != 0)
    int32_t eax_3
    
    if (eax[0x11] == 0)
        eax_3 = sub_40ce55(0x24)
        eax[0x11] = eax_3
    
    if (eax[0x11] != 0 || eax_3 != 0)
        return eax[0x11]

*__errno() = 0xc
return 0
