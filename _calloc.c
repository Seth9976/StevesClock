// 函数: _calloc
// 地址: 0x4067be
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_8 = arg3
var_8 = 0
int32_t result = sub_409b08(arg4, arg5, &var_8)

if (result == 0 && var_8 != result && __errno() != 0)
    void* eax_1 = __errno()
    *eax_1 = var_8

return result
