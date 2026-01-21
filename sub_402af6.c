// 函数: sub_402af6
// 地址: 0x402af6
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (*arg1 == 0)
    MessageBoxA(GetActiveWindow(), "Empty String For BCX_ClassName NOT Allowed", "Empty ClassName", 
        MB_OK)
    sub_408360(&data_41a030)
    ExitProcess(1)
    noreturn

if (GetClassInfoExA(data_421724, arg1, &data_41cb4c) == 0)
    if (data_421f30 == 0)
        sub_401cf0()
    
    long double x87_r7_1 = fconvert.t(data_421f34)
    long double x87_r6_1 = float.t(0)
    x87_r6_1 - x87_r7_1
    BOOL eax_1
    eax_1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        long double x87_r6_2 = fconvert.t(data_41bb08)
        x87_r6_2 - x87_r7_1
        eax_1.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            sub_402a5e("Pixels")
    
    _strcpy(0x41d388, arg1)
    data_41cb54 = arg2
    data_41cb60 = data_421724
    data_41cb74 = arg1
    RegisterClassExA(&data_41cb4c)
else if (arg2 == 0)
    UnregisterClassA(arg1, data_421724)
