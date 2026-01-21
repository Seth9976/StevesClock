// 函数: sub_40b22c
// 地址: 0x40b22c
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 u> 0xffffffe0)
    __callnewh(arg1)
    *__errno() = 0xc
    return 0

int32_t edi
int32_t var_10_1 = edi
int32_t result

while (true)
    if (data_42dd98 == 0)
        __FF_MSGBANNER()
        sub_40ebc2(0x1e)
        __endthreadex(0xff)
        noreturn
    
    uint32_t dwBytes
    
    dwBytes = arg1 == 0 ? 1 : arg1
    
    result = HeapAlloc(data_42dd98, HEAP_NONE, dwBytes)
    
    if (result != 0)
        break
    
    if (data_42e0f8 == result)
        *__errno() = 0xc
    else if (__callnewh(arg1) != 0)
        continue
    
    *__errno() = 0xc
    break

return result
