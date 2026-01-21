// 函数: sub_40485b
// 地址: 0x40485b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
data_42a3e0 = sub_407fc0(__ismbcupper(arg1))
data_42a3dc = sub_407fc0(__ismbcupper(sub_4010b3(arg1, 1)))
int32_t eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_407fc0(__ismbcupper(sub_4010ff(arg1, 1)))
bool cond:0 = data_42a3e0 s< 0x14
data_42a3d8 = eax_4

if (cond:0 || eax_4 == 0)
    char const* const __saved_edi_1 = ".wav"
    char* var_14_2 = arg1
    int32_t var_18_5 = 0x41ff08
    return sub_403db7(sub_40158a(3))

char const* const var_14 = ".wav"
int32_t var_18_1 = ecx_1
int32_t var_1c_1 = ecx_1
var_1c_1.q = fconvert.d(float.t(data_42a3d8))
char* var_18_2 = sub_401196(sub_4013f5())
int32_t var_1c_2 = 0x41ff08
sub_403db7(sub_40158a(3))
char const* const var_28_1 = "and.wav"
int32_t var_2c_1 = 0x41ff08
int32_t ecx_2 = sub_403db7(sub_40158a(2))
char const* const var_14_1 = ".wav"
int32_t var_18_3 = ecx_2
int32_t var_1c_3 = ecx_2
var_1c_3.q = fconvert.d(float.t(data_42a3dc * 0xa))
char* var_18_4 = sub_401196(sub_4013f5())
int32_t var_1c_4 = 0x41ff08
return sub_403db7(sub_40158a(3))
