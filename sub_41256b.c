// 函数: sub_41256b
// 地址: 0x41256b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t numberOfCharsWritten = arg1

if (data_41b2a0 == 0xfffffffe)
    ___initconout()

HANDLE hConsoleOutput = data_41b2a0
int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
