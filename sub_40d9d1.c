// 函数: sub_40d9d1
// 地址: 0x40d9d1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1ae4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_c = edi
void* numberOfBytesWritten_5 = nullptr
enum WIN32_ERROR wideCharStr_6 = NO_ERROR
void* result

if (arg4 == 0)
    result = nullptr
else if (arg3 != 0)
    int32_t ebx
    int32_t var_10 = ebx
    int32_t eax_7 = (&data_42ea00)[arg2 s>> 5]
    int32_t edi_3 = (arg2 & 0x1f) << 6
    ecx.b = *(eax_7 + edi_3 + 0x24)
    ecx.b *= 2
    ecx.b s>>= 1
    char var_1ac5_1 = ecx.b
    
    if (ecx.b == 2 || ecx.b == 1)
        ecx = not.d(arg4)
        
        if ((ecx.b & 1) != 0)
            goto label_40da96
        
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else
    label_40da96:
        
        if ((*(eax_7 + edi_3 + 4) & 0x20) != 0)
            sub_410afb(eax_7, edx, ecx, arg2, 0, 0, FILE_END)
        
        enum CONSOLE_MODE var_1ae4
        uint32_t numberOfBytesWritten_1
        enum WIN32_ERROR wideCharStr
        
        if (sub_410c6a(arg2) == 0 || (*(edi_3 + (&data_42ea00)[arg2 s>> 5] + 4) & 0x80) == 0)
        label_40dd51:
            int32_t* eax_34 = (&data_42ea00)[arg2 s>> 5]
            uint32_t numberOfBytesWritten
            
            if ((eax_34[(arg2 & 0x1f) * 0x10 + 1].b & 0x80) == 0)
                if (WriteFile(eax_34[(arg2 & 0x1f) * 0x10], arg3, arg4, &numberOfBytesWritten, 
                    nullptr) == 0)
                label_40e038:
                    wideCharStr = GetLastError()
                    goto label_40e03e
                
                uint32_t numberOfBytesWritten_4 = numberOfBytesWritten
                wideCharStr = NO_ERROR
                numberOfBytesWritten_5 = numberOfBytesWritten_4
            label_40e03e:
                
                if (numberOfBytesWritten_5 == 0)
                    goto label_40e047
                
                result = numberOfBytesWritten_5 - wideCharStr_6
            else
                wideCharStr = NO_ERROR
                uint8_t buffer[0x6a8]
                
                if (var_1ac5_1 != 0)
                    if (var_1ac5_1 == 2)
                        char* ebx_4 = arg3
                        
                        if (arg4 u<= 0)
                            goto label_40e085
                        
                        do
                            int32_t var_1ac4_2 = 0
                            int32_t ecx_13 = ebx_4 - arg3
                            int16_t* eax_41 = &buffer
                            
                            while (ecx_13 u< arg4)
                                uint32_t edx_4 = zx.d(*ebx_4)
                                ebx_4 = &ebx_4[2]
                                ecx_13 += 2
                                var_1ae4 = ebx_4
                                
                                if (edx_4 == 0xa)
                                    wideCharStr_6 += 2
                                    *eax_41 = 0xd
                                    ebx_4 = var_1ae4
                                    eax_41 = &eax_41[1]
                                    var_1ac4_2 += 2
                                
                                var_1ac4_2 += 2
                                *eax_41 = edx_4.w
                                eax_41 = &eax_41[1]
                                
                                if (var_1ac4_2 u>= 0x13fe)
                                    break
                            
                            uint32_t nNumberOfBytesToWrite_2 = eax_41 - &buffer
                            
                            if (WriteFile(*(edi_3 + (&data_42ea00)[arg2 s>> 5]), &buffer, 
                                    nNumberOfBytesToWrite_2, &numberOfBytesWritten, nullptr) == 0)
                                goto label_40e038
                            
                            uint32_t numberOfBytesWritten_3 = numberOfBytesWritten
                            numberOfBytesWritten_5 += numberOfBytesWritten_3
                            
                            if (numberOfBytesWritten_3 s< nNumberOfBytesToWrite_2)
                                break
                        while (ebx_4 - arg3 u< arg4)
                        
                        goto label_40e03e
                    
                    numberOfBytesWritten_1 = arg3
                    
                    if (arg4 u<= 0)
                        goto label_40e085
                    
                    void* numberOfBytesWritten_6
                    
                    do
                        int32_t var_1ac4_3 = 0
                        void* ecx_15 = numberOfBytesWritten_1 - arg3
                        wchar16 wideCharStr_1[0x346]
                        wchar16 (* eax_48)[0x346] = &wideCharStr_1
                        
                        while (ecx_15 u< arg4)
                            uint32_t edx_6 = zx.d(*numberOfBytesWritten_1)
                            numberOfBytesWritten_1 += 2
                            ecx_15 += 2
                            
                            if (edx_6 == 0xa)
                                *eax_48 = 0xd
                                eax_48 = &(*eax_48)[1]
                                var_1ac4_3 += 2
                            
                            var_1ac4_3 += 2
                            *eax_48 = edx_6.w
                            eax_48 = &(*eax_48)[1]
                            
                            if (var_1ac4_3 u>= 0x6a8)
                                break
                        
                        int32_t esi_7 = 0
                        int32_t eax_50
                        int32_t edx_7
                        edx_7:eax_50 = sx.q(eax_48 - &wideCharStr_1)
                        void multiByteStr
                        int32_t eax_53 = WideCharToMultiByte(0xfde9, 0, &wideCharStr_1, 
                            (eax_50 - edx_7) s>> 1, &multiByteStr, 0xd55, nullptr, nullptr)
                        
                        if (eax_53 == 0)
                            goto label_40e038
                        
                        do
                            if (WriteFile(*(edi_3 + (&data_42ea00)[arg2 s>> 5]), 
                                    &__saved_ebp + esi_7 - 0x1410, eax_53 - esi_7, 
                                    &numberOfBytesWritten, nullptr) == 0)
                                wideCharStr = GetLastError()
                                break
                            
                            esi_7 += numberOfBytesWritten
                        while (eax_53 s> esi_7)
                        
                        if (eax_53 s> esi_7)
                            break
                        
                        numberOfBytesWritten_6 = numberOfBytesWritten_1 - arg3
                        numberOfBytesWritten_5 = numberOfBytesWritten_6
                    while (numberOfBytesWritten_6 u< arg4)
                    goto label_40e03e
                
                char* ebx_3 = arg3
                
                if (arg4 u> 0)
                    do
                        int32_t esi_4 = 0
                        int32_t ecx_11 = ebx_3 - arg3
                        char* eax_35 = &buffer
                        
                        while (ecx_11 u< arg4)
                            char edx_1 = *ebx_3
                            ebx_3 = &ebx_3[1]
                            ecx_11 += 1
                            var_1ae4 = ebx_3
                            
                            if (edx_1 == 0xa)
                                wideCharStr_6 += 1
                                *eax_35 = 0xd
                                eax_35 = &eax_35[1]
                                esi_4 += 1
                            
                            *eax_35 = edx_1
                            eax_35 = &eax_35[1]
                            esi_4 += 1
                            
                            if (esi_4 u>= 0x13ff)
                                break
                        
                        uint32_t nNumberOfBytesToWrite_1 = eax_35 - &buffer
                        
                        if (WriteFile(*(edi_3 + (&data_42ea00)[arg2 s>> 5]), &buffer, 
                                nNumberOfBytesToWrite_1, &numberOfBytesWritten, nullptr) == 0)
                            goto label_40e038
                        
                        uint32_t numberOfBytesWritten_2 = numberOfBytesWritten
                        numberOfBytesWritten_5 += numberOfBytesWritten_2
                        
                        if (numberOfBytesWritten_2 s< nNumberOfBytesToWrite_1)
                            break
                    while (ebx_3 - arg3 u< arg4)
                    
                    goto label_40e03e
                
            label_40e085:
                
                if ((*(edi_3 + (&data_42ea00)[arg2 s>> 5] + 4) & 0x40) == 0 || *arg3 != 0x1a)
                    *__errno() = 0x1c
                    *___doserrno() = 0
                    result = 0xffffffff
                else
                    result = nullptr
        else
            int32_t ecx_3
            ecx_3.b = *(__getptd()[0x1b] + 0x14) == 0
            
            if (GetConsoleMode(*(edi_3 + (&data_42ea00)[arg2 s>> 5]), &var_1ae4) == 0
                    || (ecx_3 != 0 && var_1ac5_1 == 0))
                goto label_40dd51
            
            uint32_t eax_16
            enum WIN32_ERROR wideCharStr_4
            eax_16, wideCharStr_4 = GetConsoleCP()
            char* ebx_2 = arg3
            var_1ae4 = eax_16
            numberOfBytesWritten_1 = 0
            
            if (arg4 u> 0)
                int32_t var_1ac4_1 = 0
                
                do
                    uint32_t eax_17
                    eax_17.b = var_1ac5_1
                    enum WIN32_ERROR wideCharStr_5
                    
                    if (eax_17.b != 0)
                        if (eax_17.b == 1 || eax_17.b == 2)
                            uint32_t wideCharStr_3 = zx.d(*ebx_2)
                            wideCharStr_4.b = wideCharStr_3 == 0xa
                            ebx_2 = &ebx_2[2]
                            var_1ac4_1 += 2
                            wideCharStr = wideCharStr_3
                            wideCharStr_5 = wideCharStr_4
                        
                        if (eax_17.b == 1 || eax_17.b == 2)
                            enum WIN32_ERROR wideCharStr_2 = wideCharStr
                            int16_t eax_32 = sub_41256b(wideCharStr_4)
                            wideCharStr_4 = wideCharStr_2
                            
                            if (eax_32 != wideCharStr.w)
                                goto label_40e038
                            
                            numberOfBytesWritten_5 += 2
                            
                            if (wideCharStr_5 != NO_ERROR)
                                enum WIN32_ERROR wideCharStr_7 = ERROR_INVALID_DATA
                                wideCharStr = ERROR_INVALID_DATA
                                int16_t eax_33 = sub_41256b(wideCharStr_4)
                                wideCharStr_4 = wideCharStr_7
                                
                                if (eax_33 != wideCharStr.w)
                                    goto label_40e038
                                
                                numberOfBytesWritten_5 += 1
                                wideCharStr_6 += 1
                    else
                        wideCharStr_4.b = *ebx_2
                        enum WIN32_ERROR wideCharStr_8
                        wideCharStr_8.b = wideCharStr_4.b == 0xa
                        wideCharStr_5 = wideCharStr_8
                        void* eax_19 = (&data_42ea00)[arg2 s>> 5] + edi_3
                        int32_t* var_18_3
                        int32_t var_14_4
                        
                        if (*(eax_19 + 0x38) == 0)
                            if (_atof(wideCharStr_4.b) == 0)
                                var_14_4 = 1
                                var_18_3 = ebx_2
                                goto label_40dbbf
                            
                            if (arg3 - ebx_2 + arg4 u<= 1)
                                numberOfBytesWritten_5 += 1
                                *(edi_3 + (&data_42ea00)[arg2 s>> 5] + 0x34) = *ebx_2
                                *(edi_3 + (&data_42ea00)[arg2 s>> 5] + 0x38) = 1
                                break
                            
                            if (__mbsnbcmp(&wideCharStr, ebx_2, 2) == 0xffffffff)
                                break
                            
                            ebx_2 = &ebx_2[1]
                            var_1ac4_1 += 1
                        else
                            var_10.b = *(eax_19 + 0x34)
                            var_10:1.b = wideCharStr_4.b
                            *(eax_19 + 0x38) = 0
                            var_14_4 = 2
                            var_18_3 = &var_10
                        label_40dbbf:
                            
                            if (__mbsnbcmp(&wideCharStr, var_18_3, var_14_4) == 0xffffffff)
                                break
                        ebx_2 = &ebx_2[1]
                        var_1ac4_1 += 1
                        int32_t nNumberOfBytesToWrite = WideCharToMultiByte(var_1ae4, 0, 
                            &wideCharStr, 1, &var_10, 5, nullptr, nullptr)
                        
                        if (nNumberOfBytesToWrite == 0)
                            break
                        
                        if (WriteFile(*(edi_3 + (&data_42ea00)[arg2 s>> 5]), &var_10, 
                                nNumberOfBytesToWrite, &numberOfBytesWritten_1, nullptr) == 0)
                            goto label_40e038
                        
                        wideCharStr_4 = wideCharStr_6
                        numberOfBytesWritten_5 = var_1ac4_1 + wideCharStr_4
                        
                        if (numberOfBytesWritten_1 s< nNumberOfBytesToWrite)
                            break
                        
                        if (wideCharStr_5 != NO_ERROR)
                            var_10.b = 0xd
                            BOOL eax_31
                            eax_31, wideCharStr_4 = WriteFile(
                                *(edi_3 + (&data_42ea00)[arg2 s>> 5]), &var_10, 1, 
                                &numberOfBytesWritten_1, nullptr)
                            
                            if (eax_31 == 0)
                                goto label_40e038
                            
                            if (numberOfBytesWritten_1 s< 1)
                                break
                            
                            wideCharStr_6 += 1
                            numberOfBytesWritten_5 += 1
                while (var_1ac4_1 u< arg4)
                
                goto label_40e03e
            
        label_40e047:
            
            if (wideCharStr == NO_ERROR)
                goto label_40e085
            
            if (wideCharStr != ERROR_ACCESS_DENIED)
                ___acrt_errno_map_os_error(wideCharStr)
            else
                *__errno() = 9
                *___doserrno() = 5
            
            result = 0xffffffff
else
    *___doserrno() = 0
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_407fad(arg1 ^ &__saved_ebp)
return result
