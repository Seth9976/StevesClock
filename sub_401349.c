// 函数: sub_401349
// 地址: 0x401349
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = 1
char* result = sub_401000(0x800, 0x80)
HANDLE hFindFile = data_41e38c

if (hFindFile != 0)
    if (FindNextFileA(hFindFile, &data_41fdc8) == 0)
        FindClose(data_41e38c)
        data_41e38c = 0
    else
        _strcpy(result, 0x41fdf4)

return result
