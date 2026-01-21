// 函数: __strupr
// 地址: 0x4073fb
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_42ddc8 != 0)
    sub_4073c7(arg1, 0xffffffff, nullptr)
    return arg1

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0

char* edx_1 = arg1

if (*arg1 == 0)
    return arg1

do
    char ecx = *edx_1
    
    if (ecx s>= 0x41 && ecx s<= 0x5a)
        *edx_1 = ecx + 0x20
    
    edx_1 = &edx_1[1]
while (*edx_1 != 0)

return arg1
