// 函数: sub_40ce0a
// 地址: 0x40ce0a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_8 = edi
int32_t result

for (int32_t i = 0; i u< 0x28; i += 4)
    result = EncodePointer(*(i + &data_41ace8))
    *(i + &data_41ace8) = result

return result
