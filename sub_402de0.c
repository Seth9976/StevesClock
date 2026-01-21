// 函数: sub_402de0
// 地址: 0x402de0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t eax = IsDlgButtonChecked(data_41eb90, 0x69)
int32_t var_c_1 = data_421720
data_420f08 = eax
_strcpy(0x425ac8, sub_4020d5(data_421f2c, data_420f0c, var_c_1, 1))
SetWindowTextA(data_42171c, 0x425ac8)
_strcpy(0x41f3a8, sub_4020d5(data_41c314, data_421718, data_41bae0, 1))
sub_40226d(0x425ac8, &data_41c314, &data_421718, &data_41bae0)
_strcpy(0x41cb88, sub_4020d5(data_41bafc, data_41eb98, data_41eb9c, 1))
return sub_40226d(0x425ac8, &data_41bafc, &data_41eb98, &data_41eb9c)
