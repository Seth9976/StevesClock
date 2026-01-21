// 函数: sub_40add8
// 地址: 0x40add8
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_8 = edi
enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_40acb3()(data_41acd4)

if (result == 0)
    result = __calloc_crt(1, 0x214)
    
    if (result != 0)
        if (DecodePointer(data_42ddc0)(data_41acd4, result) == 0)
            __free_base(result)
            result = nullptr
        else
            sub_40ad24(result, 0)
            uint32_t eax_5 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_5

SetLastError(dwErrCode)
return result
