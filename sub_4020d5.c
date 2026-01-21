// 函数: sub_4020d5
// 地址: 0x4020d5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* const ecx

if (data_420f08 == 0)
    if (arg1 s< 0xc)
        arg3 = 0
    
    if (arg4 != 0)
        if (arg1 s>= 0xc)
            arg1 -= 0xc
            arg3 = 1
        
        if (arg1 == 0)
            arg1 = 0xc
    
    if (arg1 s< 0xa)
        _strcpy(0x424178, U"0")
        ecx = &data_416344
    
    void* const var_14_2 = &data_416340
    void* const var_18_3 = ecx
    void* const var_1c_3 = ecx
    var_1c_3.q = fconvert.d(float.t(arg1))
    char* var_18_4 = sub_401196(sub_4013f5())
    int32_t var_1c_4 = 0x424178
    void* const ecx_2 = _strcpy(0x424178, sub_40158a(3))
    
    if (arg2 s< 0xa)
        _strcat(0x424178, U"0")
        ecx_2 = &data_416344
    
    void* const var_14_3 = &data_41633c
    void* const var_18_5 = ecx_2
    void* const var_1c_5 = ecx_2
    var_1c_5.q = fconvert.d(float.t(arg2))
    char* var_18_6 = sub_401196(sub_4013f5())
    int32_t var_1c_6 = 0x424178
    _strcpy(0x424178, sub_40158a(3))
    void* const var_14_4
    
    if (arg3 == 0)
        var_14_4 = &data_416334
    else
        var_14_4 = &data_416338
    
    _strcat(0x424178, var_14_4)
else
    if (arg4 != 0)
        if (arg3 != 0)
            arg1 += 0xc
        
        if (arg1 == 0xc)
            arg1 = 0
        
        if (arg1 s>= 0x18)
            arg1 = 0xc
    
    if (arg1 s< 0xa)
        _strcpy(0x424178, U"0")
        ecx = &data_416344
    
    void* const var_14 = &data_416340
    void* const var_18 = ecx
    void* const var_1c = ecx
    var_1c.q = fconvert.d(float.t(arg1))
    char* var_18_1 = sub_401196(sub_4013f5())
    int32_t var_1c_1 = 0x424178
    void* const ecx_1 = _strcpy(0x424178, sub_40158a(3))
    
    if (arg2 s< 0xa)
        _strcat(0x424178, U"0")
        ecx_1 = &data_416344
    
    void* const var_14_1 = ecx_1
    void* const var_18_2 = ecx_1
    var_18_2.q = fconvert.d(float.t(arg2))
    _strcat(0x424178, sub_401196(sub_4013f5()))
int32_t var_14_5 = 1
char* result = sub_401000(_strlen(0x424178), 0x80)
_strcpy(result, 0x424178)
return result
