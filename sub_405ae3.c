// 函数: sub_405ae3
// 地址: 0x405ae3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_41fdc4 != 0x1e)
    data_42d468 = 0
    return 

LRESULT eax = sub_402423(data_41bb00)
data_42d464 = eax

if (eax s<= 0 || data_41fdc4 != 0x1e || data_420f10 != 0 || data_42d468 != 0)
    return 

sub_403e57()
_strcpy(0x421728, *(data_41bae4 + (data_42d464 << 2)))
data_42d468 = 1
sub_4054e2(0x421728, nullptr, "announcement")
sub_4056c0(0x421728, data_42d464)
return sub_402d2f() __tailcall
