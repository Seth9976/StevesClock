// 函数: sub_40226d
// 地址: 0x40226d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

*arg2 = sub_407fc0(__ismbcupper(sub_4010b3(arg1, 2)))
int32_t result = sub_407fc0(__ismbcupper(sub_401133(arg1, 4, 2)))
bool cond:0 = data_420f08 != 0
*arg3 = result

if (not(cond:0))
    if (sub_401046(sub_4013ca(sub_4010ff(arg1, 2)), "pm") == 0)
        *arg4 = 1
    
    result = sub_401046(sub_4013ca(sub_4010ff(arg1, 2)), "am")
    
    if (result == 0)
        *arg4 &= result

return result
