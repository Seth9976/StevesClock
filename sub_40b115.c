// 函数: sub_40b115
// 地址: 0x40b115
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_1c
sub_4070a4(&var_1c, arg3)
int32_t ebx = arg1
void* var_14
char var_10
uint32_t eax_3

if (ebx + 1 u> 0x100)
    arg1 = ebx s>> 8
    uint8_t var_c
    int32_t ecx_2
    
    if (sub_40d0c6(arg1.b, &var_1c) == 0)
        var_c = ebx.b
        char var_b_2 = 0
        ecx_2 = 1
    else
        int32_t eax_6
        eax_6.b = arg1.b
        var_c = eax_6.b
        char var_b_1 = ebx.b
        char var_a_1 = 0
        ecx_2 = 2
    
    void* eax_7 = var_1c
    int32_t var_24_2 = 1
    uint16_t var_8
    BOOL eax_8 = sub_410459(&var_1c, 1, &var_c, ecx_2, &var_8, *(eax_7 + 4), *(eax_7 + 0x14))
    
    if (eax_8 == 0)
        if (var_10 != eax_8.b)
            *(var_14 + 0x70) &= 0xfffffffd
        
        return 0
    
    eax_3 = zx.d(var_8)
else
    eax_3 = zx.d(*(*(var_1c + 0xc8) + (ebx << 1)))

if (var_10 != 0)
    *(var_14 + 0x70) &= 0xfffffffd

return eax_3 & arg2
