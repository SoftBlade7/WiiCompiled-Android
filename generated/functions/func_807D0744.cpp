#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D0744(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_807D0744;

loc_807D0744:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057F05C (13 guest instruction(s))
}

loc_inl1_0x8057F05C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 268435456);
}

loc_inl1_0x8057F06C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8057F084;
    }
}

loc_inl1_0x8057F070:
{
    r4 = 0x808B0000u;
    r3 = MemoryInline::FlatRead16((r3 + 398));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 23476));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    goto loc_inl1_0x8057F088;
}

loc_inl1_0x8057F084:
{
    r0 = -1;
}

loc_inl1_0x8057F088:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl1_cont_8057F05C:
{
    // end of inlined leaf 0x8057F05C
    r4 = MemoryInline::FlatRead32(r31);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
}

loc_807D0774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D0794;
    }
}

loc_807D0778:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
}

loc_807D0780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D0794;
    }
}

loc_807D0784:
{
}

loc_807D0788:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_807D07C8;
    }
}

loc_807D078C:
{
}

loc_807D0790:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(45))) {
        goto loc_807D07C8;
    }
}

loc_807D0794:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
}

loc_807D079C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D07DC;
    }
}

loc_807D07A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D07A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D07DC;
    }
}

loc_807D07AC:
{
    r4 = 0x808A0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 29060));
    r4 = 26;
    r5 = 1;
    ctx->lr = 0x807D07C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807D07DC;
}

loc_807D07C8:
{
    r0 = MemoryInline::FlatRead16((r31 + 250));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
}

loc_807D07D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D07DC;
    }
}

loc_807D07D4:
{
    r0 = 41;
    MemoryInline::FlatWrite16((r31 + 244), static_cast<uint16_t>(r0));
}

loc_807D07DC:
{
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D0744 func_807D0744 preserves=true fpr_mask=0x00000000
