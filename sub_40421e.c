// 函数: sub_40421e
// 地址: 0x40421e
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (sub_401046(sub_4010ff(arg1, 1), U"a") != 0)
    int32_t eax_4
    long double st0_1
    st0_1, eax_4 = __ismbcupper(arg1)
    long double temp2_1 = fconvert.t(13.0)
    st0_1 - temp2_1
    eax_4.w = (st0_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp2_1) ? 1 : 0) << 0xa
        | (st0_1 == temp2_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        int32_t eax_5
        long double st0_2
        st0_2, eax_5 = __ismbcupper(arg1)
        long double temp3 = fconvert.t(20.0)
        st0_2 - temp3
        eax_5.w = (st0_2 < temp3 ? 1 : 0) << 8 | (is_unordered.t(st0_2, temp3) ? 1 : 0) << 0xa
            | (st0_2 == temp3 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            char* result
            long double st0_4
            st0_4, result = __ismbcupper(arg1)
            long double temp4_1 = fconvert.t(19.0)
            st0_4 - temp4_1
            result.w = (st0_4 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_4, temp4_1) ? 1 : 0) << 0xa
                | (st0_4 == temp4_1 ? 1 : 0) << 0xe
            
            if ((result:1.b & 0x41) != 0)
                return result
            
            _strcpy(0x4283b0, arg1)
            data_4283a8 = sub_407fc0(__ismbcupper(sub_4010b3(0x4283b0, 1)))
            result = sub_407fc0(__ismbcupper(sub_4010ff(0x4283b0, 1)))
            int32_t ecx_6 = data_4283a8
            data_4283a4 = result
            
            if (ecx_6 != 2)
                if (ecx_6 == 3)
                    char const* const var_c_14 = "thir.wav"
                    goto label_4043a4
                
                if (ecx_6 == 4)
                    char const* const var_c_15 = "for.wav"
                    goto label_4043a4
                
                if (ecx_6 == 5)
                    char const* const var_c_16 = "fif.wav"
                    goto label_4043a4
            else
                char const* const var_c_13 = "twen.wav"
            label_4043a4:
                int32_t var_10_3 = 0x41ff08
                sub_403db7(sub_40158a(2))
                result = data_4283a4
            
            if (result == 0)
                char const* const var_c_17 = "ty.wav"
            else if (result == 1)
                char const* const var_c_18 = "ty1.wav"
            else if (result == 2)
                char const* const var_c_19 = "ty2.wav"
            else if (result == 3)
                char const* const var_c_20 = "ty3.wav"
            else if (result == 4)
                char const* const var_c_21 = "ty4.wav"
            else if (result == 5)
                char const* const var_c_22 = "ty5.wav"
            else if (result == 6)
                char const* const var_c_23 = "ty6.wav"
            else if (result == 7)
                char const* const var_c_24 = "ty7.wav"
            else if (result != 8)
                if (result != 9)
                    return result
                
                char const* const var_c_26 = "ty9.wav"
            else
                char const* const var_c_25 = "ty8.wav"
        else
            int32_t eax_6 = sub_407fc0(__ismbcupper(arg1))
            data_428bb0 = eax_6
            int32_t var_10_2
            
            switch (mods.dp.d(sx.q(eax_6), 0xa))
                case 3
                    char const* const var_c_4 = "thir.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 4
                    char const* const var_c_5 = "for.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 5
                    char const* const var_c_6 = "fif.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 6
                    char const* const var_c_7 = "six.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 7
                    char const* const var_c_8 = "seven.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 8
                    char const* const var_c_9 = "eight.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
                case 9
                    char const* const var_c_10 = "nine.wav"
                    var_10_2 = 0x41ff08
                    sub_403db7(sub_40158a(2))
            
            char const* const var_c_11 = "teen.wav"
        
        int32_t var_10_4 = 0x41ff08
        return sub_403db7(sub_40158a(2))

char const* const __saved_edi_1 = ".wav"
char* var_c_1 = arg1
int32_t var_10_1 = 0x41ff08
return sub_403db7(sub_40158a(3))
