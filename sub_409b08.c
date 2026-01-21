// 函数: sub_409b08
// 地址: 0x409b08
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 != 0 && divu.dp.d(0:0xffffffe0, arg1) u< arg2)
    *__errno() = 0xc
    return 0

uint32_t dwBytes = arg1 * arg2

if (dwBytes == 0)
    dwBytes += 1

int32_t i

do
    int32_t result = 0
    
    if (dwBytes u<= 0xffffffe0)
        result = HeapAlloc(data_42dd98, HEAP_ZERO_MEMORY, dwBytes)
    
    if (dwBytes u<= 0xffffffe0 && result != 0)
        return result
    
    if (data_42e0f8 == 0)
        if (arg3 != 0)
            *arg3 = 0xc
        
        return result
    
    i = __callnewh(dwBytes)
while (i != 0)

if (arg3 != 0)
    *arg3 = 0xc

return 0
