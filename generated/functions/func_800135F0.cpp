#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800135F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800135F0;

loc_800135F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800135F4:
{
    r5 = (r3 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800135FC:
{
    r6 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80013604:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013648;
    }
}

loc_80013608:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80013610:
{
}

loc_80013614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_80013648;
    }
}

loc_80013618:
{
    r7 = (r5 + -1);
    r8 = (r4 + -1);
}

loc_80013620:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r8 = (r8 + 1);
    r3 = MemoryInline::FlatRead8(r8);
}

loc_8001362C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80013638;
    }
}

loc_80013630:
{
}

loc_80013634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013620;
    }
}

loc_80013638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001363C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013648;
    }
}

loc_80013640:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80013648:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80013650:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013610;
    }
}

loc_80013654:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800135F0 func_800135F0 preserves=true fpr_mask=0x00000000
