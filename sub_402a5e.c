// 函数: sub_402a5e
// 地址: 0x402a5e
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_421f30 == 0)
    sub_401cf0()

uint32_t result = sub_40d07f(arg1, "PIXELS")
long double x87_r7

if (result != 0)
    RECT rect
    rect.left = 0
    rect.top = 0
    rect.right = 4
    rect.bottom = 8
    MapDialogRect(nullptr, &rect)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(rect.right)
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(rect.bottom)
    result = (eax_7 + (edx_2 & 3)) s>> 2
    data_421f34 = fconvert.s(float.t((eax_3 - edx_1) s>> 1))
    x87_r7 = float.t(result)
else
    x87_r7 = float.t(1)
    data_421f34 = fconvert.s(x87_r7)

data_41bb08 = fconvert.s(x87_r7)
sub_407fad(eax_1 ^ &__saved_ebp)
return result
