// 函数: sub_4079a8
// 地址: 0x4079a8
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_40 = edi
char* lpFormat

if (arg2 == 0)
    lpFormat = *(arg6 + 0xa0)
else if (arg2 == 1)
    lpFormat = *(arg6 + 0xa4)
else
    lpFormat = *(arg6 + 0xa8)

int32_t result
char* lpDateStr

if (*(arg6 + 0xb0) == 1)
label_407b84_1:
    
    while (true)
    label_407b84:
        lpDateStr.b = *lpFormat
        
        if (lpDateStr.b == 0)
            goto label_407af2
        
        int32_t edx_2 = 0
        
        if (*arg5 == 0)
            goto label_407af2
        
        int32_t var_1c_2 = 0
        char* lpFormat_2 = lpFormat
        
        do
            lpFormat_2 = &lpFormat_2[1]
            edx_2 += 1
        while (*lpFormat_2 == lpDateStr.b)
        
        char* lpFormat_1 = lpFormat_2
        int32_t ecx_9 = sx.d(lpDateStr.b)
        uint32_t eax_13
        
        if (ecx_9 s<= 0x64)
            if (ecx_9 == 0x64)
                if (edx_2 == 1)
                    var_1c_2 = 1
                label_407c9a:
                    eax_13.b = 0x64
                    goto label_407de7
                
                if (edx_2 == 2)
                    goto label_407c9a
                
                if (edx_2 == 3)
                    eax_13.b = 0x61
                    goto label_407de7
                
                if (edx_2 != 4)
                    goto label_407b54
                
                eax_13.b = 0x41
                goto label_407de7
            
            if (ecx_9 != 0x27)
                if (ecx_9 != 0x41)
                    if (ecx_9 == 0x48)
                        if (edx_2 == 1)
                            var_1c_2 = 1
                            eax_13.b = 0x48
                            goto label_407de7
                        
                        if (edx_2 != 2)
                            goto label_407b54
                        
                        eax_13.b = 0x48
                        goto label_407de7
                    
                    if (ecx_9 == 0x4d)
                        if (edx_2 == 1)
                            var_1c_2 = 1
                            eax_13.b = 0x6d
                            goto label_407de7
                        
                        if (edx_2 == 2)
                            eax_13.b = 0x6d
                            goto label_407de7
                        
                        if (edx_2 == 3)
                            eax_13.b = 0x62
                            goto label_407de7
                        
                        if (edx_2 != 4)
                            goto label_407b54
                        
                        eax_13.b = 0x42
                        goto label_407de7
                    
                    if (ecx_9 != 0x61)
                        goto label_407b54
                
                if (sub_40cf86(lpFormat, "am/pm") != 0)
                    if (sub_40cf86(lpFormat, "a/p") == 0)
                        lpFormat_1 = &lpFormat[3]
                else
                    lpFormat_1 = &lpFormat[5]
                
                eax_13.b = 0x70
                goto label_407de7
            
            lpFormat = &lpFormat[edx_2]
            
            if ((edx_2.b & 1) == 0)
                continue
            else
                lpDateStr.b = *lpFormat
                
                if (lpDateStr.b == 0)
                    goto label_407af2
                
                while (true)
                    if (*arg5 == 0)
                        goto label_407b84
                    
                    if (lpDateStr.b == 0x27)
                        lpFormat = &lpFormat[1]
                        goto label_407b84
                    
                    if (sub_40d0c6(lpDateStr.b, arg1) != 0 && *arg5 u> 1)
                        if (lpFormat[1] == 0)
                            break
                        
                        **arg4 = *lpFormat
                        *arg4 = &(*arg4)[1]
                        lpFormat = &lpFormat[1]
                        *arg5 -= 1
                    
                    char* ecx_13
                    ecx_13.b = *lpFormat
                    **arg4 = ecx_13.b
                    *arg4 = &(*arg4)[1]
                    lpFormat = &lpFormat[1]
                    *arg5 -= 1
                    lpDateStr.b = *lpFormat
                    
                    if (lpDateStr.b == 0)
                        goto label_407b84
        else if (ecx_9 != 0x68)
            if (ecx_9 == 0x6d)
                if (edx_2 == 1)
                    var_1c_2 = 1
                    eax_13.b = 0x4d
                    goto label_407de7
                
                if (edx_2 != 2)
                    goto label_407b54
                
                eax_13.b = 0x4d
                goto label_407de7
            
            if (ecx_9 == 0x73)
                if (edx_2 == 1)
                    var_1c_2 = 1
                    eax_13.b = 0x53
                    goto label_407de7
                
                if (edx_2 != 2)
                    goto label_407b54
                
                eax_13.b = 0x53
                goto label_407de7
            
            if (ecx_9 != 0x74)
                if (ecx_9 != 0x79)
                    goto label_407b54
                
                if (edx_2 == 2)
                    eax_13.b = 0x79
                    goto label_407de7
                
                if (edx_2 != 4)
                    goto label_407b54
                
                eax_13.b = 0x59
                goto label_407de7
            
            char* edi_3
            
            if (*(arg3 + 8) s> 0xb)
                edi_3 = *(arg6 + 0x9c)
            else
                edi_3 = *(arg6 + 0x98)
            
            if (edx_2 != 1 || *arg5 u<= 0)
                while (true)
                    lpDateStr.b = *edi_3
                    
                    if (lpDateStr.b == 0)
                        break
                    
                    if (*arg5 u<= 0)
                        break
                    
                    if (sub_40d0c6(lpDateStr.b, arg1) != 0 && *arg5 u> 1)
                        if (edi_3[1] == 0)
                            goto label_407dfb
                        
                        **arg4 = *edi_3
                        *arg4 = &(*arg4)[1]
                        edi_3 = &edi_3[1]
                        *arg5 -= 1
                    
                    char* ecx_15
                    ecx_15.b = *edi_3
                    **arg4 = ecx_15.b
                    *arg4 = &(*arg4)[1]
                    edi_3 = &edi_3[1]
                    *arg5 -= 1
                
                lpFormat = lpFormat_1
                continue
            else
                if (sub_40d0c6(*edi_3, arg1) == 0 || *arg5 u<= 1)
                    goto label_407d3c
                
                if (edi_3[1] != 0)
                    **arg4 = *edi_3
                    *arg4 = &(*arg4)[1]
                    edi_3 = &edi_3[1]
                    *arg5 -= 1
                label_407d3c:
                    char* ecx_14
                    ecx_14.b = *edi_3
                    **arg4 = ecx_14.b
                    *arg4 = &(*arg4)[1]
                    *arg5 -= 1
                    lpFormat = lpFormat_1
                    continue
        else if (edx_2 == 1)
            var_1c_2 = 1
        label_407dd5:
            eax_13.b = 0x49
        label_407de7:
            
            if (sub_4075f0(eax_13.b, arg4, arg5, arg1, arg3, arg6, var_1c_2) != 0)
                lpFormat = lpFormat_1
                continue
        else
            if (edx_2 == 2)
                goto label_407dd5
            
        label_407b54:
            
            if (sub_40d0c6(ecx_9.b, arg1) == 0 || *arg5 u<= 1)
                goto label_407b79
            
            if (lpFormat[1] != 0)
                **arg4 = *lpFormat
                *arg4 = &(*arg4)[1]
                lpFormat = &lpFormat[1]
                *arg5 -= 1
            label_407b79:
                char* ecx_10
                ecx_10.b = *lpFormat
                **arg4 = ecx_10.b
                *arg4 = &(*arg4)[1]
                lpFormat = &lpFormat[1]
                *arg5 -= 1
                continue
    label_407dfb:
        result = 0
        break
else
    int32_t (__stdcall* const eax_4)(uint32_t Locale, uint32_t dwFlags, SYSTEMTIME* lpDate, 
        PSTR lpFormat, uint8_t* lpDateStr, int32_t cchDate) = GetDateFormatA
    
    if (arg2 == 2)
        eax_4 = GetTimeFormatA
    
    SYSTEMTIME date
    date.wYear = 0x76c + arg3[0xa]
    date.wMonth = arg3[8] + 1
    date.wDay = arg3[6]
    date.wHour = arg3[4]
    int16_t* eax_5
    eax_5.w = *arg3
    date.wSecond = eax_5.w
    date.wMinute = arg3[2]
    date.wMilliseconds = 0
    lpDateStr = eax_4(*(arg6 + 0xac), 0, &date, lpFormat, nullptr, 0)
    int32_t cchDate = lpDateStr
    
    if (lpDateStr == 0)
        goto label_407b84_1
    
    if (&lpDateStr[8] s> 0x400)
        lpDateStr = sub_40b22c(&lpDateStr[8])
        
        if (lpDateStr != 0)
            *lpDateStr = 0xdddd
            lpDateStr = &lpDateStr[8]
    else
        __alloca_probe_16(&lpDateStr[8])
        lpDateStr = &var_40
        
        if (&var_40 != 0)
            var_40 = 0xcccc
            lpDateStr = &lpDateStr[8]
    
    if (lpDateStr == 0)
        goto label_407b84_1
    
    int32_t eax_10 = eax_4(*(arg6 + 0xac), 0, &date, lpFormat, lpDateStr, cchDate) - 1
    
    if (eax_10 s> 0)
        char* lpDateStr_1 = lpDateStr
        
        while (*arg5 u> 0)
            **arg4 = *lpDateStr_1
            *arg4 = &(*arg4)[1]
            lpDateStr_1 = &lpDateStr_1[1]
            *arg5 -= 1
            eax_10 -= 1
            
            if (eax_10 s<= 0)
                break
    
    __freea_crt(lpDateStr)
label_407af2:
    result = 1
sub_407fad(eax_1 ^ &__saved_ebp)
return result
