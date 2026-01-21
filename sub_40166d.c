// 函数: sub_40166d
// 地址: 0x40166d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* eax = nullptr

if (*arg2 != 0)
    do
        int32_t ecx_1
        ecx_1.b = eax[arg1]
        
        if (ecx_1.b == 0)
            return 0
        
        if (ecx_1.b != *(eax + arg2))
            arg1 += 1
            eax = 0xffffffff
        
        eax = &eax[1]
    while (*(eax + arg2) != 0)

return arg1
