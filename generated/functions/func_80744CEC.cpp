#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80744CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80744CEC;

loc_80744CEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -18960));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80744D10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80744D68;
    }
}

loc_80744D14:
{
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r31 = MemoryInline::FlatRead32(r3);
    r3 = r31;
    // inline leaf 0x80726510 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80726510
}

loc_80744D28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80744D70;
    }
}

loc_80744D2C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
}

loc_80744D3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80744D70;
    }
}

loc_80744D40:
{
    r4 = MemoryInline::FlatRead32((r30 + 228));
    r3 = MemoryInline::FlatRead32((r30 + 196));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 228), r4);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_80744D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80744D70;
    }
}

loc_80744D5C:
{
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r30 + 228), r0);
    goto loc_80744D70;
}

loc_80744D68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 228), r0);
}

loc_80744D70:
{
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead32((r30 + 228));
    r3 = MemoryInline::FlatRead16((r3 + -18924));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80744D80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80744D90;
    }
}

loc_80744D84:
{
    MemoryInline::FlatWrite32((r30 + 228), r3);
    r3 = 1;
    goto loc_80744D94;
}

loc_80744D90:
{
    r3 = 0;
}

loc_80744D94:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80744CEC func_80744CEC preserves=true fpr_mask=0x00000000
