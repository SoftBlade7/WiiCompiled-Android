#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80730E9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80730E9C;

loc_80730E9C:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r30 = 0x808D0000u;
    r31 = 0x808A0000u;
    f31.d = MemoryInline::FlatReadFloat32(r4);
    r29 = MemoryInline::FlatRead32(r5);
    r27 = r3;
    r28 = r4;
    r30 = (r30 + -22984);
    r3 = r29;
    r31 = (r31 + 9864);
    // inline leaf 0x807264E8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x807264E8
}

loc_80730EE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80730EFC;
    }
}

loc_80730EEC:
{
    r3 = r29;
    // inline leaf 0x80726538 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80726538
}

loc_80730EF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80730F04;
    }
}

loc_80730EFC:
{
    f31.d = (-(f31.d));
    goto loc_80730F0C;
}

loc_80730F04:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_80730F0C:
{
    f1.d = f31.d;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    // inline leaf 0x807319BC (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    // end of inlined leaf 0x807319BC
    r0 = MemoryInline::FlatRead8((r28 + 16));
}

loc_80730F20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80730F2C;
    }
}

loc_80730F24:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
}

loc_80730F2C:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80730F3C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730F54;
    }
}

loc_80730F48:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    goto loc_80730F94;
}

loc_80730F54:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80730F60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730F70;
    }
}

loc_80730F64:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    goto loc_80730F94;
}

loc_80730F70:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80730F7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80730F8C;
    }
}

loc_80730F80:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    goto loc_80730F94;
}

loc_80730F8C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
}

loc_80730F94:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80730FBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80730FC4;
    }
}

loc_80730FC0:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
}

loc_80730FC4:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80730FDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80730FE4;
    }
}

loc_80730FE0:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
}

loc_80730FE4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f31.d = leaf_stack_saved_f31_entry;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800001B gpr_write=0xF800082B gpr_return=0x00000008 fpr_read=0x8000000F fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80730E9C func_80730E9C preserves=true fpr_mask=0x00000000
