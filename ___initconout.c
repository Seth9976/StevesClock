// 函数: ___initconout
// 地址: 0x414e14
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_41b2a0 = result
return result
