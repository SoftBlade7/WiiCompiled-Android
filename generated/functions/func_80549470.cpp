#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549470(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80549470;

loc_80549470:
{
    r0 = 6;
    r5 = -1;
    r6 = 0;
    r7 = 0;
    ctr = r0;
}

loc_80549484:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
}

loc_80549490:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054949C;
    }
}

loc_80549494:
{
    r5 = r7;
    r6 = r0;
}

loc_8054949C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
}

loc_805494B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805494BC;
    }
}

loc_805494B4:
{
    r5 = r7;
    r6 = r0;
}

loc_805494BC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
}

loc_805494D0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805494DC;
    }
}

loc_805494D4:
{
    r5 = r7;
    r6 = r0;
}

loc_805494DC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
}

loc_805494F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_805494FC;
    }
}

loc_805494F4:
{
    r5 = r7;
    r6 = r0;
}

loc_805494FC:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
}

loc_80549510:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8054951C;
    }
}

loc_80549514:
{
    r5 = r7;
    r6 = r0;
}

loc_8054951C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -27908));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80549530:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054953C;
    }
}

loc_80549534:
{
    r5 = r7;
    r6 = r0;
}

loc_8054953C:
{
    r3 = (r3 + 2);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80549484;
    }
}

loc_80549548:
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
// RECOMP_REGISTRATION base 0x80549470 func_80549470 preserves=true fpr_mask=0x00000000
