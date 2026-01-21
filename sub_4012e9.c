// 函数: sub_4012e9
// 地址: 0x4012e9
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = 1
char* result = sub_401000(_strlen(arg1), 0x80)
HANDLE hFindFile = data_41e38c

if (hFindFile != 0)
    FindClose(hFindFile)

HANDLE eax_1 = FindFirstFileA(arg1, &data_41fdc8)
data_41e38c = eax_1

if (eax_1 == 0xffffffff)
    data_41e38c = 0
else
    _strcpy(result, 0x41fdf4)

return result
