// 函数: sub_402bcf
// 地址: 0x402bcf
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* edi = arg1
char const* const __saved_ebx_1

if (sub_401046(sub_40139f(sub_4010ff(edi, 3)), "WAV") != 0)
    if (sub_401046(sub_40139f(sub_4010ff(edi, 3)), "AVI") != 0)
        uint32_t result = sub_401046(sub_40139f(sub_4010ff(edi, 3)), "MID")
        
        if (result != 0)
            return result
        
        __saved_ebx_1 = "Sequencer"
    else
        __saved_ebx_1 = "AviVideo"
else
    __saved_ebx_1 = "Waveaudio"

_strcpy(0x4252c8, __saved_ebx_1)
char const* const var_10_3 = "1234"
char* var_14_3 = sub_4010ff(edi, 3)
_strcpy(&data_41eba8, sub_40158a(2))

if (sub_4024b4(edi, U" :0", 0, 0) != 0)
    char* var_10_4 = sub_401535(0x22, 0, 0, 0, 0, 0, 0, 0, 0, 0)
    char* var_14_4 = edi
    char* var_18_4 = sub_401535(0x22, 0, 0, 0, 0, 0, 0, 0, 0, 0)
    edi = sub_40158a(3)

char const* const var_1c_2 = " wait"
int32_t var_20_1 = 0x4252c8
char const* const var_24_1 = " TYPE "
char* var_28_1 = &data_41eba8
char const* const var_2c_1 = " ALIAS "
char* var_30_2 = edi
char const* const var_34_1 = "Open "
data_425298 = mciSendStringA(sub_40158a(7), &data_4162eb, 0, nullptr)
data_4252ac = data_41eba4
return mciSendCommandA(mciGetDeviceIDA(&data_41eba8), 0x80d, 0x800000, 0x42529c)
