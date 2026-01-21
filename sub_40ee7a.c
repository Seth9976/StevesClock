// 函数: sub_40ee7a
// 地址: 0x40ee7a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ebx = 0
char* esi = arg2
int32_t var_8 = data_42e9cc
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_14 = 0

while (*esi == 0x20)
    esi = &esi[1]

int32_t eax
eax.b = *esi
int32_t var_8_1

if (eax.b == 0x61)
    ebx = 0x109
    var_8_1 = var_8 | 2
else if (eax.b == 0x72)
    var_8_1 = var_8 | 1
else
    if (eax.b != 0x77)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return nullptr
    
    ebx = 0x301
    var_8_1 = var_8 | 2

int32_t ecx_1 = 1
void* esi_1 = &esi[1]
eax.b = *esi_1
int32_t edi
int32_t var_20_1 = edi

if (eax.b != 0)
    while (true)
        if (ecx_1 != 0)
            eax = sx.d(eax.b)
            
            if (eax s> 0x53)
                int32_t eax_4 = eax - 0x54
                
                if (eax == 0x54)
                    if ((0x1000 & ebx) == 0)
                        ebx |= 0x1000
                    else
                        ecx_1 = 0
                else if (eax_4 == 0xe)
                    if ((ebx & 0xc000) != 0)
                        ecx_1 = 0
                    else
                        ebx |= 0x8000
                else if (eax_4 == 0xf)
                    if (var_10 != 0)
                        ecx_1 = 0
                    else
                        var_8_1 |= 0x4000
                        var_10 = 1
                else if (eax_4 != 0x1a)
                    if (eax_4 != 0x20)
                        goto label_40f0bd
                    
                    if ((ebx & 0xc000) != 0)
                        ecx_1 = 0
                    else
                        ebx |= 0x4000
                else if (var_10 != 0)
                    ecx_1 = 0
                else
                    var_8_1 &= 0xffffbfff
                    var_10 = 1
            else if (eax != 0x53)
                if (eax != 0x20)
                    if (eax != 0x2b)
                        if (eax == 0x2c)
                            var_14 = 1
                            ecx_1 = 0
                        else if (eax != 0x44)
                            if (eax == 0x4e)
                                ebx |= 0x80
                            else
                                if (eax != 0x52)
                                    goto label_40f0bd
                                
                                if (var_c != eax - 0x52)
                                    ecx_1 = 0
                                else
                                    var_c = 1
                                    ebx |= 0x10
                        else if ((ebx.b & 0x40) != 0)
                            ecx_1 = 0
                        else
                            ebx |= 0x40
                    else if ((ebx.b & 2) != 0)
                        ecx_1 = 0
                    else
                        ebx = (ebx & 0xfffffffe) | 2
                        var_8_1 = (var_8_1 & 0xfffffffc) | 0x80
            else if (var_c != 0)
                ecx_1 = 0
            else
                var_c = 1
                ebx |= 0x20
            
            esi_1 += 1
            eax.b = *esi_1
            
            if (eax.b != 0)
                continue
        
        if (var_14 == 0)
            break
        
        while (*esi_1 == 0x20)
            esi_1 += 1
        
        if (__mbsnbicoll("ccs", esi_1, 3) != 0)
            goto label_40f0bd
        
        void* esi_2 = esi_1 + 3
        
        while (*esi_2 == 0x20)
            esi_2 += 1
        
        if (*esi_2 != 0x3d)
            goto label_40f0bd
        
        do
            esi_2 += 1
        while (*esi_2 == 0x20)
        
        if (__mbsnicoll(esi_2, "UTF-8", 5) == 0)
            esi_1 = esi_2 + 5
            ebx |= 0x40000
            break
        
        if (__mbsnicoll(esi_2, "UTF-16LE", 8) == 0)
            esi_1 = esi_2 + 8
            ebx |= 0x20000
            break
        
        if (__mbsnicoll(esi_2, "UNICODE", 7) != 0)
            goto label_40f0bd
        
        esi_1 = esi_2 + 7
        ebx |= 0x10000
        break

while (*esi_1 == 0x20)
    esi_1 += 1

int32_t* result

if (*esi_1 == 0)
    if (__wsopen_s(&arg2, arg1, ebx.b, arg3, 0x180) == 0)
        data_42dc94 += 1
        result = arg4
        result[3] = var_8_1
        result[1] = 0
        *result = 0
        result[2] = 0
        result[7] = 0
        result[4] = arg2
    else
        result = nullptr
else
label_40f0bd:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr

return result
