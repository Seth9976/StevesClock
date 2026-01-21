// 函数: sub_413fa7
// 地址: 0x413fa7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_20 = edi

if (arg3 == 0)
    return 0

void* var_14
sub_4070a4(&var_14, arg4)
void* var_c
char var_8

if (arg1 != 0)
    char* esi_1 = arg2
    
    if (esi_1 != 0)
        if (arg3 u> 0x7fffffff)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            
            if (var_8 != 0)
                *(var_c + 0x70) &= 0xfffffffd
            
            return 0x7fffffff
        
        uint32_t result
        
        if (*(var_14 + 0x14) != 0)
            void* ebx_2 = arg1 - esi_1
            uint32_t eax_6
            uint32_t eax_8
            
            do
                eax_6 = sub_410f1d(zx.d(*(ebx_2 + esi_1)), &var_14)
                eax_8 = sub_410f1d(zx.d(*esi_1), &var_14)
                esi_1 = &esi_1[1]
                int32_t temp0_1 = arg3
                arg3 -= 1
                
                if (temp0_1 == 1)
                    break
                
                if (eax_6 == 0)
                    break
            while (eax_6 == eax_8)
            
            result = eax_6 - eax_8
        else
            result = ___ascii_strnicmp(arg1, esi_1, arg3)
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result

*__errno() = 0x16
__invalid_parameter_noinfo()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0x7fffffff
