// 函数: sub_401449
// 地址: 0x401449
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t var_8 = arg3
uint32_t var_c = arg3
int32_t var_18 = 1
char* result
int32_t ecx
int32_t edx
result, ecx, edx = sub_401000(0x100, 0x80)
sub_40676d(&var_c, edx, ecx, &var_c)
uint32_t* var_18_1 = &var_c
void* eax_1

if (arg5 != 0)
    eax_1 = sub_406497(var_18_1)
else
    eax_1 = sub_406746(var_18_1)

if (arg4 u<= 0xb)
    char* var_1c_1
    void* var_18_2
    
    switch (arg4)
        case 0
            var_18_2 = eax_1
            var_1c_1 = "%H:%M:%S"
        case 1
            var_18_2 = eax_1
            var_1c_1 = &data_4162a8
        case 2
            var_18_2 = eax_1
            var_1c_1 = &data_4162a4
        case 3
            var_18_2 = eax_1
            var_1c_1 = &data_4162a0
        case 4
            var_18_2 = eax_1
            var_1c_1 = &data_41629c
        case 5
            var_18_2 = eax_1
            var_1c_1 = &data_416298
        case 6
            var_18_2 = eax_1
            var_1c_1 = &data_416294
        case 7
            var_18_2 = eax_1
            var_1c_1 = &data_416290
        case 8
            var_18_2 = eax_1
            var_1c_1 = &data_41628c
        case 9
            var_18_2 = eax_1
            var_1c_1 = &data_416288
        case 0xa
            var_18_2 = eax_1
            var_1c_1 = &data_416284
        case 0xb
            var_18_2 = eax_1
            var_1c_1 = &data_416280
    
    _wcsftime(result, 0x100, var_1c_1, var_18_2)

return result
