// 函数: sub_403340
// 地址: 0x403340
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char const* const var_c = "\settings.ini"
uint8_t* var_10 = sub_401422()
int32_t* eax_2 = sub_408c3d(sub_40158a(2), U"w")
data_41fdac = eax_2

if (eax_2 == 0)
    char const* const __saved_edi_1 = "\settings.ini"
    uint8_t* var_c_2 = sub_401422()
    char* __saved_edi_2 = sub_40158a(2)
    sub_408a75(&data_41a050, "Can't open file %s\n")
    _exit(1)
    noreturn

LRESULT var_10_1 = sub_402423(data_41baf8)
sub_408a75(data_41fdac, "% d\n")
LRESULT var_20 = sub_402423(data_41bb00)
sub_408a75(data_41fdac, "% d\n")
LRESULT var_30 = sub_402423(data_41cb2c)
sub_408a75(data_41fdac, "% d\n")
LRESULT var_40 = sub_402423(data_41cb18)
sub_408a75(data_41fdac, "% d\n")
LRESULT var_10_2 = sub_402423(data_41bae8)
sub_408a75(data_41fdac, "% d\n")
LRESULT var_20_1 = sub_402423(data_41fbac)
sub_408a75(data_41fdac, "% d\n")
uint8_t* var_30_1 = sub_401cbe(data_42171c)
sub_408a75(data_41fdac, "%s\n")
uint32_t var_c_5 = IsDlgButtonChecked(data_41eb90, 0x69)
sub_408a75(data_41fdac, "% d\n")
int32_t var_18_2 = data_41baec
sub_408a75(data_41fdac, "% d\n")
int32_t var_24 = 0x41f3a8
sub_408a75(data_41fdac, "%s\n")
int32_t var_30_2 = 0x41cb88
sub_408a75(data_41fdac, "%s\n")

for (int16_t* i = &data_41cb20; i s<= 0x41cb2a; i = &i[1])
    uint32_t var_c_6 = zx.d(*i)
    sub_408a75(data_41fdac, "% d\n")

int32_t var_c_7 = data_41eba4
sub_408a75(data_41fdac, "% d\n")
int32_t* result = data_41fdac

if (result != 0)
    result = sub_4085de(result)
    data_41fdac = 0

return result
