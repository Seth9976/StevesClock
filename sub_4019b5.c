// 函数: sub_4019b5
// 地址: 0x4019b5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp

if (arg2 == 0)
label_401a15:
    data_424054 = fconvert.s(fconvert.t(data_421f34))
    data_424050 = fconvert.s(fconvert.t(data_41bb08))
    RECT rect
    rect.left = 0
    rect.top = 0
    rect.right = 4
    rect.bottom = 8
    MapDialogRect(arg1, &rect)
    data_421f34 = fconvert.s(float.t(rect.right) * fconvert.t(0.25))
    data_41bb08 = fconvert.s(float.t(rect.bottom) * fconvert.t(0.125))
else
    long double x87_r7_1 = fconvert.t(data_424054)
    long double x87_r5_1 = float.t(0)
    x87_r5_1 - x87_r7_1
    int32_t eax_1
    eax_1.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        goto label_401a15
    
    data_421f34 = fconvert.s(x87_r5_1)
    data_41bb08 = fconvert.s(fconvert.t(data_424050))
    data_424050 = fconvert.s(x87_r7_1)
    data_424054 = fconvert.s(x87_r7_1)

sub_407fad(var_8 ^ &__saved_ebp)
