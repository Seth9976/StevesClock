// 函数: sub_4138b3
// 地址: 0x4138b3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg3 == 0)
    return 0

int32_t edi
int32_t var_18 = edi
void var_14
sub_4070a4(&var_14, arg4)
void* var_10
uint32_t result
void* var_c
char var_8

if (*(var_10 + 8) != 0)
    char* ebx_1 = arg1
    
    if (ebx_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != ebx_1.b)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    char* esi_1 = arg2
    
    if (esi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    uint32_t eax_7
    uint32_t ecx_2
    
    while (true)
        ecx_2 = zx.d(*ebx_1)
        arg3 -= 1
        ebx_1 = &ebx_1[1]
        
        if ((*(zx.d(ecx_2.b) + var_10 + 0x1d) & 4) == 0)
        label_4139a6:
            eax_7 = zx.d(*esi_1)
            esi_1 = &esi_1[1]
            
            if ((*(zx.d(eax_7.b) + var_10 + 0x1d) & 4) != 0)
                if (arg3 != 0)
                    uint32_t edx_1
                    edx_1.b = *esi_1
                    arg3 -= 1
                    
                    if (edx_1.b == 0)
                        eax_7 = 0
                    else
                        eax_7 = zx.d((eax_7 << 8).w) | zx.d(edx_1.b)
                        esi_1 = &esi_1[1]
                else
                    eax_7 = 0
            
            goto label_4139d7
        
        if (arg3 != 0)
            uint32_t eax_6
            eax_6.b = *ebx_1
            
            if (eax_6.b != 0)
                ecx_2 = zx.d((ecx_2 << 8).w) | zx.d(eax_6.b)
                ebx_1 = &ebx_1[1]
            else
                ecx_2 = 0
            
            goto label_4139a6
        
        eax_7 = zx.d(*esi_1)
        ecx_2 = 0
        
        if ((*(eax_7 + var_10 + 0x1d) & 4) == 0)
        label_4139d7:
            
            if (eax_7.w != ecx_2.w)
                break
            
            if (ecx_2.w != 0 && arg3 != 0)
                continue
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0
    
    result = (sbb.d(eax_7, eax_7, eax_7.w u< ecx_2.w) & 2) - 1
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
else
    result = sub_4109c6(arg1, arg2, arg3)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
return result
