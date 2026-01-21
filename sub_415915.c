// 函数: sub_415915
// 地址: 0x415915
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void var_14
sub_4070a4(&var_14, arg3)
void* result = arg1
void* var_c
char var_8

if (result == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return nullptr

void* var_10

if (*(var_10 + 8) != 0)
    while (true)
        uint16_t ecx_5 = zx.w(*result)
        
        if (ecx_5 != 0)
            if ((*(zx.d(ecx_5.b) + var_10 + 0x1d) & 4) != 0)
                result += 1
                uint32_t edx_1
                edx_1.b = *result
                
                if (edx_1.b == 0)
                label_4159b6:
                    
                    if (var_8 != 0)
                        *(var_c + 0x70) &= 0xfffffffd
                    
                    return nullptr
                
                if (arg2 == (zx.d(ecx_5) << 8 | zx.d(edx_1.b)))
                    result -= 1
                    break
                
                result += 1
                continue
                continue
            else if (arg2 != zx.d(ecx_5))
                result += 1
                continue
                continue
        
        if (arg2 != zx.d(ecx_5))
            goto label_4159b6
        
        break
else
    result = sub_4061a0(result, arg2.b)

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return result
