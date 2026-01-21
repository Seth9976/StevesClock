// 函数: sub_4016f5
// 地址: 0x4016f5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

BOOL result

while (true)
    MSG msg
    result = PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)
    
    if (result == 0)
        break
    
    TranslateMessage(&msg)
    DispatchMessageA(&msg)

return result
