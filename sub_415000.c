// 函数: sub_415000
// 地址: 0x415000
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

HANDLE hFile = sub_4127e4(arg1)

if (hFile == 0xffffffff)
    *__errno() = 9
    return 0xffffffff

int32_t edi
int32_t var_c_1 = edi
uint32_t result_1 = SetFilePointer(hFile, arg2, nullptr, arg3)
enum WIN32_ERROR eax_1

if (result_1 != 0xffffffff)
    eax_1 = NO_ERROR
else
    eax_1 = GetLastError()

uint32_t result

if (eax_1 == NO_ERROR)
    char* eax_5 = (&data_42ea00)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4
    *eax_5 &= 0xfd
    result = result_1
else
    ___acrt_errno_map_os_error(eax_1)
    result = 0xffffffff

return result
