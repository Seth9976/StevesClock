// 函数: sub_402ea3
// 地址: 0x402ea3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int16_t* j_1
int16_t* j = j_1
char const* const __saved_ebp = "\settings.ini"
uint8_t* __saved_edi = sub_401422()
char eax_3 = sub_402515(sub_4013ca(sub_40158a(2)))
data_426ac8 = eax_3

if (eax_3 == 0)
    data_426ac8 = 0
    return 0

char const* const __saved_edi_1 = "\settings.ini"
uint8_t* var_18_1 = sub_401422()
int32_t* eax_6 = sub_408c3d(sub_40158a(2), U"r")
data_41fdac = eax_6

if (eax_6 == 0)
    char const* const __saved_ebp_1 = "\settings.ini"
    uint8_t* __saved_edi_3 = sub_401422()
    char* __saved_ebp_2 = sub_40158a(2)
    sub_408a75(&data_41a050, "Can't open file %s\n")
    _exit(1)
    noreturn

if (sub_401090(eax_6) == 0)
    int32_t i
    
    do
        int32_t* var_18_2 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_18_2)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_12 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41baf8, eax_12)
        int32_t* var_24_1 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_1)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_15 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41bb00, eax_15)
        int32_t* var_24_2 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_2)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_18 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41cb2c, eax_18)
        int32_t* var_24_3 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_3)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_21 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41cb18, eax_21)
        int32_t* var_24_4 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_4)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_24 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41bae8, eax_24)
        int32_t* var_24_5 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_5)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_27 = sub_407fc0(__ismbcupper(&data_4262c8))
        sub_40249e(data_41fbac, eax_27)
        int32_t* var_24_6 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_24_6)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        SetWindowTextA(data_42171c, &data_4262c8)
        int32_t* var_18_3 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_18_3)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        data_420f08 = sub_407fc0(__ismbcupper(&data_4262c8))
        enum DLG_BUTTON_CHECK_STATE uCheck = __ftol2(__ismbcupper(&data_4262c8))
        CheckDlgButton(data_41eb90, 0x69, uCheck)
        int32_t* var_18_5 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_18_5)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_35 = sub_407fc0(__ismbcupper(&data_4262c8))
        int32_t* var_1c_8 = data_41fdac
        data_41baec = eax_35
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_1c_8)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        _strcpy(0x41f3a8, &data_4262c8)
        sub_40226d(0x41f3a8, &data_41c314, &data_421718, &data_41bae0)
        int32_t* var_30_1 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_30_1)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        _strcpy(0x41cb88, &data_4262c8)
        sub_40226d(0x41cb88, &data_41bafc, &data_41eb98, &data_41eb9c)
        
        for (j = &data_41cb20; j s<= 0x41cb2a; )
            int32_t* var_18_6 = data_41fdac
            data_4262c8 = 0
            sub_408652(&data_4262c8, 0x100000, var_18_6)
            
            if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
                *(_strlen(&data_4262c8) + 0x4262c7) = 0
            
            int16_t* j_2 = j
            j = &j[1]
            *j_2 = __ftol2(__ismbcupper(&data_4262c8))
        
        sub_402020()
        int32_t* var_18_7 = data_41fdac
        data_4262c8 = 0
        sub_408652(&data_4262c8, 0x100000, var_18_7)
        
        if (*(_strlen(&data_4262c8) + 0x4262c7) == 0xa)
            *(_strlen(&data_4262c8) + 0x4262c7) = 0
        
        int32_t eax_45 = sub_407fc0(__ismbcupper(&data_4262c8))
        int32_t* var_1c_9 = data_41fdac
        data_41eba4 = eax_45
        i = sub_401090(var_1c_9)
    while (i == 0)

int32_t* eax_46 = data_41fdac

if (eax_46 != 0)
    sub_4085de(eax_46)
    data_41fdac = 0

data_426ac8 = 1
return 1
