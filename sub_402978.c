// 函数: sub_402978
// 地址: 0x402978
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg8 == WS_OVERLAPPED)
    arg8 = 0x50010003

HINSTANCE hInstance = data_421724
arg5 = fconvert.s(float.t(arg5))
arg4 = fconvert.s(float.t(arg4))
long double x87_r6 = fconvert.t(data_41bb08)
int32_t nHeight_1 = sub_407fc0(float.t(arg7) * x87_r6)
long double x87_r5_1 = fconvert.t(data_421f34)
int32_t nWidth = sub_407fc0(float.t(arg6) * x87_r5_1)
int32_t Y = sub_407fc0(x87_r6 * fconvert.t(arg5))
HWND hWnd = CreateWindowExA(arg9, "button", arg1, arg8, sub_407fc0(x87_r5_1 * fconvert.t(arg4)), Y, 
    nWidth, nHeight_1, arg2, arg3, hInstance, nullptr)
HGDIOBJ wParam = data_41fba8

if (wParam == 0)
    wParam = GetStockObject(DEFAULT_GUI_FONT)

SendMessageA(hWnd, 0x30, wParam, 0)

if (arg6 == 0)
    sub_401c5b(arg1, hWnd, nullptr)
    int32_t nHeight = data_42405c
    int32_t nWidth_1 = data_424058 + 0x18
    int32_t Y_1 = sub_407fc0(fconvert.t(arg5) * fconvert.t(data_41bb08))
    MoveWindow(hWnd, sub_407fc0(fconvert.t(arg4) * fconvert.t(data_421f34)), Y_1, nWidth_1, 
        nHeight, 1)

return hWnd
