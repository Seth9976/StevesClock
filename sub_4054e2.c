// 函数: sub_4054e2
// 地址: 0x4054e2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

_strcpy(&data_42cc58, sub_401196(arg3))
char* var_10_1 = sub_401535(0x5c, 0, 0, 0, 0, 0, 0, 0, 0, 0)
int32_t var_14_1 = arg1
char* var_18 = sub_401535(0x5c, 0, 0, 0, 0, 0, 0, 0, 0, 0)
uint8_t* var_1c = sub_401422()
_strcpy(0x41ff08, sub_40158a(4))
char* result

if (sub_401046(&data_42cc58, "its") != 0)
    if (sub_401046(&data_42cc58, "AM") == 0)
        result = sub_403e6f("AM")
    else if (sub_401046(&data_42cc58, "PM") == 0)
        result = sub_403e6f("PM")
    else if (sub_401046(&data_42cc58, "00") == 0)
        result = sub_403e6f("00")
    else if (sub_401046(&data_42cc58, U"o") == 0)
        result = sub_403e6f(U"o")
    else if (sub_401046(&data_42cc58, "announcement") == 0)
        result = sub_403e6f("announcement")
    else if (sub_401046(&data_42cc58, "hour1") == 0)
        result = sub_403e6f("hour1")
    else if (sub_401046(&data_42cc58, "hour2") == 0)
        result = sub_403e6f("hour2")
    else if (sub_401046(&data_42cc58, "alarm") == 0)
        result = sub_403e6f("alarm")
    else if (sub_401046(&data_42cc58, U"h") == 0)
        result = sub_403e6f(U"h")
    else if (sub_401046(&data_42cc58, U"mh") == 0)
        result = sub_403e6f(U"mh")
    else if (sub_401046(&data_42cc58, "cuckoo") == 0)
        result = sub_403e6f("cuckoo")
    else
        result = arg2
        void* const var_10_2
        
        switch (result)
            case 0
                var_10_2 = &data_42cc58
                result = sub_405162(&data_42cc58)
            case 1
                var_10_2 = &data_42cc58
                result = sub_403ecb(&data_42cc58)
            case 2
                var_10_2 = &data_42cc58
                result = sub_4040d2(&data_42cc58)
            case 3
                var_10_2 = &data_42cc58
                result = sub_404133(&data_42cc58)
            case 4
                var_10_2 = &data_42cc58
                result = sub_404152(&data_42cc58)
            case 5
                var_10_2 = &data_42cc58
                result = sub_40421e(&data_42cc58)
            case 6
                var_10_2 = &data_42cc58
                result = sub_404440(&data_42cc58)
            case 7
                var_10_2 = &data_42cc58
                result = sub_4044ee(&data_42cc58)
            case 8
                var_10_2 = &data_42cc58
                result = sub_4045bf(&data_42cc58)
            case 9
                var_10_2 = &data_42cc58
                result = sub_40485b(&data_42cc58)
else
    result = sub_403e6f("its")

return result
