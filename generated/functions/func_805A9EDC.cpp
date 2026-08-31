#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A9EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A9EDC;

loc_805A9EDC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = MemoryInline::FlatRead32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 144));
    MemoryInline::FlatWriteFloat32((r4 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 120), f0.d);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r31 = MemoryInline::FlatRead32((r4 + 144));
    // inline leaf 0x805909C8 (11 guest instruction(s))
}

loc_inl1_0x805909C8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x805909D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x805909E8;
    }
}

loc_inl1_0x805909DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_inl1_cont_805909C8;
}

loc_inl1_0x805909E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32(r3);
}

loc_inl1_cont_805909C8:
{
    // end of inlined leaf 0x805909C8
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 27800));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A9EDC func_805A9EDC preserves=true fpr_mask=0x00000000
