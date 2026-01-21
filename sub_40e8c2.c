// 函数: sub_40e8c2
// 地址: 0x40e8c2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t eax = DecodePointer(data_42eb10)
int32_t* esi = DecodePointer(data_42eb0c)

if (esi u>= eax)
    void* edi_2 = esi - eax
    
    if (edi_2 + 4 u>= 4)
        uint32_t eax_3 = _msize_base(eax)
        
        if (eax_3 u>= edi_2 + 4)
            goto label_40e95f
        
        uint32_t eax_5 = 0x800
        
        if (eax_3 u< 0x800)
            eax_5 = eax_3
        
        uint32_t eax_6 = eax_5 + eax_3
        int32_t eax_7
        
        if (eax_6 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_6)
        
        if (eax_6 u>= eax_3 && eax_7 != 0)
        label_40e946:
            esi = eax_7 + (edi_2 s>> 2 << 2)
            data_42eb10 = EncodePointer(eax_7)
        label_40e95f:
            *esi = EncodePointer(arg1)
            data_42eb0c = EncodePointer(&esi[1])
            return arg1
        
        if (eax_3 + 0x10 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_3 + 0x10)
            
            if (eax_7 != 0)
                goto label_40e946

return 0
