#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065107C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r15 = ctx->gpr[15];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065107C;

loc_8065107C:
{
    r4 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806510AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(98))) {
        goto loc_806510B8;
    }
}

loc_806510B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(99));
}

loc_806510B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806510D8;
    }
}

loc_806510B8:
{
}

loc_806510BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(102))) {
        goto loc_806510C8;
    }
}

loc_806510C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(103));
}

loc_806510C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806510D8;
    }
}

loc_806510C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(89));
}

loc_806510CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806510D8;
    }
}

loc_806510D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(95));
}

loc_806510D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806510E0;
    }
}

loc_806510D8:
{
    r0 = MemoryInline::FlatRead32((r15 + 652));
    goto loc_806510E4;
}

loc_806510E0:
{
    r0 = 2;
}

loc_806510E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5992), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065114Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065107C func_8065107C preserves=true fpr_mask=0x00000000
