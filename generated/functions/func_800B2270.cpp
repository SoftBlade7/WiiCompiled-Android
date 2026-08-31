#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B2270;

loc_800B2270:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 24));
}

loc_800B228C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800B2298;
    }
}

loc_800B2290:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_800B22FC;
}

loc_800B2298:
{
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    r5 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 16));
    goto loc_800B22E4;
}

loc_800B22B0:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_800B22B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_800B22E0;
    }
}

loc_800B22BC:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800B22C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B22E0;
    }
}

loc_800B22C8:
{
    r3 = r31;
    r4 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B25F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r3));
    r0 = (r3 & 65535);
    goto loc_800B22FC;
}

loc_800B22E0:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800B22E4:
{
}

loc_800B22E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B22B0;
    }
}

loc_800B22EC:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_800B22FC:
{
}

loc_800B2300:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800B2308;
    }
}

loc_800B2304:
{
    goto loc_800B2310;
}

loc_800B2308:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_800B2310:
{
    r6 = MemoryInline::FlatRead32((r31 + 20));
    r3 = (r0 & 65535);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    goto loc_800B2354;
}

loc_800B2320:
{
    r5 = MemoryInline::FlatRead16(r4);
}

loc_800B2328:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_800B2350;
    }
}

loc_800B232C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800B2334:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B2350;
    }
}

loc_800B2338:
{
    r3 = (r3 - r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r3 = (r4 + r0);
    r4 = (r3 + 8);
    goto loc_800B2360;
}

loc_800B2350:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800B2354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800B2358:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B2320;
    }
}

loc_800B235C:
{
    r4 = (r6 + 4);
}

loc_800B2360:
{
    r0 = MemoryInline::FlatRead16(r4);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & -65536);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3_mrot_0 = (r3_rot_1 & 65280);
    r3_mdest_0 = (r3 & -65281);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FB gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B2270 func_800B2270 preserves=true fpr_mask=0x00000000
