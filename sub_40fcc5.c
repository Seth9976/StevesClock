// 函数: sub_40fcc5
// 地址: 0x40fcc5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t result_1 = 0xfffffffe
uint32_t var_20 = arg3

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    return 0xffffffff

if (arg1 s< 0 || arg1 u>= data_42e9e0)
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
    return 0xffffffff

int32_t edi
int32_t var_2c_1 = edi
int32_t eax_6 = (&data_42ea00)[arg1 s>> 5]
int32_t esi_2 = (arg1 & 0x1f) << 6
char ecx = *(eax_6 + esi_2 + 4)
int32_t result

if ((ecx & 1) == 0)
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
    result = 0xffffffff
else if (arg3 u> 0x7fffffff)
label_40fdb7:
    *___doserrno() = 0
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    int32_t result_2 = 0
    
    if (arg3 == 0 || (ecx & 2) != 0)
        result = 0
    else
        if (arg2 == 0)
            goto label_40fdb7
        
        eax_6.b = *(eax_6 + esi_2 + 0x24)
        eax_6.b *= 2
        eax_6.b s>>= 1
        char var_6_1 = eax_6.b
        int32_t eax_9 = sx.d(eax_6.b)
        uint32_t lpMultiByteStr
        char* ebx_1
        
        if (eax_9 == 1)
            if (((not.d(arg3)).b & 1) == 0)
                goto label_40fdb7
            
            uint32_t eax_19 = arg3 u>> 1
            arg3 = 4
            
            if (eax_19 u>= 4)
                arg3 = eax_19
            
            char* eax_20
            int32_t edx_2
            eax_20, edx_2 = sub_40ce55(arg3)
            ebx_1 = eax_20
            lpMultiByteStr = ebx_1
            
            if (ebx_1 != 0)
                uint32_t eax_23
                int32_t edx_3
                eax_23, edx_3 = sub_410afb(eax_20, edx_2, arg3, arg1, 0, 0, FILE_CURRENT)
                int32_t ecx_2 = (&data_42ea00)[arg1 s>> 5]
                *(esi_2 + ecx_2 + 0x28) = eax_23
                *(esi_2 + ecx_2 + 0x2c) = edx_3
                goto label_40fe26
            
            *__errno() = 0xc
            *___doserrno() = 8
            result = 0xffffffff
        else
            if (eax_9 != 2)
                goto label_40fda2
            
            if (((not.d(arg3)).b & 1) == 0)
                goto label_40fdb7
            
            arg3 &= 0xfffffffe
        label_40fda2:
            ebx_1 = arg2
            lpMultiByteStr = ebx_1
        label_40fe26:
            void* ecx_4 = (&data_42ea00)[arg1 s>> 5] + esi_2
            void* lpBuffer = ebx_1
            
            if ((*(ecx_4 + 4) & 0x48) != 0)
                ecx_4.b = *(ecx_4 + 5)
                
                if (ecx_4.b != 0xa && arg3 != 0)
                    arg3 -= 1
                    *ebx_1 = ecx_4.b
                    lpBuffer = &ebx_1[1]
                    result_2 = 1
                    *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 5) = 0xa
                    
                    if (var_6_1 != 0)
                        int32_t ecx_6
                        ecx_6.b = *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x25)
                        
                        if (ecx_6.b != 0xa && arg3 != 0)
                            *lpBuffer = ecx_6.b
                            lpBuffer += 1
                            arg3 -= 1
                            result_2 = 2
                            *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x25) = 0xa
                            
                            if (var_6_1 == 1)
                                int32_t ecx_8
                                ecx_8.b = *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x26)
                                
                                if (ecx_8.b != 0xa && arg3 != 0)
                                    *lpBuffer = ecx_8.b
                                    lpBuffer += 1
                                    arg3 -= 1
                                    result_2 = 3
                                    *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x26) = 0xa
            
            uint32_t numberOfBytesRead
            BOOL eax_25
            int32_t edx_4
            eax_25, edx_4 = ReadFile(*(esi_2 + (&data_42ea00)[arg1 s>> 5]), lpBuffer, arg3, 
                &numberOfBytesRead, nullptr)
            uint32_t numberOfBytesRead_1
            
            if (eax_25 != 0)
                numberOfBytesRead_1 = numberOfBytesRead
            
            if (eax_25 == 0 || numberOfBytesRead_1 s< 0 || numberOfBytesRead_1 u> arg3)
                enum WIN32_ERROR eax_47 = GetLastError()
                
                if (eax_47 == ERROR_ACCESS_DENIED)
                    *__errno() = 9
                    *___doserrno() = 5
                    result_1 = 0xffffffff
                else if (eax_47 != ERROR_BROKEN_PIPE)
                    ___acrt_errno_map_os_error(eax_47)
                    result_1 = 0xffffffff
                else
                    result_1 = 0
            else
                result_2 += numberOfBytesRead_1
                char* eax_27 = esi_2 + (&data_42ea00)[arg1 s>> 5] + 4
                
                if ((*eax_27 & 0x80) != 0)
                    if (var_6_1 == 2)
                        if (numberOfBytesRead_1 == 0 || *ebx_1 != 0xa)
                            *eax_27 &= 0xfb
                        else
                            *eax_27 |= 4
                        
                        uint32_t lpMultiByteStr_2 = lpMultiByteStr
                        int32_t eax_52 = result_2 + lpMultiByteStr_2
                        arg3 = lpMultiByteStr_2
                        
                        if (lpMultiByteStr_2 u< eax_52)
                            do
                                uint32_t ecx_20 = zx.d(*arg3)
                                
                                if (ecx_20 == 0x1a)
                                    char* esi_3 = esi_2 + (&data_42ea00)[arg1 s>> 5] + 4
                                    
                                    if ((*esi_3 & 0x40) != 0)
                                        uint32_t eax_64
                                        eax_64.w = *arg3
                                        *lpMultiByteStr_2 = eax_64.w
                                        lpMultiByteStr_2 += 2
                                    else
                                        *esi_3 |= 2
                                    
                                    break
                                
                                if (ecx_20 != 0xd)
                                    *lpMultiByteStr_2 = ecx_20.w
                                    lpMultiByteStr_2 += 2
                                    arg3 += 2
                                else if (arg3 u>= eax_52 - 2)
                                    arg3 += 2
                                    int16_t buffer
                                    BOOL eax_56
                                    int32_t ecx_24
                                    int32_t edx_7
                                    eax_56, ecx_24, edx_7 = ReadFile(
                                        *(esi_2 + (&data_42ea00)[arg1 s>> 5]), &buffer, 2, 
                                        &numberOfBytesRead, nullptr)
                                    
                                    if (eax_56 != 0)
                                        if (numberOfBytesRead == 0)
                                            goto label_410204
                                        
                                        goto label_4101af
                                    
                                    enum WIN32_ERROR eax_57
                                    eax_57, ecx_24, edx_7 = GetLastError()
                                    
                                    if (eax_57 != NO_ERROR || numberOfBytesRead == 0)
                                        goto label_410204
                                    
                                label_4101af:
                                    int32_t eax_58 = (&data_42ea00)[arg1 s>> 5]
                                    
                                    if ((*(esi_2 + eax_58 + 4) & 0x48) == 0)
                                        if (lpMultiByteStr_2 == lpMultiByteStr && buffer == 0xa)
                                            goto label_410171
                                        
                                        sub_410afb(eax_58, edx_7, ecx_24, arg1, 0xfffffffe, 
                                            0xffffffff, FILE_CURRENT)
                                        
                                        if (buffer != 0xa)
                                            goto label_410204
                                    else
                                        if (buffer == 0xa)
                                            goto label_410171
                                        
                                        *lpMultiByteStr_2 = 0xd
                                        ecx_24.b = buffer.b
                                        *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 5) = ecx_24.b
                                        ecx_24.b = buffer:1.b
                                        *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x25) = ecx_24.b
                                        *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x26) = 0xa
                                        lpMultiByteStr_2 += 2
                                else if (*(arg3 + 2) != 0xa)
                                    arg3 += 2
                                label_410204:
                                    *lpMultiByteStr_2 = 0xd
                                    lpMultiByteStr_2 += 2
                                else
                                    arg3 += 4
                                label_410171:
                                    *lpMultiByteStr_2 = 0xa
                                    lpMultiByteStr_2 += 2
                            while (arg3 u< eax_52)
                        
                        result_2 = lpMultiByteStr_2 - lpMultiByteStr
                    else
                        if (numberOfBytesRead_1 == 0 || *ebx_1 != 0xa)
                            *eax_27 &= 0xfb
                        else
                            *eax_27 |= 4
                        
                        uint32_t lpMultiByteStr_1 = lpMultiByteStr
                        int32_t eax_29 = result_2 + lpMultiByteStr_1
                        arg3 = lpMultiByteStr_1
                        int32_t var_10_1 = eax_29
                        
                        if (lpMultiByteStr_1 u< eax_29)
                            do
                                eax_29.b = *arg3
                                
                                if (eax_29.b == 0x1a)
                                    char* eax_39 = esi_2 + (&data_42ea00)[arg1 s>> 5] + 4
                                    
                                    if ((*eax_39 & 0x40) != 0)
                                        eax_39.b = *arg3
                                        *lpMultiByteStr_1 = eax_39.b
                                        lpMultiByteStr_1 += 1
                                    else
                                        *eax_39 |= 2
                                    
                                    break
                                
                                if (eax_29.b != 0xd)
                                    *lpMultiByteStr_1 = eax_29.b
                                    lpMultiByteStr_1 += 1
                                    arg3 += 1
                                else if (arg3 u>= var_10_1 - 1)
                                    arg3 += 1
                                    uint8_t buffer_1
                                    BOOL eax_34
                                    eax_34, numberOfBytesRead_1, edx_4 = ReadFile(
                                        *(esi_2 + (&data_42ea00)[arg1 s>> 5]), &buffer_1, 1, 
                                        &numberOfBytesRead, nullptr)
                                    
                                    if (eax_34 != 0)
                                        if (numberOfBytesRead != 0)
                                            goto label_40ff89
                                        
                                        *lpMultiByteStr_1 = 0xd
                                        lpMultiByteStr_1 += 1
                                    else
                                        enum WIN32_ERROR eax_35
                                        eax_35, numberOfBytesRead_1, edx_4 = GetLastError()
                                        
                                        if (eax_35 != NO_ERROR || numberOfBytesRead == 0)
                                            *lpMultiByteStr_1 = 0xd
                                            lpMultiByteStr_1 += 1
                                        else
                                        label_40ff89:
                                            int32_t eax_36 = (&data_42ea00)[arg1 s>> 5]
                                            
                                            if ((*(esi_2 + eax_36 + 4) & 0x48) == 0)
                                                if (lpMultiByteStr_1 != lpMultiByteStr
                                                        || buffer_1 != 0xa)
                                                    numberOfBytesRead_1, edx_4 = sub_410afb(eax_36, 
                                                        edx_4, numberOfBytesRead_1, arg1, 
                                                        0xffffffff, 0xffffffff, FILE_CURRENT)
                                                    
                                                    if (buffer_1 != 0xa)
                                                        *lpMultiByteStr_1 = 0xd
                                                        lpMultiByteStr_1 += 1
                                                else
                                                    *lpMultiByteStr_1 = 0xa
                                                    lpMultiByteStr_1 += 1
                                            else if (buffer_1 == 0xa)
                                                *lpMultiByteStr_1 = 0xa
                                                lpMultiByteStr_1 += 1
                                            else
                                                *lpMultiByteStr_1 = 0xd
                                                numberOfBytesRead_1.b = buffer_1
                                                *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 5) =
                                                    numberOfBytesRead_1.b
                                                lpMultiByteStr_1 += 1
                                else if (*(arg3 + 1) != 0xa)
                                    arg3 += 1
                                    *lpMultiByteStr_1 = 0xd
                                    lpMultiByteStr_1 += 1
                                else
                                    arg3 += 2
                                    *lpMultiByteStr_1 = 0xa
                                    lpMultiByteStr_1 += 1
                            while (arg3 u< var_10_1)
                        
                        uint32_t result_3 = lpMultiByteStr_1 - lpMultiByteStr
                        result_2 = result_3
                        
                        if (var_6_1 == 1 && result_3 != 0)
                            char* ebx_2 = lpMultiByteStr_1 - 1
                            numberOfBytesRead_1.b = *ebx_2
                            
                            if (numberOfBytesRead_1.b s< 0)
                                int32_t eax_41 = 1
                                uint32_t ecx_10 = zx.d(numberOfBytesRead_1.b)
                                
                                while (*(ecx_10 + 0x41ae30) == 0)
                                    if (eax_41 s> 4)
                                        break
                                    
                                    if (ebx_2 u< lpMultiByteStr)
                                        break
                                    
                                    ebx_2 -= 1
                                    ecx_10 = zx.d(*ebx_2)
                                    eax_41 += 1
                                
                                edx_4.b = *ebx_2
                                int32_t ecx_12 = sx.d(*(zx.d(edx_4.b) + 0x41ae30))
                                
                                if (ecx_12 != 0)
                                    if (ecx_12 + 1 != eax_41)
                                        int32_t ecx_14 = (&data_42ea00)[arg1 s>> 5]
                                        
                                        if ((*(ecx_14 + esi_2 + 4) & 0x48) == 0)
                                            int32_t eax_44
                                            int32_t edx_5
                                            edx_5:eax_44 = sx.q(neg.d(eax_41))
                                            sub_410afb(eax_44, edx_5, ecx_14, arg1, eax_44, edx_5, 
                                                FILE_CURRENT)
                                        else
                                            void* ebx_3 = &ebx_2[1]
                                            *(ecx_14 + esi_2 + 5) = edx_4.b
                                            
                                            if (eax_41 s>= 2)
                                                edx_4.b = *ebx_3
                                                *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x25) =
                                                    edx_4.b
                                                ebx_3 += 1
                                            
                                            if (eax_41 == 3)
                                                edx_4.b = *ebx_3
                                                *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x26) =
                                                    edx_4.b
                                                ebx_3 += 1
                                            
                                            ebx_2 = ebx_3 - eax_41
                                    else
                                        ebx_2 = &ebx_2[eax_41]
                                    
                                    goto label_41009f
                                
                                *__errno() = 0x2a
                                result_1 = 0xffffffff
                            else
                                ebx_2 = &ebx_2[1]
                            label_41009f:
                                void* cbMultiByte = ebx_2 - lpMultiByteStr
                                int32_t result_4 = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, 
                                    cbMultiByte, arg2, var_20 u>> 1)
                                result_2 = result_4
                                
                                if (result_4 != 0)
                                    int32_t ecx_19
                                    ecx_19.b = result_2 != cbMultiByte
                                    result_2 *= 2
                                    *(esi_2 + (&data_42ea00)[arg1 s>> 5] + 0x30) = ecx_19
                                else
                                    ___acrt_errno_map_os_error(GetLastError())
                                    result_1 = 0xffffffff
            
            if (lpMultiByteStr != arg2)
                __free_base(lpMultiByteStr)
            
            result = result_1
            
            if (result == 0xfffffffe)
                result = result_2

return result
