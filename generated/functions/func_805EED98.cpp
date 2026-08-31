#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EED98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EED98;

loc_805EED98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
}

loc_805EEDB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = r30;
    r3 = (r3 + 52);
    // inline leaf 0x8061B398 (13 guest instruction(s))
}

loc_inl0_0x8061B398:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_inl0_0x8061B3A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8061B3C4;
    }
}

loc_inl0_0x8061B3AC:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_inl0_0x8061B3B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_inl0_0x8061B3C4;
    }
}

loc_inl0_0x8061B3BC:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_inl0_cont_8061B398;
}

loc_inl0_0x8061B3C4:
{
    r3 = 0;
}

loc_inl0_cont_8061B398:
{
    // end of inlined leaf 0x8061B398
}

loc_805EEDC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805EEDE8;
    }
}

loc_805EEDCC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805EEDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EEDE8;
    }
}

loc_805EEDD8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805EEDE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805EEDE8:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(5));
}

loc_805EEDF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805EEDB4;
    }
}

loc_805EEDF4:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805EED98 func_805EED98 preserves=true fpr_mask=0x00000000
