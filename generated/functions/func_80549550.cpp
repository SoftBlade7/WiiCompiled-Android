#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549550(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80549550;

loc_80549550:
{
    r0 = 4;
    r5 = -1;
    r6 = 0;
    r7 = 0;
    ctr = r0;
}

loc_80549564:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80549570:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054957C;
    }
}

loc_80549574:
{
    r5 = r7;
    r6 = r0;
}

loc_8054957C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80549590:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054959C;
    }
}

loc_80549594:
{
    r5 = r7;
    r6 = r0;
}

loc_8054959C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_805495B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805495BC;
    }
}

loc_805495B4:
{
    r5 = r7;
    r6 = r0;
}

loc_805495BC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_805495D0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805495DC;
    }
}

loc_805495D4:
{
    r5 = r7;
    r6 = r0;
}

loc_805495DC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_805495F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805495FC;
    }
}

loc_805495F4:
{
    r5 = r7;
    r6 = r0;
}

loc_805495FC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80549610:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054961C;
    }
}

loc_80549614:
{
    r5 = r7;
    r6 = r0;
}

loc_8054961C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80549630:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054963C;
    }
}

loc_80549634:
{
    r5 = r7;
    r6 = r0;
}

loc_8054963C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27836));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80549650:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054965C;
    }
}

loc_80549654:
{
    r5 = r7;
    r6 = r0;
}

loc_8054965C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80549564;
    }
}

loc_80549668:
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
// RECOMP_REGISTRATION base 0x80549550 func_80549550 preserves=true fpr_mask=0x00000000
