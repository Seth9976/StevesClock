// 函数: sub_401cf0
// 地址: 0x401cf0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (data_421f30 == 0)
    RECT rect
    rect.left = 0
    rect.top = 0
    rect.right = 4
    rect.bottom = 8
    MapDialogRect(nullptr, &rect)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(rect.right)
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(rect.bottom)
    data_421f34 = fconvert.s(float.t((eax_2 - edx_1) s>> 1))
    data_41bb08 = fconvert.s(float.t((eax_6 + (edx_2 & 3)) s>> 2))
    data_421724 = GetModuleHandleA(nullptr)
    data_41cb44 = 0
    data_41cb4c = 0x30
    data_41cb50 = 0x23
    data_41cb58 = 0
    data_41cb5c = 0
    data_41cb64 = LoadIconA(nullptr, 0x7f05)
    data_41cb68 = LoadCursorA(nullptr, 0x7f00)
    data_41cb6c = 0x10
    data_41cb70 = 0
    data_41cb78 = 0
    struct INITCOMMONCONTROLSEX picce
    picce.dwSize = 8
    picce.dwICC = 0x33f
    result = InitCommonControlsEx(&picce)
    data_421f30 = 1

sub_407fad(result_1 ^ &__saved_ebp)
return result
