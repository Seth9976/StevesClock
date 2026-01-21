// 函数: sub_401fd1
// 地址: 0x401fd1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_41cb34 == 0)
    return sub_401fab() __tailcall

Shell_NotifyIconA(NIM_DELETE, &data_41fbb0)
RedrawWindow(data_41eb90, nullptr, nullptr, 0)
ShowWindow(data_41eb90, SW_SHOW)
HWND result = SetActiveWindow(data_41eb90)
data_41cb34 = 0
return result
