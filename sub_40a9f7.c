// 函数: sub_40a9f7
// 地址: 0x40a9f7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_8 = edi
void* result = arg1

if (result != 0)
    InterlockedDecrement(result)
    int32_t eax_1 = *(result + 0xb0)
    
    if (eax_1 != 0)
        InterlockedDecrement(eax_1)
    
    int32_t eax_2 = *(result + 0xb8)
    
    if (eax_2 != 0)
        InterlockedDecrement(eax_2)
    
    int32_t eax_3 = *(result + 0xb4)
    
    if (eax_3 != 0)
        InterlockedDecrement(eax_3)
    
    int32_t eax_4 = *(result + 0xc0)
    
    if (eax_4 != 0)
        InterlockedDecrement(eax_4)
    
    void* ebx_1 = result + 0x50
    arg1 = 6
    void* i
    
    do
        if (*(ebx_1 - 8) != &data_41aa84)
            int32_t eax_5 = *ebx_1
            
            if (eax_5 != 0)
                InterlockedDecrement(eax_5)
        
        if (*(ebx_1 - 4) != 0)
            int32_t eax_6 = *(ebx_1 + 4)
            
            if (eax_6 != 0)
                InterlockedDecrement(eax_6)
        
        ebx_1 += 0x10
        i = arg1
        arg1 -= 1
    while (i != 1)
    InterlockedDecrement(*(result + 0xd4) + 0xb4)

return result
