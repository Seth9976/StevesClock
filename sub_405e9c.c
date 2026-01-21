// 函数: sub_405e9c
// 地址: 0x405e9c
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg2 != 0x113)
    if (arg2 == 1 || arg2 == 5 || arg2 == 0x4e)
        return 0
    
    if (arg2 != 0x111)
        if (arg2 == 0x405)
            if (arg4 == 0x204)
                sub_405db6()
            
            if (arg4 == 0x201)
                sub_401fd1()
        else if (arg2 == 0x312)
            sub_405e2c(arg3)
        else if (arg2 != 7)
            if (arg2 == 0x11)
                SendMessageA(data_41eb90, 0x10, 0, 0)
                return 0
            
            if (arg2 == 0x10)
                if (data_41cb34 != 0)
                    Shell_NotifyIconA(NIM_DELETE, &data_41fbb0)
                
                KillTimer(data_41eb90, 1)
                sub_403340()
                sub_4020bd()
                sub_403e57()
                sub_401f08()
                int32_t* eax_2 = data_41bae4
                
                if (eax_2 != 0)
                    sub_40172e(eax_2, 2, 1)
                    data_41bae4 = 0
                
                __free_base(data_41bb0c)
                HWND hWnd = data_41eb90
                data_41bb0c = 0
                DestroyWindow(hWnd)
                return 0
            
            if (arg2 == 2)
                PostQuitMessage(0)
                return 0
        else
            SetFocus(data_41bae8)
    else if (arg3.w == 0x68)
        sub_401fab()
    else if (arg3.w == 0x69)
        sub_402de0()
    else if (arg3.w == 0x6e)
        sub_405db6()
    else if (arg3.w == 0x76)
        sub_40495a()
    else if (arg3.w == 0x77)
        sub_403340()
    else if (arg3.w == 0x78)
        int32_t var_14_2 = 0
        int32_t var_18_2 = 0
        int32_t var_1c_2 = 0
        int32_t var_20_2 = 0x80c00000
        int32_t var_24_1 = 0x5a
        int32_t var_2c_1 = 0x32
        int32_t var_30_1 = 0x32
        sub_402644(sub_4036fb, "Configure Hotkeys", data_41eb90, 0x32, 0x32, 0xe6, 0x5a, 
            0x80c00000, 0, nullptr, 0)
    else if (arg3.w != 0x79)
        if (arg3.w != 0x7b)
            return 0
        
        int32_t var_14_4 = 0
        int32_t var_18_4 = 0
        int32_t var_1c_4 = 0
        int32_t var_20_4 = 0x80c00000
        int32_t var_24_3 = 0x5a
        int32_t var_2c_3 = 0x32
        int32_t var_30_3 = 0x32
        sub_402644(sub_403be7, "Configure Audio", data_41eb90, 0x32, 0x32, 0xc8, 0x5a, 0x80c00000, 
            0, nullptr, 0)
    else
        int32_t var_14_3 = 0
        int32_t var_18_3 = 0
        int32_t var_1c_3 = 0
        int32_t var_20_3 = 0x80c00000
        int32_t var_24_2 = 0x5a
        int32_t var_2c_2 = 0x32
        int32_t var_30_2 = 0x32
        sub_402644(sub_4039f0, "Configure Quiet Mode", data_41eb90, 0x32, 0x32, 0x64, 0x5a, 
            0x80c00000, 0, nullptr, 0)
else
    sub_405e00()

return DefWindowProcA(arg1, arg2, arg3, arg4)
