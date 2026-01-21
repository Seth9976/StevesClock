// 函数: _strlen
// 地址: 0x406df0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* ecx = arg1

while ((ecx & 3) != 0)
    int32_t eax
    eax.b = *ecx
    ecx = &ecx[1]
    
    if (eax.b == 0)
        return &ecx[0xffffffff] - arg1

while (true)
    int32_t eax_2 = *ecx
    ecx = &ecx[4]
    
    if (((eax_2 ^ 0xffffffff ^ (0x7efefeff + eax_2)) & 0x81010100) != 0)
        int32_t eax_5 = *(ecx - 4)
        
        if (eax_5.b == 0)
            return &ecx[0xfffffffc] - arg1
        
        if (eax_5:1.b == 0)
            return &ecx[0xfffffffd] - arg1
        
        if ((eax_5 & 0xff0000) == 0)
            return &ecx[0xfffffffe] - arg1
        
        if ((eax_5 & 0xff000000) == 0)
            break

return &ecx[0xffffffff] - arg1
