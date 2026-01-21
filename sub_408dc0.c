// 函数: sub_408dc0
// 地址: 0x408dc0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t esp_1 = *(arg1 - 0x18)
int32_t eax = *(arg1 - 0x24)
*(arg1 - 0x20) = eax

if (*(arg1 - 0x1c) != 0)
    __c_exit()
    return sub_408dda(arg1) __tailcall

*(esp_1 - 4) = eax
_quick_exit()
noreturn
