// 函数: sub_40a54b
// 地址: 0x40a54b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_14
sub_4070a4(&var_14, nullptr)
data_42dd9c = 0
void* var_c
char var_8
uint32_t eax_1

if (arg1 == 0xfffffffe)
    data_42dd9c = 1
    eax_1 = GetOEMCP()
else if (arg1 != 0xfffffffd)
    if (arg1 != 0xfffffffc)
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return arg1
    
    eax_1 = *(var_14 + 4)
    data_42dd9c = 1
else
    data_42dd9c = 1
    eax_1 = GetACP()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return eax_1
