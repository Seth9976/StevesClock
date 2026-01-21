// 函数: sub_411106
// 地址: 0x411106
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_38 = edi
void var_28
sub_4070a4(&var_28, arg3)
char* var_2c
void var_14
char eax_2 = sub_40d2be(&var_14, &var_2c, arg2, 0, 0, 0, 0, &var_28)
int32_t eax_3 = sub_411e36(&var_14, arg1)
int32_t result
void* var_20
char var_1c

if ((eax_2 & 3) == 0)
    if (eax_3 != 1)
        if (eax_3 != 2)
            goto label_411194
        
        goto label_411178
    
label_411162:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 3
else if ((eax_2 & 1) != 0)
label_411178:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 4
else
    if ((eax_2 & 2) != 0)
        goto label_411162
    
label_411194:
    
    if (var_1c != 0)
        *(var_20 + 0x70) &= 0xfffffffd
    
    result = 0
sub_407fad(eax_1 ^ &__saved_ebp)
return result
