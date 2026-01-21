// 函数: sub_40cfbf
// 地址: 0x40cfbf
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_14
sub_4070a4(&var_14, arg3)
void* var_c
char var_8

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != arg1.b)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x7fffffff

char* esi_1 = arg2

if (esi_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x7fffffff

uint32_t result

if (*(var_14 + 0x14) != 0)
    void* ebx_1 = arg1 - esi_1
    int32_t edi
    int32_t var_20_2 = edi
    uint32_t eax_6
    uint32_t eax_8
    
    do
        eax_6 = sub_410f1d(zx.d(*(ebx_1 + esi_1)), &var_14)
        eax_8 = sub_410f1d(zx.d(*esi_1), &var_14)
        esi_1 = &esi_1[1]
        
        if (eax_6 == 0)
            break
    while (eax_6 == eax_8)
    
    result = eax_6 - eax_8
else
    result = sub_40cf86(arg1, esi_1)

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return result
