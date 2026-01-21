// 函数: sub_4039f0
// 地址: 0x4039f0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg2 == 0x110)
    sub_4019b5(arg1, 0)
    data_426b2c =
        sub_402896("Don't speak after", arg1, 0x1f7, 0xa, 0xa, 0x32, 8, data_41cb1c, WS_EX_LEFT)
    HWND eax_2 =
        sub_401b14(&data_4162eb, arg1, 0x1f6, 0x41, 0xa, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    enum WINDOW_STYLE var_18_2 = data_41cb1c
    data_426b28 = eax_2
    data_426b24 =
        sub_402896("Don't speak before", arg1, 0x1f7, 0xa, 0x1e, 0x32, 8, var_18_2, WS_EX_LEFT)
    data_426b20 =
        sub_401b14(&data_4162eb, arg1, 0x1f5, 0x41, 0x1e, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    data_426b1c =
        sub_402978("Enable &Quiet Mode", arg1, 0x1fb, 0xa, 0x32, 0x37, 8, WS_OVERLAPPED, WS_EX_LEFT)
    data_426b18 = sub_40279f(0x4164ac, arg1, 1, 0xa, 0x41, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    HWND eax_7 = sub_40279f("Cancel", arg1, 2, 0x32, 0x41, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    enum DLG_BUTTON_CHECK_STATE uCheck = data_41baec
    data_426b14 = eax_7
    CheckDlgButton(arg1, 0x1fb, uCheck)
    SetWindowTextA(data_426b20, 0x41f3a8)
    SetWindowTextA(data_426b28, 0x41cb88)
    sub_40188d(arg1, 0, nullptr)
    RedrawWindow(arg1, nullptr, nullptr, 0)
    ShowWindow(arg1, SW_SHOW)

if (arg2 != 0x111)
    goto label_403bd4

if (arg3 == 1)
    uint32_t eax_8 = IsDlgButtonChecked(arg1, 0x1fb)
    HWND var_14_1 = data_426b20
    data_41baec = eax_8
    _strcpy(0x41f3a8, sub_401cbe(var_14_1))
    sub_40226d(0x41f3a8, &data_41c314, &data_421718, &data_41bae0)
    _strcpy(0x41cb88, sub_401cbe(data_426b28))
    sub_40226d(0x41cb88, &data_41bafc, &data_41eb98, &data_41eb9c)
    DestroyWindow(arg1)

if (arg3 == 2)
    DestroyWindow(arg1)
label_403bd4:
    
    if (arg2 == 0x10)
        DestroyWindow(arg1)

return 0
