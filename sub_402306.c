// 函数: sub_402306
// 地址: 0x402306
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edx = data_41eb94
int32_t ecx = data_41c314
int32_t eax = data_41bafc
data_424990 = 0
data_42498c = edx
data_424988 = ecx
data_424984 = eax

if (data_41baec != 0)
    if (data_420f08 == 0)
        if (edx == 0xc)
            edx = 0
            data_42498c = 0
        
        if (ecx == 0xc)
            ecx = 0
            data_424988 = 0
        
        if (eax == 0xc)
            eax = 0
            data_424984 = 0
        
        if (data_41cb84 != 0)
            edx += 0xc
            data_42498c = edx
        
        if (data_41bae0 != 0)
            ecx += 0xc
            data_424988 = ecx
        
        if (data_41eb9c != 0)
            eax += 0xc
            data_424984 = eax
    
    int32_t edx_2 = edx * 0x3c + data_41fdc4
    int32_t ecx_2 = ecx * 0x3c + data_421718
    int32_t eax_2 = eax * 0x3c + data_41eb98
    data_424980 = edx_2
    data_42497c = ecx_2
    data_424978 = eax_2
    bool cond:0_1 = eax_2 s<= ecx_2
    
    if (eax_2 s< ecx_2)
        if (edx_2 s>= eax_2 && edx_2 s< ecx_2)
            data_424990 = 1
        
        cond:0_1 = eax_2 s<= ecx_2
    
    if (not(cond:0_1) && (edx_2 s>= eax_2 || edx_2 s< ecx_2))
        data_424990 = 1

return zx.d(data_424990)
