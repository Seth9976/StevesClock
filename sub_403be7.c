// 函数: sub_403be7
// 地址: 0x403be7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg2 == 0x110)
    sub_4019b5(arg1, 0)
    int32_t var_3c_1 = 0xffffffff
    data_42737c =
        sub_402896("Audio Output", arg1, 0x2bb, 0xa, 0xa, 0x64, 8, data_41cb1c, WS_EX_LEFT)
    data_427378 = sub_401bb8("BCX_COMBOBOX", arg1, 0x2bc, 0xa, 0x14, 0x64, 0x50, 0x50210003)
    uint32_t eax_3 = waveOutGetNumDevs()
    data_427374 = eax_3
    data_427370 = 0
    
    if (eax_3 - 1 s>= 0)
        do
            waveOutGetDevCapsA(data_427370, &data_426b38, 0x34)
            _strcpy(0x426b70, 0x426b40)
            sub_4023f9(data_427378, 0x426b70)
            eax_3 = data_427374
            data_427370 += 1
        while (data_427370 s<= eax_3 - 1)
    
    WPARAM __saved_ebx_6 = data_41eba4
    WPARAM __saved_ebx_1
    
    __saved_ebx_1 = __saved_ebx_6 s>= eax_3 ? 0 : __saved_ebx_6
    
    sub_40249e(data_427378, __saved_ebx_1)
    data_426b34 = sub_40279f(0x4164ac, arg1, 1, 0xa, 0x46, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    data_426b30 = sub_40279f("Cancel", arg1, 2, 0x32, 0x46, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    sub_40188d(arg1, 0, nullptr)
    RedrawWindow(arg1, nullptr, nullptr, 0)
    ShowWindow(arg1, SW_SHOW)

if (arg2 != 0x111)
    goto label_403d61

if (arg3 == 1)
    LRESULT eax_6 = sub_402423(data_427378)
    data_427370 = eax_6
    data_41eba4 = eax_6
    DestroyWindow(arg1)

if (arg3 == 2)
    DestroyWindow(arg1)
label_403d61:
    
    if (arg2 == 0x10)
        DestroyWindow(arg1)

return 0
