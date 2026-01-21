// 函数: sub_40495a
// 地址: 0x40495a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_14 = 0x800
int32_t var_18 = 1
int32_t var_2c = 1
data_41bae4 = __snwscanf_l(data_41bae4, 1, 0, 2)
data_41bb0c = __snwscanf_l(data_41bb0c, 4, 0, 1)
sub_40248a(data_41bae8)
sub_40248a(data_41baf8)
sub_40248a(data_41bb00)
sub_40248a(data_41cb2c)
sub_40248a(data_41cb18)
sub_40248a(data_41fbac)
sub_4023f9(data_41bae8, "(NONE)")
sub_4023f9(data_41baf8, "(NONE)")
sub_4023f9(data_41bb00, "(NONE)")
sub_4023f9(data_41cb2c, "(NONE)")
sub_4023f9(data_41cb18, "(NONE)")
sub_4023f9(data_41fbac, "(NONE)")
data_42b3f0 = 1
_strcpy(&data_42abf0, sub_4012e9("*.*"))

while (data_42abf0 != 0)
    if ((GetFileAttributesA(&data_42abf0) & 0x10) != 0
            && sub_401046(sub_4010b3(&data_42abf0, 1), .") != 0)
        int32_t eax_6 = sub_4034f9(&data_42abf0)
        data_42abe8 = eax_6
        
        if (eax_6 != 0xffffffff)
            data_42b3f0 += 1
            sub_4023f9(data_41bae8, &data_42abf0)
            sub_4023f9(data_41baf8, &data_42abf0)
            sub_4023f9(data_41bb00, &data_42abf0)
            sub_4023f9(data_41cb2c, &data_42abf0)
            sub_4023f9(data_41cb18, &data_42abf0)
            sub_4023f9(data_41fbac, &data_42abf0)
    
    _strcpy(&data_42abf0, sub_401349())

int32_t var_14_3 = 0x800
int32_t var_18_3 = data_42b3f0
int32_t* eax_8 = __snwscanf_l(data_41bae4, 1, 1, 2)
int32_t var_2c_2 = data_42b3f0
data_41bae4 = eax_8
data_41bb0c = __snwscanf_l(data_41bb0c, 4, 1, 1)
_strcpy(*data_41bae4, "(None)")
*data_41bb0c = 0
WPARAM i = 1

if (data_42b3f0 - 1 s>= 1)
    do
        sub_40249e(data_41bae8, i)
        _strcpy(0x42a3e8, sub_402437(data_41bae8))
        _strcpy(*(data_41bae4 + (i << 2)), 0x42a3e8)
        *(data_41bb0c + (i << 2)) = sub_4034f9(*(data_41bae4 + (i << 2)))
        i += 1
    while (i s<= data_42b3f0 - 1)

sub_40249e(data_41bae8, 0)
sub_40249e(data_41baf8, 0)
sub_40249e(data_41bb00, 0)
sub_40249e(data_41cb2c, 0)
sub_40249e(data_41cb18, 0)
return sub_40249e(data_41fbac, 0)
