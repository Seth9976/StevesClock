// 函数: sub_401e30
// 地址: 0x401e30
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* lpstrCommand

if (data_41eba0 == 0)
    char* var_10_2 = &data_41eba8
    char const* const var_14_2 = "Play "
    lpstrCommand = sub_40158a(2)
else
    char const* const var_10_1 = " wait"
    char* var_14_1 = &data_41eba8
    char const* const var_18_1 = "Play "
    lpstrCommand = sub_40158a(3)

void* const result = mciSendStringA(lpstrCommand, &data_4162eb, 0, nullptr)
data_424064 = result
return result
