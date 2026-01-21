// 函数: sub_4158c3
// 地址: 0x4158c3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 == 0)
    return nullptr

int32_t edi
int32_t var_10_1 = edi
void* esi_1 = _strlen(arg1) + 1
char* result_1 = sub_40b22c(esi_1)
char* result

if (result_1 == 0)
    result = nullptr
else
    if (sub_40b1cd(result_1, esi_1, arg1) != 0)
        int32_t var_24
        __builtin_memset(&var_24, 0, 0x14)
        sub_408fb2()
        noreturn
    
    result = result_1

return result
