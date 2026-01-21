// 函数: sub_402020
// 地址: 0x402020
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
enum HOT_KEY_MODIFIERS fsModifiers = 0
int32_t id = 0
int32_t id_1 = 0
void* uType

do
    UnregisterHotKey(data_41eb90, id)
    uType = &(&data_41cb20)[id]
    uint16_t ecx_1 = *uType
    
    if (ecx_1 != 0)
        ecx_1 u>>= 8
        
        if ((ecx_1.b & 4) != 0)
            fsModifiers = MOD_ALT
        
        if ((ecx_1.b & 2) != 0)
            fsModifiers |= MOD_CONTROL
        
        if ((ecx_1.b & 1) != 0)
            fsModifiers |= MOD_SHIFT
        
        int32_t ecx_2
        uType, ecx_2 = RegisterHotKey(data_41eb90, id, fsModifiers, zx.d(*uType))
        
        if (uType == 0)
            int32_t var_1c_2 = ecx_2
            int32_t var_20_2 = ecx_2
            var_20_2.q = fconvert.d(float.t(id_1))
            char* var_24_1 = sub_4013f5()
            char const* const var_28_1 = "Error registering hotkey index"
            PSTR lpText = sub_40158a(2)
            uType = MessageBoxA(GetActiveWindow(), lpText, &data_4162eb, uType)
    
    id += 1
    id_1 = id
while (id s<= 5)

return uType
