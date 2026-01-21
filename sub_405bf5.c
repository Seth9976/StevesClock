// 函数: sub_405bf5
// 地址: 0x405bf5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_41fdc4 != 0)
    data_42d478 = 0
    return 

LRESULT eax = sub_402423(data_41cb18)
data_42d474 = eax

if (eax == 0 || data_41fdc4 != 0 || data_420f10 != 0 || data_42d478 != 0)
    return 

sub_403e57()
_strcpy(0x41e390, *(data_41bae4 + (data_42d474 << 2)))
data_42d478 = 1
sub_4054e2(0x41e390, nullptr, "hour1")
sub_4056c0(0x41e390, data_42d474)
sub_4054e2(0x41e390, nullptr, "hour2")
return sub_402d2f() __tailcall
