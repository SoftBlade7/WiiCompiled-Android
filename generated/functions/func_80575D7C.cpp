#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80575D7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80575D7C;

loc_80575D7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 8);
}

loc_80575DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80575E54;
    }
}

loc_80575DAC:
{
    // inline leaf 0x80591468 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r3 = MemoryInline::FlatRead32((r3 + 100));
    // end of inlined leaf 0x80591468
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_0 & 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r3 = (r3_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80575DC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575E3C;
    }
}

loc_80575DC8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 4194304);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575DD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575E3C;
    }
}

loc_80575DDC:
{
    r3 = r30;
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    r3 = r30;
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    r0 = MemoryInline::FlatRead8((r3 + 159));
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    r0 = MemoryInline::FlatRead8((r3 + 158));
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80575E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80575E14;
    }
}

loc_80575E0C:
{
    r0 = 1;
    goto loc_80575E20;
}

loc_80575E14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80575E18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80575E20;
    }
}

loc_80575E1C:
{
    r0 = 4;
}

loc_80575E20:
{
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80575E3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80575E3C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80575ED0;
}

loc_80575E54:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80575E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575ED0;
    }
}

loc_80575E60:
{
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80575E70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80575EBC;
    }
}

loc_80575E74:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80575E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575E94;
    }
}

loc_80575E8C:
{
    r0 = 2;
    goto loc_80575EA0;
}

loc_80575E94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80575E98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80575EA0;
    }
}

loc_80575E9C:
{
    r0 = 1;
}

loc_80575EA0:
{
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = r30;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80575EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80575EBC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80575ED0:
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
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80575D7C func_80575D7C preserves=true fpr_mask=0x00000000
