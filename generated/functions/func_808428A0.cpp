#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808428A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808428A0;

loc_808428A0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 6016));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808428B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808428C0;
    }
}

loc_808428B4:
{
    r0 = 3552;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_808428F8;
}

loc_808428C0:
{
    r0 = MemoryInline::FlatRead32((r4 + 5984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808428C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808428D8;
    }
}

loc_808428CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_808428D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808428E4;
    }
}

loc_808428D4:
{
    goto loc_808428F0;
}

loc_808428D8:
{
    r0 = 3551;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_808428F8;
}

loc_808428E4:
{
    r0 = 3552;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    goto loc_808428F8;
}

loc_808428F0:
{
    r0 = 3550;
    MemoryInline::FlatWrite32((r3 + 996), r0);
}

loc_808428F8:
{
    r0 = 0;
    r5 = 0x808B0000u;
    MemoryInline::FlatWrite8((r3 + 1732), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 1736));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -11164));
    MemoryInline::FlatWriteFloat32((r4 + 124), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808428A0 func_808428A0 preserves=true fpr_mask=0x00000000
