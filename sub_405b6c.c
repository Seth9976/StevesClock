// 函数: sub_405b6c
// 地址: 0x405b6c
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_41fdc4 != 0x2d)
    data_42d470 = 0
    return 

LRESULT eax = sub_402423(data_41cb2c)
data_42d46c = eax

if (eax == 0 || data_41fdc4 != 0x2d || data_420f10 != 0 || data_42d470 != 0)
    return 

sub_403e57()
_strcpy(0x420f18, *(data_41bae4 + (data_42d46c << 2)))
data_42d470 = 1
sub_4054e2(0x420f18, nullptr, "announcement")
sub_4056c0(0x420f18, data_42d46c)
return sub_402d2f() __tailcall
