// 函数: sub_4045bf
// 地址: 0x4045bf
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (sub_401046(sub_4010ff(arg1, 1), U"a") != 0)
    data_429bd8 = 0
else
    _strcpy(&data_429bd8, U"a")

int32_t eax_3
long double st0
st0, eax_3 = __ismbcupper(sub_4010b3(arg1, 2))
long double temp2 = fconvert.t(13.0)
st0 - temp2
eax_3.w = (st0 < temp2 ? 1 : 0) << 8 | (is_unordered.t(st0, temp2) ? 1 : 0) << 0xa
    | (st0 == temp2 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x5}
int32_t var_20_1

if (p)
    int32_t eax_5
    long double st0_1
    st0_1, eax_5 = __ismbcupper(sub_4010b3(arg1, 2))
    long double temp3_1 = fconvert.t(20.0)
    st0_1 - temp3_1
    eax_5.w = (st0_1 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp3_1) ? 1 : 0) << 0xa
        | (st0_1 == temp3_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    int32_t var_1c_3
    
    if (p_1)
        char* result
        long double st0_3
        st0_3, result = __ismbcupper(arg1)
        long double temp4_1 = fconvert.t(19.0)
        st0_3 - temp4_1
        result.w = (st0_3 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(st0_3, temp4_1) ? 1 : 0) << 0xa
            | (st0_3 == temp4_1 ? 1 : 0) << 0xe
        
        if ((result:1.b & 0x41) != 0)
            return result
        
        _strcpy(0x4293d0, arg1)
        data_4293c8 = sub_407fc0(__ismbcupper(sub_4010b3(0x4293d0, 1)))
        result = sub_407fc0(__ismbcupper(sub_4010ff(0x4293d0, 1)))
        int32_t ecx_4 = data_4293c8
        data_4293c4 = result
        
        if (ecx_4 != 2)
            if (ecx_4 == 3)
                char const* const var_10_13 = "thir.wav"
                goto label_404774
            
            if (ecx_4 == 4)
                char const* const var_10_14 = "for.wav"
                goto label_404774
            
            if (ecx_4 == 5)
                char const* const var_10_15 = "fif.wav"
                goto label_404774
        else
            char const* const var_10_12 = "twen.wav"
        label_404774:
            int32_t var_14_7 = 0x41ff08
            sub_403db7(sub_40158a(2))
            result = data_4293c4
        
        if (result == 0)
            char const* const var_10_16 = ".wav"
            char* var_14_8 = &data_429bd8
            void* const var_18_6 = &data_4166b4
            var_1c_3 = 0x41ff08
            var_20_1 = 4
        else if (result == 1)
            char const* const var_10_17 = ".wav"
            char* var_14_9 = &data_429bd8
            void* const var_18_7 = &data_4166b0
            var_1c_3 = 0x41ff08
            var_20_1 = 4
        else if (result == 2)
            char const* const var_10_18 = ".wav"
            char* var_14_10 = &data_429bd8
            void* const var_18_8 = &data_4166ac
            var_1c_3 = 0x41ff08
            var_20_1 = 4
        else if (result != 3)
            if (result == 4)
                char const* const var_10_20 = ".wav"
                char* var_14_12 = &data_429bd8
                void* const var_18_10 = &data_4166a4
            else if (result == 5)
                char const* const var_10_21 = ".wav"
                char* var_14_13 = &data_429bd8
                void* const var_18_11 = &data_4166a0
            else if (result == 6)
                char const* const var_10_22 = ".wav"
                char* var_14_14 = &data_429bd8
                void* const var_18_12 = &data_41669c
            else if (result == 7)
                char const* const var_10_23 = ".wav"
                char* var_14_15 = &data_429bd8
                void* const var_18_13 = &data_416698
            else if (result != 8)
                if (result != 9)
                    return result
                
                char const* const var_10_25 = ".wav"
                char* var_14_17 = &data_429bd8
                void* const var_18_15 = &data_416690
            else
                char const* const var_10_24 = ".wav"
                char* var_14_16 = &data_429bd8
                void* const var_18_14 = &data_416694
            
            int32_t var_1c_5 = 0x41ff08
            int32_t var_20_3 = 4
        else
            char const* const var_10_19 = ".wav"
            char* var_14_11 = &data_429bd8
            void* const var_18_9 = &data_4166a8
            var_1c_3 = 0x41ff08
            var_20_1 = 4
    else
        int32_t eax_7 = sub_407fc0(__ismbcupper(sub_4010b3(arg1, 2)))
        data_429bd0 = eax_7
        int32_t var_14_5
        
        switch (mods.dp.d(sx.q(eax_7), 0xa))
            case 3
                char const* const var_10_2 = "thir.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 4
                char const* const var_10_3 = "for.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 5
                char const* const var_10_4 = "fif.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 6
                char const* const var_10_5 = "six.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 7
                char const* const var_10_6 = "seven.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 8
                char const* const var_10_7 = "eight.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
            case 9
                char const* const var_10_8 = "nine.wav"
                var_14_5 = 0x41ff08
                sub_403db7(sub_40158a(2))
        
        char const* const var_10_9 = ".wav"
        char* var_14_6 = &data_429bd8
        char const* const var_18_5 = "teen"
        var_1c_3 = 0x41ff08
        var_20_1 = 4
else
    char const* const var_10_1 = ".wav"
    char* var_14_2 = &data_429bd8
    char* var_18_2 = arg1
    int32_t var_1c_1 = 0x41ff08
    var_20_1 = 4
return sub_403db7(sub_40158a(4))
