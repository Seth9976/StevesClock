// 函数: sub_40e27b
// 地址: 0x40e27b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_8 = edi
int32_t i = 0
int32_t edi_1 = 0x42e100

do
    if (*((i << 3) + &data_41ad14) == 1)
        *((i << 3) + &data_41ad10) = edi_1
        edi_1 += 0x18
        
        if (InitializeCriticalSectionAndSpinCount(*((i << 3) + &data_41ad10), 0xfa0) == 0)
            *((i << 3) + &data_41ad10) = 0
            return 0
    
    i += 1
while (i s< 0x24)

return 1
