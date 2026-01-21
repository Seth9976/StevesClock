// 函数: sub_405162
// 地址: 0x405162
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

data_42c458 = 0
int32_t eax
int32_t ecx
eax, ecx = sub_407fc0(__ismbcupper(arg1))
data_42c450 = eax
int32_t var_18 = ecx
var_18.q = fconvert.d(float.t(data_42c450))
_strcpy(0x42bc50, sub_4013f5())
void* eax_2 = _strlen(0x42bc50)
int32_t result = 0
data_42bc20 = eax_2
char const* const ecx_1 = __builtin_memset(&data_42bc28, 0, 0x20)
data_42bc1c = 0
data_42bc18 = 0
data_42bc14 = 0
data_42bc10 = eax_2

if (eax_2 s>= 1)
    do
        data_42bc18 += 1
        result = sub_407fc0(__ismbcupper(sub_401133(0x42bc50, data_42bc10, 1)))
        ecx_1 = data_42bc18
        data_42bc10 -= 1
        *((ecx_1 << 2) + &data_42bc24) = result
    while (data_42bc10 s>= 1)

if (data_42bc40 == 0)
label_405273:
    
    if (data_42bc3c == 0)
        goto label_4052cc
    
    char const* const var_18_4 = ecx_1
    char const* const var_1c_3 = ecx_1
    var_1c_3.q = fconvert.d(float.t(data_42bc3c))
    data_42bc14 = 1
    result = sub_403e6f(sub_4010ff(sub_4013f5(), 1))
    
    if (data_42c458 == 0)
        result = sub_403e6f("hundred")
        ecx_1 = "hundred"
        
        if (data_42c458 == 0)
            data_42bc1c = 1
        label_4052cc:
            result = data_42bc38
            
            if (result != 1)
                if (result == 0)
                    goto label_405370
                
                void* const var_14_1 = &data_416344
                char const* const var_1c_7 = ecx_1
                char const* const var_20_3 = ecx_1
                var_20_3.q = fconvert.d(float.t(data_42bc38))
                data_42bc14 = 1
                char* var_18_8 = sub_4010ff(sub_4013f5(), 1)
                result, ecx_1 = sub_403e6f(sub_40158a(2))
                
                if (data_42c458 == 0)
                    data_42bc1c = 1
                label_405370:
                    
                    if (data_42bc34 == 0)
                        goto label_4053b2
                    
                    char const* const var_18_9 = ecx_1
                    char const* const var_1c_9 = ecx_1
                    var_1c_9.q = fconvert.d(float.t(data_42bc34))
                    data_42bc14 = 1
                    result, ecx_1 = sub_403e6f(sub_4010ff(sub_4013f5(), 1))
                    
                    if (data_42c458 == 0)
                        data_42bc1c = 1
                    label_4053b2:
                        
                        if (data_42bc1c != 1)
                            goto label_4053dd
                        
                        if (data_42c458 == 0)
                            goto label_4053cb
            else
                char const* const var_18_6 = ecx_1
                char const* const var_1c_5 = ecx_1
                var_1c_5.q = fconvert.d(float.t(data_42bc34))
                data_42bc14 = 1
                char* var_1c_6 = sub_4010ff(sub_4013f5(), 1)
                void* const var_20_2 = &data_41680c
                result = sub_403e6f(sub_40158a(2))
                
                if (data_42c458 == 0)
                    data_42bc1c = 1
                label_4053cb:
                    result = sub_403e6f("thousand")
                    ecx_1 = "thousand"
                    
                    if (data_42c458 == 0)
                    label_4053dd:
                        
                        if (data_42bc30 == 0)
                        label_405430:
                            result = data_42bc2c
                            
                            if (result == 1)
                                char const* const var_18_13 = ecx_1
                                char const* const var_1c_13 = ecx_1
                                var_1c_13.q = fconvert.d(float.t(data_42bc28))
                                data_42bc14 = 1
                                char* var_1c_14 = sub_4010ff(sub_4013f5(), 1)
                                void* const var_20_5 = &data_41680c
                                return sub_403e6f(sub_40158a(2))
                            
                            if (result == 0)
                            label_4054ab:
                                
                                if (data_42bc28 != 0 || data_42bc14 != 1)
                                    char const* const var_18_16 = ecx_1
                                    char const* const var_1c_17 = ecx_1
                                    var_1c_17.q = fconvert.d(float.t(data_42bc28))
                                    return sub_403e6f(sub_4010ff(sub_4013f5(), 1))
                            else
                                void* const var_14_2 = &data_416344
                                char const* const var_1c_15 = ecx_1
                                char const* const var_20_6 = ecx_1
                                var_20_6.q = fconvert.d(float.t(data_42bc2c))
                                data_42bc14 = 1
                                char* var_18_15 = sub_4010ff(sub_4013f5(), 1)
                                result, ecx_1 = sub_403e6f(sub_40158a(2))
                                
                                if (data_42c458 == 0)
                                    goto label_4054ab
                        else
                            char const* const var_18_11 = ecx_1
                            char const* const var_1c_11 = ecx_1
                            var_1c_11.q = fconvert.d(float.t(data_42bc30))
                            data_42bc14 = 1
                            result = sub_403e6f(sub_4010ff(sub_4013f5(), 1))
                            
                            if (data_42c458 == 0)
                                result = sub_403e6f("hundred")
                                ecx_1 = "hundred"
                                
                                if (data_42c458 == 0)
                                    goto label_405430
else
    data_42bc14 = 1
    
    if (data_42c458 == 0)
        char const* const var_18_2 = ecx_1
        char const* const var_1c_1 = ecx_1
        var_1c_1.q = fconvert.d(float.t(data_42bc40))
        result = sub_403e6f(sub_4010ff(sub_4013f5(), 1))
        
        if (data_42c458 == 0)
            result = sub_403e6f("million")
            ecx_1 = "million"
            
            if (data_42c458 == 0)
                goto label_405273

return result
