// 函数: sub_405a5a
// 地址: 0x405a5a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_41fdc4 != 0xf)
    data_42d460 = 0
    return 

LRESULT eax = sub_402423(data_41baf8)
data_42d45c = eax

if (eax s<= 0 || data_41fdc4 != 0xf || data_420f10 != 0 || data_42d460 != 0)
    return 

sub_403e57()
_strcpy(0x420708, *(data_41bae4 + (data_42d45c << 2)))
data_42d460 = 1
sub_4054e2(0x420708, nullptr, "announcement")
sub_4056c0(0x420708, data_42d45c)
return sub_402d2f() __tailcall
