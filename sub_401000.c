// 函数: sub_401000
// 地址: 0x401000
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax_1 = (data_423f40 + 1) & 0x7ff
data_423f40 = eax_1
int32_t eax_2 = *((eax_1 << 2) + &data_421f40)
int32_t ecx
int32_t edx

if (eax_2 != 0)
    edx = __free_base(eax_2)
    *((eax_1 << 2) + &data_421f40) = 0
    ecx = eax_2

if (arg2 != 0)
    *((eax_1 << 2) + &data_421f40) = _calloc(arg1 + 0x80, edx, ecx, arg1 + 0x80, 1)

return *((eax_1 << 2) + &data_421f40)
