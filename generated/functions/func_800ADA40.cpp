#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ADA40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800ADA40;

loc_800ADA40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r6 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = (r6 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead8((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
}

loc_inl0_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 8);
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
}

loc_inl1_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r4 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(258));
}

loc_800ADA9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800ADADC;
    }
}

loc_800ADAA0:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 7));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 9));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_800ADB44;
}

loc_800ADADC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(257));
}

loc_800ADAE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800ADB18;
    }
}

loc_800ADAE4:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = 0;
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    r0 = 127;
    r5 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_800ADB44;
}

loc_800ADB18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27896));
    r3 = 0;
    r4 = 64;
    r0 = 127;
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
}

loc_800ADB44:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 1;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ADA40 func_800ADA40 preserves=true fpr_mask=0x00000000
