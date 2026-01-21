// 函数: ___acrt_errno_map_os_error
// 地址: 0x40907c
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

*___doserrno() = arg1
int32_t eax_1 = sub_409014(arg1)
void* result = __errno()
*result = eax_1
return result
