// 函数: sub_404cb7
// 地址: 0x404cb7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

_strcpy(0x41c318, "Steve's Clock 2.06")
data_41cb80 = 0x50210103
data_41cb1c = 0x50000102
_strcpy(0x42b410, sub_4011f1(1))

if (sub_4017a3("frmClock") != 0)
    HWND hWnd_1 = FindWindowA(nullptr, "frmClock")
    data_42b408 = hWnd_1
    
    if (sub_401046(0x42b410, "/init") != 0)
        RedrawWindow(data_41eb90, nullptr, nullptr, 0)
        ShowWindow(data_41eb90, SW_SHOW)
        SetFocus(data_41eb90)
    else
        SendMessageA(hWnd_1, 0x111, 0, 0x76)
    
    ExitProcess(0)
    noreturn

HWND hWnd_2 = sub_401a6d(0x41c318, 0xa, 0xa, 0xde, 0xc8, 0x80c80000, WS_EX_LEFT)
data_41eb90 = hWnd_2
SetTimer(hWnd_2, 1, 0x3e8, nullptr)
HWND eax_3 =
    sub_402896("Main Voice", data_41eb90, 0x71, 0xa, 0xa, 0x64, 8, WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38 = 0xffffffff
enum WINDOW_EX_STYLE var_3c = data_41cb80
HMENU var_54 = data_41eb90
data_41bb04 = eax_3
HWND eax_4 = sub_401bb8("BCX_COMBOBOX", var_54, 0x6a, 0xa, 0x14, 0x64, 0x50, var_3c)
HWND var_30_1 = data_41eb90
data_41bae8 = eax_4
HWND eax_5 =
    sub_402896("Quarter Hour Voice", var_30_1, 0x75, 0xa, 0x23, 0x64, 8, WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38_1 = 0xffffffff
enum WINDOW_EX_STYLE var_3c_1 = data_41cb80
data_41baf4 = eax_5
HWND eax_6 = sub_401bb8("BCX_COMBOBOX", data_41eb90, 0x6d, 0xa, 0x2d, 0x64, 0x50, var_3c_1)
HWND var_30_2 = data_41eb90
data_41baf8 = eax_6
HWND eax_7 =
    sub_402896("Half Hour Voice", var_30_2, 0x74, 0xa, 0x3c, 0x64, 8, WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38_2 = 0xffffffff
enum WINDOW_EX_STYLE var_3c_2 = data_41cb80
data_41fdb8 = eax_7
HWND eax_8 = sub_401bb8("BCX_COMBOBOX", data_41eb90, 0x67, 0xa, 0x46, 0x64, 0x50, var_3c_2)
HWND var_30_3 = data_41eb90
data_41bb00 = eax_8
HWND eax_9 = sub_402896("Three-Quarter Hour Voice", var_30_3, 0x73, 0xa, 0x55, 0x64, 8, 
    WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38_3 = 0xffffffff
enum WINDOW_EX_STYLE var_3c_3 = data_41cb80
data_41cb3c = eax_9
HWND eax_10 = sub_401bb8("BCX_COMBOBOX", data_41eb90, 0x6c, 0xa, 0x5f, 0x64, 0x50, var_3c_3)
HWND var_30_4 = data_41eb90
data_41cb2c = eax_10
HWND eax_11 =
    sub_402896("On The Hour Voice", var_30_4, 0x72, 0xa, 0x6e, 0x64, 8, WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38_4 = 0xffffffff
enum WINDOW_EX_STYLE var_3c_4 = data_41cb80
data_41baf0 = eax_11
HWND eax_12 = sub_401bb8("BCX_COMBOBOX", data_41eb90, 0x6b, 0xa, 0x78, 0x64, 0x50, var_3c_4)
HWND var_30_5 = data_41eb90
data_41cb18 = eax_12
HWND eax_13 =
    sub_402896("Alarm Voice", var_30_5, 0x70, 0xa, 0x8c, 0x64, 8, WS_OVERLAPPED, WS_EX_LEFT)
int32_t var_38_5 = 0xffffffff
enum WINDOW_EX_STYLE var_3c_5 = data_41cb80
data_421f38 = eax_13
HWND eax_14 = sub_401bb8("BCX_COMBOBOX", data_41eb90, 0x66, 0xa, 0x96, 0x64, 0x50, var_3c_5)
enum WINDOW_STYLE var_18 = data_41cb1c
data_41fbac = eax_14
HWND eax_15 = sub_402896("Alarm Time", data_41eb90, 0x7a, 0xa, 0xa5, 0x64, 8, var_18, WS_EX_LEFT)
HWND var_54_6 = data_41eb90
data_420f14 = eax_15
HWND eax_16 =
    sub_401b14(&data_4162eb, var_54_6, 0x65, 0x70, 0xa5, 0x32, 0xe, 0x50010000, ~WS_EX_LEFT)
HWND var_30_7 = data_41eb90
data_42171c = eax_16
HWND eax_17 =
    sub_402978("24 &Hour Mode", var_30_7, 0x69, 0xa, 0xb6, 0x32, 0xa, WS_OVERLAPPED, WS_EX_LEFT)
HWND var_54_7 = data_41eb90
data_41cb7c = eax_17
HWND eax_18 =
    sub_40279f("Say &Time", var_54_7, 0x6e, 0xa7, 0xa, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND var_30_8 = data_41eb90
data_421f28 = eax_18
HWND eax_19 =
    sub_40279f("&Initialize", var_30_8, 0x76, 0xa7, 0x1e, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND var_54_8 = data_41eb90
data_41cb30 = eax_19
HWND eax_20 =
    sub_40279f("&Save Settings", var_54_8, 0x77, 0xa7, 0x32, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND var_30_9 = data_41eb90
data_41cb40 = eax_20
data_41cb38 =
    sub_40279f("A&udio...", var_30_9, 0x7b, 0xa7, 0x46, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND eax_22 =
    sub_40279f("Hot&keys...", data_41eb90, 0x78, 0xa7, 0x5a, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND var_30_10 = data_41eb90
data_41c310 = eax_22
HWND eax_23 =
    sub_40279f("&Quiet Mode...", var_30_10, 0x79, 0xa7, 0x6e, 0x32, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
HWND var_54_10 = data_41eb90
data_41fdb4 = eax_23
HWND eax_24 = sub_40279f("&Minimize to Tray", var_54_10, 0x68, 0xa7, 0x82, 0x32, 0xe, 
    WS_OVERLAPPED, ~WS_EX_LEFT)
HWND hWnd = data_41eb90
data_41e388 = eax_24
RedrawWindow(hWnd, nullptr, nullptr, 0)
ShowWindow(data_41eb90, SW_SHOW)
SetFocus(data_41eb90)
int32_t eax_25 = data_41eb90
data_41cb34 = 0
data_41fbb0 = 0x1fc
data_41fbb4 = eax_25
data_41fbc4 = LoadIconA(nullptr, 0x7f02)
data_41fbbc = 7
data_41fbc0 = 0x405
_strcpy(0x41fbc8, 0x41c318)
sub_401f26()
sub_40495a()
data_41eba4 = 0
sub_403d8f()

if (sub_401046(0x42b410, "/init") == 0)
    return sub_401fab() __tailcall

char result = sub_402ea3()
data_42b404 = result

if (result == 0)
    return result

return sub_401fd1() __tailcall
