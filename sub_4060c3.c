// 函数: sub_4060c3
// 地址: 0x4060c3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax
int32_t ecx
int32_t edx
data_41cb48 = _calloc(eax, edx, ecx, 0x101, 1)
sub_4015f2()
data_41cb48 = &data_423f48
_strcpy(0x41d388, "frmClock")
sub_402a5e(&data_4162eb)
sub_401cf0()
data_421724 = arg1
data_41cb64 = LoadIconA(nullptr, 0x7f05)
int80_t result = sub_402af6(0x41d388, sub_405e9c)
sub_404cb7()
MSG msg

while (GetMessageA(&msg, nullptr, 0, 0) != 0)
    HWND eax_4 = GetActiveWindow()
    
    if (IsWindow(eax_4) != 0 && IsDialogMessageA(eax_4, &msg) != 0)
        continue
    
    TranslateMessage(&msg)
    DispatchMessageA(&msg)

return result
