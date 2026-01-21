// 函数: sub_40676d
// 地址: 0x40676d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

FILETIME systemTimeAsFileTime
systemTimeAsFileTime.dwHighDateTime = arg3
systemTimeAsFileTime.dwLowDateTime = arg3
GetSystemTimeAsFileTime(&systemTimeAsFileTime)
uint32_t dwLowDateTime = systemTimeAsFileTime.dwLowDateTime
uint32_t result
int32_t edx
result, edx = __aulldiv(dwLowDateTime + 0x2ac18000, 
    adc.d(systemTimeAsFileTime.dwHighDateTime, 0xfe624e21, dwLowDateTime u>= 0xd53e8000), 0x989680, 
    0)

if (edx s>= 7 && (edx s> 7 || result u> 0x93406fff))
    result = 0xffffffff
    edx = 0xffffffff

if (arg4 != 0)
    *arg4 = result
    arg4[1] = edx

return result
