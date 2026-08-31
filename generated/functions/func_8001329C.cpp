#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001329C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8001329C;

loc_8001329C:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800132B4;
    }
}

loc_800132AC:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800132B4:
{
    r0 = (r4 & 3);
    r6 = (r3 & 3);
}

loc_800132C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_80013380;
    }
}

loc_800132C4:
{
}

loc_800132C8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80013320;
    }
}

loc_800132CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800132D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800132DC;
    }
}

loc_800132D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800132DC:
{
    r0 = (3 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    ctr = r0;
}

loc_800132E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013318;
    }
}

loc_800132EC:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013304;
    }
}

loc_800132FC:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80013304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80013308:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013314;
    }
}

loc_8001330C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80013314:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800132EC;
    }
}

loc_80013318:
{
    r3 = (r3 + 1);
    r4 = (r4 + 1);
}

loc_80013320:
{
    r7 = MemoryInline::FlatRead32(r3);
    r5 = 0x80810000u;
    r6 = (r5 + -32640);
    r8 = MemoryInline::FlatRead32(r4);
    r5 = (r7 + -16842752);
    r5 = (r5 + -257);
    r5 = (r5 & ~r7);
    r0 = (r5 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013368;
    }
}

loc_80013344:
{
    goto loc_80013360;
}

loc_80013348:
{
    r3 = (r3 + 4);
    r7 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 4);
    r8 = MemoryInline::FlatRead32(r4);
    r5 = (r7 + -16842752);
    r0 = (r5 + -257);
    r0 = (r0 & r6);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013368;
    }
}

loc_80013360:
{
}

loc_80013364:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r8))) {
        goto loc_80013348;
    }
}

loc_80013368:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013380;
    }
}

loc_80013378:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80013380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80013384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013390;
    }
}

loc_80013388:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80013390:
{
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800133A8;
    }
}

loc_800133A0:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800133A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800133AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013390;
    }
}

loc_800133B0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001329C func_8001329C preserves=true fpr_mask=0x00000000
