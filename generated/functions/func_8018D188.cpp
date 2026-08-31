#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018D188(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8018D188;

loc_8018D188:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r6 + 16));
    goto loc_8018D1D8;
}

loc_8018D1AC:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8018D1B4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_8018D1D4;
    }
}

loc_8018D1B8:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8018D1C0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8018D1D4;
    }
}

loc_8018D1C4:
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
    InvokeDirectCpu<0x8018D324u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8018D1E8;
}

loc_8018D1D4:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_8018D1D8:
{
}

loc_8018D1DC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8018D1AC;
    }
}

loc_8018D1E0:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8018D1E8:
{
    r0 = (r3 & 65535);
}

loc_8018D1F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8018D1F8;
    }
}

loc_8018D1F4:
{
    goto loc_8018D200;
}

loc_8018D1F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_8018D200:
{
    r6 = MemoryInline::FlatRead32((r31 + 20));
    r3 = (r3 & 65535);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    goto loc_8018D244;
}

loc_8018D210:
{
    r5 = MemoryInline::FlatRead16(r4);
}

loc_8018D218:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_8018D240;
    }
}

loc_8018D21C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8018D224:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8018D240;
    }
}

loc_8018D228:
{
    r3 = (r3 - r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r3 = (r4 + r0);
    r4 = (r3 + 8);
    goto loc_8018D250;
}

loc_8018D240:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8018D244:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8018D248:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018D210;
    }
}

loc_8018D24C:
{
    r4 = (r6 + 4);
}

loc_8018D250:
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
// RECOMP_REGISTRATION base 0x8018D188 func_8018D188 preserves=true fpr_mask=0x00000000
