// 函数: _realloc
// 地址: 0x408129
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 == 0)
    return sub_40b22c(arg2)

uint32_t dwBytes = arg2

if (dwBytes == 0)
    __free_base(arg1)
    return 0

int32_t edi
int32_t var_c_1 = edi
int32_t result

while (true)
    if (dwBytes u<= 0xffffffe0)
        if (dwBytes == 0)
            dwBytes += 1
        
        int32_t result_1 = HeapReAlloc(data_42dd98, HEAP_NONE, arg1, dwBytes)
        
        if (result_1 != 0)
            result = result_1
            break
        
        if (data_42e0f8 == result_1)
            void* eax_7 = __errno()
            *eax_7 = sub_409014(GetLastError())
            result = result_1
            break
        
        if (__callnewh(dwBytes) == 0)
            void* eax_4 = __errno()
            *eax_4 = sub_409014(GetLastError())
        else
            continue
    else
        __callnewh(dwBytes)
        *__errno() = 0xc
    
    result = 0
    break

return result
