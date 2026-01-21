// 函数: sub_414b02
// 地址: 0x414b02
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_24 = edi
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int32_t ebx
ebx.w = temp0
int32_t edx = 0

if ((ebx.b & 1) != 0)
    edx = 0x10

if ((ebx.b & 4) != 0)
    edx |= 8

if ((ebx.b & 8) != 0)
    edx |= 4

if ((ebx.b & 0x10) != 0)
    edx |= 2

if ((ebx.b & 0x20) != 0)
    edx |= 1

if ((ebx.b & 2) != 0)
    edx |= 0x80000

uint32_t ecx = zx.d(ebx.w)
int32_t eax_1 = ecx & 0xc00

if (eax_1 != 0)
    if (eax_1 == 0x400)
        edx |= 0x100
    else if (eax_1 == 0x800)
        edx |= 0x200
    else if (eax_1 == 0xc00)
        edx |= 0x300

int32_t ecx_1 = ecx & 0x300

if (ecx_1 == 0)
    edx |= 0x20000
else if (ecx_1 == 0x200)
    edx |= 0x10000

if ((zx.d(ebx.w) & 0x1000) != 0)
    edx |= 0x40000

int32_t edi_1 = arg4
int32_t result = (not.d(edi_1) & edx) | (arg3 & edi_1)
arg4 = result

if (result != edx)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(zx.w(sub_4149d4()))
    int16_t x87status_2
    int16_t temp0_1
    temp0_1, x87status_2 = __fnstcw_memmem16(x87control)
    uint32_t var_c_1
    var_c_1.w = temp0_1
    int32_t result_1 = 0
    
    if ((var_c_1.b & 1) != 0)
        result_1 = 0x10
    
    if ((var_c_1.b & 4) != 0)
        result_1 |= 8
    
    if ((var_c_1.b & 8) != 0)
        result_1 |= 4
    
    if ((var_c_1.b & 0x10) != 0)
        result_1 |= 2
    
    if ((var_c_1.b & 0x20) != 0)
        result_1 |= 1
    
    if ((var_c_1.b & 2) != 0)
        result_1 |= 0x80000
    
    uint32_t ecx_4 = zx.d(var_c_1.w)
    int32_t eax_9 = ecx_4 & 0xc00
    
    if (eax_9 != 0)
        if (eax_9 == 0x400)
            result_1 |= 0x100
        else if (eax_9 == 0x800)
            result_1 |= 0x200
        else if (eax_9 == 0xc00)
            result_1 |= 0x300
    
    int32_t ecx_5 = ecx_4 & 0x300
    
    if (ecx_5 == 0)
        result_1 |= 0x20000
    else if (ecx_5 == 0x200)
        result_1 |= 0x10000
    
    if ((var_c_1 & 0x1000) != 0)
        result_1 |= 0x40000
    
    arg4 = result_1
    result = result_1

int32_t esi = 0

if (data_42e9d8 != 0)
    int32_t edi_2 = edi_1 & 0x308031f
    
    if (arg1.b s< 0)
        esi = 0x10
    
    if ((arg1 & 0x200) != 0)
        esi |= 8
    
    if ((arg1 & 0x400) != 0)
        esi |= 4
    
    if ((arg1 & 0x800) != 0)
        esi |= 2
    
    if ((arg1 & 0x1000) != 0)
        esi |= 1
    
    if ((arg1 & 0x100) != 0)
        esi |= 0x80000
    
    int32_t ecx_7 = arg1 & 0x6000
    
    if (ecx_7 != 0)
        if (ecx_7 == 0x2000)
            esi |= 0x100
        else if (ecx_7 == 0x4000)
            esi |= 0x200
        else if (ecx_7 == 0x6000)
            esi |= 0x300
    
    int32_t eax_11 = arg1 & 0x8040
    
    if (eax_11 == 0x40)
        esi |= 0x2000000
    else if (eax_11 == 0x8000)
        esi |= 0x3000000
    else if (eax_11 == 0x8040)
        esi |= 0x1000000
    
    int32_t edx_4 = (not.d(edi_2) & esi) | (edi_2 & arg3)
    int32_t eax_17
    
    if (edx_4 != esi)
        int32_t eax_18 = sub_414a62(ecx_7, edx_4)
        int32_t var_10_1 = eax_18
        int32_t mxcsr = sub_415851(eax_18.b)
        int32_t edx_5 = 0
        
        if (mxcsr.b s< 0)
            edx_5 = 0x10
        
        if ((mxcsr & 0x200) != 0)
            edx_5 |= 8
        
        if ((mxcsr & 0x400) != 0)
            edx_5 |= 4
        
        if ((mxcsr & 0x800) != 0)
            edx_5 |= 2
        
        if ((mxcsr & 0x1000) != 0)
            edx_5 |= 1
        
        if ((0x100 & mxcsr) != 0)
            edx_5 |= 0x80000
        
        int32_t eax_20 = mxcsr & 0x6000
        
        if (eax_20 != 0)
            if (eax_20 == 0x2000)
                edx_5 |= 0x100
            else if (eax_20 == 0x4000)
                edx_5 |= 0x200
            else if (eax_20 == 0x6000)
                edx_5 |= 0x300
        
        int32_t ecx_9 = mxcsr & 0x8040
        
        if (ecx_9 == 0x40)
            edx_5 |= 0x2000000
        else if (ecx_9 == 0x8000)
            edx_5 |= 0x3000000
        else if (ecx_9 == 0x8040)
            edx_5 |= 0x1000000
        
        eax_17 = edx_5
    else
        eax_17 = esi
    
    result = eax_17 | arg4
    
    if (((eax_17 ^ arg4) & 0x8031f) != 0)
        return result | 0x80000000

return result
