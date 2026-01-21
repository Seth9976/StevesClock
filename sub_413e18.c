// 函数: sub_413e18
// 地址: 0x413e18
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void var_14
sub_4070a4(&var_14, arg4)
void* var_c
char var_8

if (arg3 == 0)
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0

if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return 0x7fffffff

if (arg3 u<= 0x7fffffff)
    void* var_10
    uint32_t result
    
    if (*(var_10 + 8) == 0)
        result = sub_41540d(arg1, arg2, arg3, arg4)
    label_413ee9:
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return result
    
    enum COMPARESTRING_RESULT eax_6 =
        sub_4153cb(&var_14, *(var_10 + 0xc), 0x1001, arg1, arg3, arg2, arg3, *(var_10 + 4))
    
    if (eax_6 != 0)
        result = eax_6 - 2
        goto label_413ee9
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return 0x7fffffff
