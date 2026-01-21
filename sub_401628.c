// 函数: sub_401628
// 地址: 0x401628
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* eax = nullptr

if (*arg2 != 0)
    int32_t ecx_1 = data_41cb48
    
    do
        int32_t edx_1
        edx_1.b = eax[arg1]
        
        if (edx_1.b == 0)
            return 0
        
        uint32_t edx_2
        edx_2.b = *(zx.d(edx_1.b) + ecx_1)
        
        if (edx_2.b != *(zx.d(*(eax + arg2)) + ecx_1))
            arg1 += 1
            eax = 0xffffffff
        
        eax = &eax[1]
    while (*(eax + arg2) != 0)

return arg1
