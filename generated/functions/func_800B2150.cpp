#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2150(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B2150;

loc_800B2150:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 24));
}

loc_800B216C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800B2178;
    }
}

loc_800B2170:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_800B21DC;
}

loc_800B2178:
{
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    r5 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 16));
    goto loc_800B21C4;
}

loc_800B2190:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_800B2198:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_800B21C0;
    }
}

loc_800B219C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800B21A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B21C0;
    }
}

loc_800B21A8:
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
    goto loc_800B21DC;
}

loc_800B21C0:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_800B21C4:
{
}

loc_800B21C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B2190;
    }
}

loc_800B21CC:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_800B21DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_800B21E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B21F4;
    }
}

loc_800B21E4:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r3 = 1;
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    goto loc_800B21F8;
}

loc_800B21F4:
{
    r3 = 0;
}

loc_800B21F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
// RECOMP_REGISTRATION base 0x800B2150 func_800B2150 preserves=true fpr_mask=0x00000000
