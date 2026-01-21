// 函数: sub_409bf1
// 地址: 0x409bf1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)
void* eax = __calloc_crt(0x20, 0x40)

if (eax == 0)
    return 0xffffffff

data_42ea00 = eax
data_42e9e0 = 0x20

if (eax u< eax + 0x800)
    void* eax_1 = eax + 5
    
    do
        *(eax_1 - 5) = 0xffffffff
        *(eax_1 - 1) = 0xa00
        *(eax_1 + 3) = 0
        *(eax_1 + 0x1f) = 0xa00
        *(eax_1 + 0x21) = 0xa
        *(eax_1 + 0x33) = 0
        *(eax_1 + 0x2f) = 0
        eax_1 += 0x40
    while (eax_1 - 5 u< data_42ea00 + 0x800)

int32_t edi
int32_t var_5c_1 = edi
int32_t result

if (startupInfo.cbReserved2 == 0)
label_409d84:
    int32_t ebx_1 = 0
    
    while (true)
        int32_t* esi_9 = (ebx_1 << 6) + data_42ea00
        int32_t eax_15 = *esi_9
        
        if (eax_15 == 0xffffffff || eax_15 == 0xfffffffe)
            esi_9[1].b = 0x81
            enum STD_HANDLE nStdHandle
            
            if (ebx_1 != 0)
                int32_t eax_17 = neg.d(ebx_1 - 1)
                nStdHandle = sbb.d(eax_17, eax_17, ebx_1 != 1) - 0xb
            else
                nStdHandle = STD_INPUT_HANDLE
            
            HANDLE hFile_1 = GetStdHandle(nStdHandle)
            enum FILE_TYPE eax_19
            
            if (hFile_1 != 0xffffffff && hFile_1 != 0)
                eax_19 = GetFileType(hFile_1)
            
            if (hFile_1 == 0xffffffff || hFile_1 == 0 || eax_19 == FILE_TYPE_UNKNOWN)
                esi_9[1].b |= 0x40
                *esi_9 = 0xfffffffe
            else
                int32_t eax_20 = eax_19 & 0xff
                *esi_9 = hFile_1
                
                if (eax_20 == 2)
                    esi_9[1].b |= 0x40
                else if (eax_20 == 3)
                    esi_9[1].b |= 8
                
                if (InitializeCriticalSectionAndSpinCount(&esi_9[3], 0xfa0) == 0)
                    break
                
                esi_9[2] += 1
        else
            esi_9[1].b |= 0x80
        
        ebx_1 += 1
        
        if (ebx_1 s>= 3)
            SetHandleCount(data_42e9e0)
            result = 0
            goto label_409e30
else
    BYTE* lpReserved2 = startupInfo.lpReserved2
    
    if (lpReserved2 == 0)
        goto label_409d84
    
    int32_t i = *lpReserved2
    void* var_8_1 = &lpReserved2[4]
    void* var_c_1 = &lpReserved2[4 + i]
    
    if (i s>= 0x800)
        i = 0x800
    
    if (data_42e9e0 s< i)
        void* edi_1 = &data_42ea04
        
        do
            void* eax_4 = __calloc_crt(0x20, 0x40)
            
            if (eax_4 == 0)
                i = data_42e9e0
                break
            
            data_42e9e0 += 0x20
            *edi_1 = eax_4
            
            if (eax_4 u< eax_4 + 0x800)
                void* eax_5 = eax_4 + 5
                
                do
                    *(eax_5 - 5) = 0xffffffff
                    *(eax_5 + 3) = 0
                    *(eax_5 + 0x1f) &= 0x80
                    *(eax_5 + 0x33) = 0
                    *(eax_5 - 1) = 0xa00
                    *(eax_5 + 0x20) = 0xa0a
                    *(eax_5 + 0x2f) = 0
                    eax_5 += 0x40
                while (eax_5 - 5 u< *edi_1 + 0x800)
            
            edi_1 += 4
        while (data_42e9e0 s< i)
    
    int32_t edi_2 = 0
    
    if (i s<= 0)
        goto label_409d84
    
    while (true)
        HANDLE hFile = *var_c_1
        
        if (hFile != 0xffffffff && hFile != 0xfffffffe)
            void* ecx_5
            ecx_5.b = *var_8_1
            
            if ((ecx_5.b & 1) != 0)
                enum FILE_TYPE eax_7
                
                if ((ecx_5.b & 8) == 0)
                    eax_7 = GetFileType(hFile)
                
                if ((ecx_5.b & 8) != 0 || eax_7 != FILE_TYPE_UNKNOWN)
                    int32_t* esi_6 = ((edi_2 & 0x1f) << 6) + (&data_42ea00)[edi_2 s>> 5]
                    *esi_6 = *var_c_1
                    void* eax_12
                    eax_12.b = *var_8_1
                    esi_6[1].b = eax_12.b
                    
                    if (InitializeCriticalSectionAndSpinCount(&esi_6[3], 0xfa0) == 0)
                        break
                    
                    esi_6[2] += 1
        
        var_c_1 += 4
        edi_2 += 1
        var_8_1 += 1
        
        if (edi_2 s>= i)
            goto label_409d84

result = 0xffffffff
label_409e30:
return result
