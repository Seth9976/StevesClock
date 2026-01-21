// 函数: sub_40806b
// 地址: 0x40806b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = arg1
void* var_30
sub_4070a4(&var_30, arg2)
long double result
void* var_28
char var_24

if (esi != 0)
    while (true)
        void* eax_4 = var_30
        int32_t eax_6
        
        if (*(eax_4 + 0xac) s<= 1)
            eax_6 = zx.d(*(*(eax_4 + 0xc8) + (zx.d(*esi) << 1))) & 8
        else
            eax_6 = sub_40b115(zx.d(*esi), 8, &var_30)
        
        if (eax_6 == 0)
            break
        
        esi = &esi[1]
    
    void var_20
    result = fconvert.t(*(sub_40d217(&var_20, esi, &var_30) + 0x10))
    
    if (var_24 != 0)
        *(var_28 + 0x70) &= 0xfffffffd
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_24 != 0)
        *(var_28 + 0x70) &= 0xfffffffd
    
    result = float.t(0)
sub_407fad(eax_1 ^ &__saved_ebp)
return result
