// 函数: sub_4036fb
// 地址: 0x4036fb
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg2 == 0x110)
    sub_4019b5(arg1, 0)
    int32_t var_40_1 = 0xffffffff
    data_426b10 = sub_402896("Action", arg1, 0x18f, 0xa, 0xa, 0x64, 8, data_41cb1c, WS_EX_LEFT)
    HWND eax_2 = sub_401bb8("BCX_COMBOBOX", arg1, 0x190, 0xa, 0x14, 0x64, 0x50, 0x50210003)
    data_426b0c = eax_2
    sub_4023f9(eax_2, "Say Time")
    sub_4023f9(data_426b0c, "Toggle 24-hour Mode")
    sub_4023f9(data_426b0c, "Previous Voice")
    sub_4023f9(data_426b0c, "Next Voice")
    sub_4023f9(data_426b0c, "Show/Hide")
    sub_4023f9(data_426b0c, "Exit Clock")
    sub_40249e(data_426b0c, 0)
    data_426b08 = sub_402896("Hotkey", arg1, 0x191, 0xa, 0x28, 0x64, 8, data_41cb1c, WS_EX_LEFT)
    int32_t eax_4 = GetDialogBaseUnits()
    uint32_t ecx_1 = zx.d(eax_4.w)
    data_426b04 = eax_4
    uint32_t esi_1 = zx.d((eax_4 s>> 0x10).w)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(ecx_1)
    data_426b00 = ecx_1
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(esi_1)
    int32_t ecx_3 = ((edx_1 & 3) + eax_7) s>> 2
    int32_t eax_11 = (eax_9 + (edx_3 & 7)) s>> 3
    data_426afc = esi_1
    data_426af8 = ecx_3
    data_426af4 = eax_11
    HWND hWnd_1 = CreateWindowExA(WS_EX_LEFT, "msctls_hotkey32", &data_4162eb, 0x50010000, 
        ecx_3 * 0x73, eax_11 * 0x28, ecx_3 * 0x64, eax_11 * 0xe, arg1, 0x1ae, data_421724, nullptr)
    data_426af0 = hWnd_1
    SendMessageA(hWnd_1, 0x403, 3, 0)
    SendMessageA(data_426af0, 0x401, zx.d(data_41cb20), 0)
    data_426aec = sub_40279f(0x4164ac, arg1, 1, 0xa, 0x46, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    data_426ae8 = sub_40279f("Cancel", arg1, 2, 0x32, 0x46, 0x1e, 0xe, WS_OVERLAPPED, ~WS_EX_LEFT)
    data_426ae0 = 0
    data_426ae4.w = 0
    data_426ad4 = data_41cb20.d
    void* edi_3 = &data_426ad8
    void* esi_2 = &data_41cb24
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)
    sub_40188d(arg1, 0, nullptr)
    RedrawWindow(arg1, nullptr, nullptr, 0)
    ShowWindow(arg1, SW_SHOW)
    sub_4020bd()

if (arg2 != 0x111)
    goto label_4039dd

uint16_t esi_6 = (arg3 u>> 0x10).w
int32_t ecx

if (esi_6 == 0x300)
    LRESULT eax_16 = sub_402423(data_426b0c)
    HWND hWnd = data_426af0
    data_426ad0 = eax_16
    int16_t eax_17 = SendMessageA(hWnd, 0x402, 0, 0)
    ecx = data_426ad0
    *((ecx << 1) + &data_426ad4) = eax_17
    *(ecx + &data_426ae0) = 1

if (esi_6 == 1)
    LRESULT eax_18 = sub_402423(data_426b0c)
    data_426ad0 = eax_18
    SendMessageA(data_426af0, 0x401, zx.d(*((eax_18 << 1) + &data_426ad4)), 0)

if (arg3.w == 1)
    for (int32_t i = 0; i s<= 5; i += 1)
        if (*(i + &data_426ae0) != 0)
            ecx.w = *((i << 1) + &data_426ad4)
            (&data_41cb20)[i] = ecx.w
    
    sub_402020()
    DestroyWindow(arg1)

if (arg3.w == 2)
    sub_402020()
    DestroyWindow(arg1)
label_4039dd:
    
    if (arg2 == 0x10)
        DestroyWindow(arg1)

return 0
