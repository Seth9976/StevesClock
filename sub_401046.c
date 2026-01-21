// 函数: sub_401046
// 地址: 0x401046
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
char* var_8_1 = nullptr
int32_t ebx
int32_t var_c = ebx
ecx.b = *arg2
char eax = *arg1
ecx.b ^= eax

if (ecx.b == 0)
    ecx.b = eax
    char* eax_1 = arg2
    
    do
        if (ecx.b == 0)
            return 0
        
        var_8_1 = &var_8_1[1]
        eax_1 = &eax_1[1]
        ecx.b = *(arg1 - arg2 + eax_1)
        ebx.b = *eax_1
        ebx.b ^= ecx.b
    while (ebx.b == 0)

ecx.b = *(var_8_1 + arg1)
return (sbb.d(var_8_1, var_8_1, ecx.b u< *(var_8_1 + arg2)) & 0xfffffffe) + 1
