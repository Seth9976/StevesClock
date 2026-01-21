// 函数: sub_401a6d
// 地址: 0x401a6d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg6 == ~WS_OVERLAPPED)
    arg6 = 0x80cf0000

HINSTANCE hInstance = data_421724
long double x87_r6 = fconvert.t(data_41bb08)
int32_t nHeight = sub_407fc0(float.t(arg5 + 0xc) * x87_r6)
long double x87_r5_1 = fconvert.t(data_421f34)
int32_t nWidth = sub_407fc0(float.t(arg4 + 4) * x87_r5_1)
int32_t Y = sub_407fc0(x87_r6 * float.t(arg3))
HWND hWnd = CreateWindowExA(arg7, 0x41d388, arg1, arg6, sub_407fc0(x87_r5_1 * float.t(arg2)), Y, 
    nWidth, nHeight, nullptr, nullptr, hInstance, nullptr)
WPARAM wParam = data_41fba8

if (wParam == 0)
    wParam = GetStockObject(DEFAULT_GUI_FONT)

SendMessageA(hWnd, 0x30, wParam, 0)
return hWnd
