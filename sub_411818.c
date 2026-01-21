// 函数: sub_411818
// 地址: 0x411818
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax_1 = arg3 & 0xfff7ffff
int32_t mxcsr
int16_t x87control

if ((arg2 & eax_1 & 0xfcf0fce0) == 0)
    if (arg1 == 0)
        sub_414b02(mxcsr, x87control, arg2, eax_1)
    else
        *arg1 = sub_414b02(mxcsr, x87control, arg2, eax_1)
    
    return 0

if (arg1 != 0)
    *arg1 = sub_414b02(mxcsr, x87control, 0, 0)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x16
