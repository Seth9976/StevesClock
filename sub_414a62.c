// 函数: sub_414a62
// 地址: 0x414a62
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t result = 0

if ((arg2.b & 0x10) != 0)
    result = 0x80

if ((arg2.b & 8) != 0)
    result |= 0x200

if ((arg2.b & 4) != 0)
    result |= 0x400

if ((arg2.b & 2) != 0)
    result |= 0x800

if ((arg2.b & 1) != 0)
    result |= 0x1000

if ((arg2 & 0x80000) != 0)
    result |= 0x100

int32_t ecx_1 = arg2 & 0x300

if (ecx_1 != 0)
    if (ecx_1 == 0x100)
        result |= 0x2000
    else if (ecx_1 == 0x200)
        result |= 0x4000
    else if (ecx_1 == 0x300)
        result |= 0x6000

int32_t edx = arg2 & 0x3000000

if (edx == 0x1000000)
    return result | 0x8040

if (edx == 0x2000000)
    return result | 0x40

if (edx != 0x3000000)
    return result

return result | 0x8000
