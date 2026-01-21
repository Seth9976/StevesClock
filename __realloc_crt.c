// 函数: __realloc_crt
// 地址: 0x40cee6
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_c = edi
uint32_t dwMilliseconds = 0
int32_t result
uint32_t i

do
    result = _realloc(arg1, arg2)
    
    if (result != 0)
        break
    
    if (arg2 == result)
        break
    
    if (data_42ddcc u<= result)
        break
    
    Sleep(dwMilliseconds)
    i = dwMilliseconds + 0x3e8
    
    if (i u> data_42ddcc)
        i = 0xffffffff
    
    dwMilliseconds = i
while (i != 0xffffffff)
return result
