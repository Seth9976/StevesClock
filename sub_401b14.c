// 函数: sub_401b14
// 地址: 0x401b14
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg8 == WS_OVERLAPPED)
    arg8 = 0x50010080

if (arg9 == ~WS_EX_LEFT)
    arg9 = WS_EX_CLIENTEDGE

long double x87_r6 = fconvert.t(data_41bb08)
HINSTANCE hInstance = data_421724
int32_t nHeight = sub_407fc0(float.t(arg7) * x87_r6)
long double x87_r5_1 = fconvert.t(data_421f34)
int32_t nWidth = sub_407fc0(float.t(arg6) * x87_r5_1)
int32_t Y = sub_407fc0(x87_r6 * float.t(arg5))
HWND hWnd = CreateWindowExA(arg9, "edit", arg1, arg8, sub_407fc0(x87_r5_1 * float.t(arg4)), Y, 
    nWidth, nHeight, arg2, arg3, hInstance, nullptr)
HGDIOBJ wParam = data_41fba8

if (wParam == 0)
    wParam = GetStockObject(DEFAULT_GUI_FONT)

SendMessageA(hWnd, 0x30, wParam, 0)
return hWnd
