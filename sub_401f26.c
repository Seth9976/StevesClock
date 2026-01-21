// 函数: sub_401f26
// 地址: 0x401f26
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax
int32_t eax_2
uint32_t ecx
uint32_t ecx_1
int32_t edx
int32_t edx_1
eax_2, ecx_1, edx_1 = sub_407fc0(__ismbcupper(sub_401449(eax, edx, ecx, 1, 0)))
data_41eb94 = eax_2

if (data_420f08 == 0)
    ecx_1 = 0xc
    
    if (eax_2 s>= 0xc)
        eax_2 -= 0xc
        data_41cb84 = 1
        data_41eb94 = eax_2
    else
        data_41cb84 = 0
    
    if (eax_2 == 0)
        data_41eb94 = 0xc

int32_t eax_4
uint32_t ecx_2
int32_t edx_2
eax_4, ecx_2, edx_2 = sub_407fc0(__ismbcupper(sub_401449(eax_2, edx_1, ecx_1, 2, 0)))
data_41fdc4 = eax_4
int32_t result = sub_407fc0(__ismbcupper(sub_401449(eax_4, edx_2, ecx_2, 3, 0)))
data_420f10 = result
return result
