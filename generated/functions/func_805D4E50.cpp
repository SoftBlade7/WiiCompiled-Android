#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D4E50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D4E50;

loc_805D4E50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r5);
}

loc_805D4E78:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_805D4E84;
    }
}

loc_805D4E7C:
{
}

loc_805D4E80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(87))) {
        goto loc_805D4EA8;
    }
}

loc_805D4E84:
{
}

loc_805D4E88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_805D4E94;
    }
}

loc_805D4E8C:
{
}

loc_805D4E90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(93))) {
        goto loc_805D4EA8;
    }
}

loc_805D4E94:
{
}

loc_805D4E98:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(131))) {
        goto loc_805D4EBC;
    }
}

loc_805D4E9C:
{
}

loc_805D4EA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(132))) {
        goto loc_805D4EB4;
    }
}

loc_805D4EA4:
{
    goto loc_805D4EBC;
}

loc_805D4EA8:
{
    r0 = 141;
    MemoryInline::FlatWrite32((r3 + 6652), r0);
    goto loc_805D4EBC;
}

loc_805D4EB4:
{
    r0 = 142;
    MemoryInline::FlatWrite32((r3 + 6652), r0);
}

loc_805D4EBC:
{
    r3 = r4;
    ctx->lr = 0x805D4EC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    r3 = r31;
    r4 = 1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805D4E50 func_805D4E50 preserves=true fpr_mask=0x00000000
