// 函数: sub_40188d
// 地址: 0x40188d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL result

if (arg2 != 0)
    RECT rect_1
    GetWindowRect(arg1, &rect_1)
    RECT rect_2
    GetWindowRect(arg2, &rect_2)
    int32_t nWidth = rect_1.right - rect_1.left
    int32_t eax_21
    int32_t edx_2
    edx_2:eax_21 = sx.q(rect_2.right - rect_2.left - nWidth)
    int32_t X = ((eax_21 - edx_2) s>> 1) + rect_2.left
    
    if (arg3 != 0)
        GetWindowRect(arg3, &rect_2)
    
    int32_t nHeight = rect_1.bottom - rect_1.top
    int32_t eax_28
    int32_t edx_3
    edx_3:eax_28 = sx.q(rect_2.bottom - rect_2.top - nHeight)
    int32_t Y = ((eax_28 - edx_3) s>> 1) + rect_2.top
    int32_t eax_30 = GetSystemMetrics(SM_CXSCREEN)
    int32_t eax_31 = GetSystemMetrics(SM_CYSCREEN)
    
    if (X s< 0)
        X = 0
    
    if (Y s< 0)
        Y = 0
    
    if (X + nWidth s> eax_30)
        X = eax_30 - nWidth
    
    if (Y + nHeight s> eax_31)
        Y = eax_31 - nHeight
    
    result = MoveWindow(arg1, X, Y, nWidth, nHeight, 0)
else
    int32_t pvParam
    SystemParametersInfoA(SPI_GETWORKAREA, arg2, &pvParam, arg2)
    RECT rect
    GetWindowRect(arg1, &rect)
    int32_t var_24
    int32_t var_1c
    int32_t eax_6
    int32_t edx
    edx:eax_6 = sx.q(rect.top - rect.bottom - var_24 + var_1c)
    int32_t var_20
    int32_t eax_14
    int32_t edx_1
    edx_1:eax_14 = sx.q(rect.left - rect.right - pvParam + var_20)
    result = SetWindowPos(arg1, nullptr, ((eax_14 - edx_1) s>> 1) + pvParam, 
        ((eax_6 - edx) s>> 1) + var_24, 0, 0, SWP_NOSIZE)

sub_407fad(eax_1 ^ &__saved_ebp)
return result
