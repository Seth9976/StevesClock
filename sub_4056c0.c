// 函数: sub_4056c0
// 地址: 0x4056c0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx = data_41bb0c
char* result = *(ecx + (arg2 << 2))
data_42d458 = result
int32_t esi_1
char* eax_16
int32_t ecx_1
bool cond:0_1

if (result == 0 || result == 1 || result == 2 || result == 3 || result == 9)
    esi_1 = arg1
    sub_4054e2(esi_1, result, "its")
    char* var_14_13
    var_14_13.q = fconvert.d(float.t(data_41eb94))
    char* eax_18 = sub_401196(sub_4013f5())
    sub_4054e2(esi_1, data_42d458, eax_18)
    ecx_1 = sub_4054e2(esi_1, data_42d458, U"h")
    
    if (data_41fdc4 == 0)
        ecx_1 = sub_4054e2(esi_1, data_42d458, "00")
    
    int32_t eax_19 = data_41fdc4
    
    if (eax_19 s> 0)
        if (eax_19 s< 0xa)
            ecx_1 = sub_4054e2(esi_1, data_42d458, U"o")
        
        cond:0_1 = data_41fdc4 s<= 0
    label_4059da:
        
        if (not(cond:0_1))
            int32_t var_10_5 = ecx_1
            int32_t var_14_16 = ecx_1
            var_14_16.q = fconvert.d(float.t(data_41fdc4))
            eax_16 = sub_401196(sub_4013f5())
            sub_4054e2(esi_1, data_42d458, eax_16)
else
    long double x87_r7_1
    
    if (result == 4)
        result = data_41fdc4
        
        if (result == 0xf || result == 0x1e || result == 0x2d)
            x87_r7_1 = float.t(data_41fdc4)
        label_40573a:
            int32_t var_10_2 = ecx
            int32_t var_14_2 = ecx
            var_14_2.q = fconvert.d(x87_r7_1)
            char* eax_2 = sub_401196(sub_4013f5())
            return sub_4054e2(arg1, data_42d458, eax_2)
        
        if (result != 0)
            return result
        
        return sub_4054e2(arg1, 4, "hour")
    
    if (result == 5)
        esi_1 = arg1
        sub_4054e2(esi_1, result, "its")
        char* var_14_3
        var_14_3.q = fconvert.d(float.t(data_41eb94))
        char* eax_4 = sub_401196(sub_4013f5())
        sub_4054e2(esi_1, data_42d458, eax_4)
        ecx_1 = sub_4054e2(esi_1, data_42d458, U"h")
        
        if (data_41fdc4 == 0)
            ecx_1 = sub_4054e2(esi_1, data_42d458, "00")
        
        int32_t eax_5 = data_41fdc4
        
        if (eax_5 s> 0)
            if (eax_5 s< 0xa)
                ecx_1 = sub_4054e2(esi_1, data_42d458, U"o")
            
            if (data_41fdc4 - 1 u<= 0xb)
                void* const var_10_3 = &data_416674
                int32_t var_14_6 = ecx_1
                int32_t var_18_7 = ecx_1
                var_18_7.q = fconvert.d(float.t(data_41fdc4))
                char* var_14_7 = sub_401196(sub_4013f5())
                char* eax_10 = sub_40158a(2)
                ecx_1 = sub_4054e2(esi_1, data_42d458, eax_10)
        
        cond:0_1 = data_41fdc4 s<= 0xc
        goto label_4059da
    
    if (result == 6)
        result = data_41fdc4
        
        if (result == 0x1e)
            x87_r7_1 = fconvert.t(30.0)
            goto label_40573a
        
        if (result != 0)
            return result
        
        return sub_4054e2(arg1, 6, "hour")
    
    if (result == 7)
        if (data_41fdc4 != 0)
            return result
        
        return sub_4054e2(arg1, result, "hour")
    
    if (result != 8)
        return result
    
    esi_1 = arg1
    sub_4054e2(esi_1, result, "its")
    char* var_14_8
    var_14_8.q = fconvert.d(float.t(data_41eb94))
    char* eax_12 = sub_401196(sub_4013f5())
    sub_4054e2(esi_1, data_42d458, eax_12)
    int32_t ecx_2 = sub_4054e2(esi_1, data_42d458, U"h")
    
    if (data_41fdc4 == 0)
        ecx_2 = sub_4054e2(esi_1, data_42d458, "00")
    
    int32_t eax_13 = data_41fdc4
    
    if (eax_13 s> 0)
        if (eax_13 s< 0xa)
            ecx_2 = sub_4054e2(esi_1, data_42d458, U"o")
        
        if (data_41fdc4 s> 0)
            void* const var_10_4 = &data_416674
            int32_t var_14_11 = ecx_2
            int32_t var_18_12 = ecx_2
            var_18_12.q = fconvert.d(float.t(data_41fdc4))
            char* var_14_12 = sub_401196(sub_4013f5())
            eax_16 = sub_40158a(2)
            sub_4054e2(esi_1, data_42d458, eax_16)
result = sub_4054e2(esi_1, data_42d458, U"mh")

if (data_420f08 != 0)
    return result

if (data_41cb84 != 0)
    result = sub_4054e2(esi_1, data_42d458, "PM")

if (data_41cb84 != 0 && data_41cb84 != 0)
    return result

return sub_4054e2(esi_1, data_42d458, "AM")
