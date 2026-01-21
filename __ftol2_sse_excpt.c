// 函数: __ftol2_sse_excpt
// 地址: 0x407fdc
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_42e9d8 == 0)
    return __ftol2(arg3) __tailcall

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)

if ((temp0 & 0x7f) != 0x7f)
    return __ftol2(arg3) __tailcall

int16_t var_4
var_4.d = arg1
return int.d(fconvert.t(fconvert.d(arg3)))
