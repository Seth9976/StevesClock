// 函数: __ftol2
// 地址: 0x407ff6
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int64_t var_20 = int.q(arg1)
long double x87_r7_1 = float.t(var_20)
float edx = fconvert.s(arg1)
int32_t result = var_20.d

if (result == 0)
    edx = var_20:4.d

if (result != 0 || (edx & 0x7fffffff) != 0)
    long double x87_r0 = arg1 - x87_r7_1
    
    if (edx s>= 0)
        result = sbb.d(result, 0, fconvert.s(x87_r0) u>= 0x80000001)
        unimplemented  {sbb eax, 0x0}
    else
        result = adc.d(result, 0, (fconvert.s(x87_r0) ^ 0x80000000) u>= 0x80000001)
else
    float var_18_1 = fconvert.s(x87_r7_1)
    float var_18_2 = fconvert.s(arg1)

return result
