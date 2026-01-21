// 函数: sub_4044ee
// 地址: 0x4044ee
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* result = sub_401046(arg1, "hour")

if (result != 0)
    return result

bool cond:0_1 = data_420f08 != 0
int32_t eax = data_41eb94
data_4293c0 = eax

if (not(cond:0_1))
    if (eax s>= 0xc)
        eax -= 0xc
        data_4293c0 = eax
    
    if (eax == 0)
        data_4293c0 = 0xc

_strcpy(0x428bc0, "hour")
char const* const ecx_1 = "hour"

if (data_4293c0 s< 0xa)
    char const* const var_8_1 = "hour"
    char const* const var_c_1 = "hour"
    var_c_1.q = fconvert.d(float.t(data_4293c0))
    char* var_14_1 = sub_401196(sub_4013f5())
    void* const var_18_1 = &data_416344
    int32_t var_1c_1 = 0x428bc0
    ecx_1 = _strcpy(0x428bc0, sub_40158a(3))

if (data_4293c0 s> 9)
    char const* const var_8_2 = ecx_1
    char const* const var_c_2 = ecx_1
    var_c_2.q = fconvert.d(float.t(data_4293c0))
    _strcat(0x428bc0, sub_401196(sub_4013f5()))

char const* const var_8_3 = ".wav"
int32_t var_c_3 = 0x428bc0
int32_t var_10_3 = 0x41ff08
return sub_403db7(sub_40158a(3))
