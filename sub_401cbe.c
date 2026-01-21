// 函数: sub_401cbe
// 地址: 0x401cbe
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_c_1 = 1
int32_t nMaxCount = GetWindowTextLengthA(arg1) + 1
uint8_t* lpString = sub_401000(nMaxCount, 0x80)
GetWindowTextA(arg1, lpString, nMaxCount)
return lpString
