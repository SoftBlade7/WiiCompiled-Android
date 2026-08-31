#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805493B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805493B0;

loc_805493B0:
{
    r0 = 5;
    r5 = -1;
    r6 = 0;
    r7 = 0;
    ctr = r0;
}

loc_805493C4:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27958));
}

loc_805493D0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805493DC;
    }
}

loc_805493D4:
{
    r5 = r7;
    r6 = r0;
}

loc_805493DC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27958));
}

loc_805493F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805493FC;
    }
}

loc_805493F4:
{
    r5 = r7;
    r6 = r0;
}

loc_805493FC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27958));
}

loc_80549410:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054941C;
    }
}

loc_80549414:
{
    r5 = r7;
    r6 = r0;
}

loc_8054941C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27958));
}

loc_80549430:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054943C;
    }
}

loc_80549434:
{
    r5 = r7;
    r6 = r0;
}

loc_8054943C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27958));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80549450:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054945C;
    }
}

loc_80549454:
{
    r5 = r7;
    r6 = r0;
}

loc_8054945C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805493C4;
    }
}

loc_80549468:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805493B0 func_805493B0 preserves=true fpr_mask=0x00000000
