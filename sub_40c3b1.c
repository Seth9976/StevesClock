// 函数: sub_40c3b1
// 地址: 0x40c3b1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_14
sub_4070a4(&var_14, arg2)
char* eax = arg1
char i = *eax
void* esi = var_14

if (i != 0)
    char* edx_2
    edx_2.b = ***(esi + 0xbc)
    
    while (i != edx_2.b)
        eax = &eax[1]
        i = *eax
        
        if (i == 0)
            break

void* result = &eax[1]

if (*eax != 0)
    while (true)
        i = *result
        
        if (i == 0)
            break
        
        if (i == 0x65)
            break
        
        if (i == 0x45)
            break
        
        result += 1
    
    void* result_2 = result
    
    do
        result -= 1
    while (*result == 0x30)
    
    int32_t ebx
    ebx.b = *result
    
    if (ebx.b == ***(esi + 0xbc))
        result -= 1
    
    int32_t ecx_2
    
    do
        ecx_2.b = *result_2
        result += 1
        result_2 += 1
        *result = ecx_2.b
    while (ecx_2.b != 0)

char var_8

if (var_8 != 0)
    void* result_1
    result = result_1
    *(result + 0x70) &= 0xfffffffd

return result
