// 函数: sub_415b8b
// 地址: 0x415b8b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_42ddc8 != 0)
    sub_415b56(arg1, 0xffffffff, nullptr)
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
    
    if (ecx s>= 0x61 && ecx s<= 0x7a)
        *edx_1 = ecx - 0x20
    
    edx_1 = &edx_1[1]
while (*edx_1 != 0)

return arg1
