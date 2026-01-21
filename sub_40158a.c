// 函数: sub_40158a
// 地址: 0x40158a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* var_8_1 = nullptr
int32_t i_1 = arg1
int32_t i = i_1

if (i_1 s> 0)
    int32_t* esi_1 = &arg1
    
    do
        esi_1 = &esi_1[1]
        char* eax_1 = *esi_1
        i -= 1
        
        if (eax_1 != 0)
            var_8_1 += _strlen(eax_1)
    while (i s> 0)

int32_t var_18_2 = 1
char* result = sub_401000(var_8_1, 0x80)

if (i_1 s> 0)
    int32_t* esi_2 = &arg1
    
    do
        esi_2 = &esi_2[1]
        char* eax_3 = *esi_2
        i_1 -= 1
        
        if (eax_3 != 0)
            _strcat(result, eax_3)
    while (i_1 s> 0)

return result
