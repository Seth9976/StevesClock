// 函数: sub_401c5b
// 地址: 0x401c5b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

HDC eax = GetDC(arg2)
LRESULT eax_1 = arg3

if (eax_1 == 0)
    eax_1 = SendMessageA(arg2, 0x31, eax_1, eax_1)

HGDIOBJ h = SelectObject(eax, eax_1)
GetTextExtentPoint32A(eax, arg1, _strlen(arg1), &data_424058)
SelectObject(eax, h)
ReleaseDC(arg2, eax)
return &data_424058
