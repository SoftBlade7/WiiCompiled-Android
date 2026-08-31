#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80242F90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80242F90;

loc_80242F90:
{
    r6 = MemoryInline::FlatRead32((r3 + 52));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_80242FA0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8024301C;
    }
}

loc_80242FA4:
{
    r0 = MemoryInline::FlatRead32((r6 + 44));
}

loc_80242FAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024301C;
    }
}

loc_80242FB0:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = MemoryInline::FlatRead32((r6 + 40));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 40), r4);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -3);
    r5 = MemoryInline::FlatRead32((r6 + 40));
    r4 = (r4 - r5);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -23700));
    r5 = MemoryInline::FlatRead32((r6 + 52));
}

loc_80242FE8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80242FF0;
    }
}

loc_80242FEC:
{
    MemoryInline::FlatWrite32((r4 + 48), r6);
}

loc_80242FF0:
{
    r4 = MemoryInline::FlatRead32((r13 + -23700));
    r0 = 0;
    MemoryInline::FlatWrite32((r6 + 52), r4);
}

loc_80243000:
{
    MemoryInline::FlatWrite32((r6 + 48), r0);
    MemoryInline::FlatWrite32((r13 + -23700), r6);
    MemoryInline::FlatWrite32((r3 + 52), r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80243018;
    }
}

loc_80243010:
{
    MemoryInline::FlatWrite32((r5 + 48), r3);
    goto loc_8024301C;
}

loc_80243018:
{
    MemoryInline::FlatWrite32((r13 + -23704), r3);
}

loc_8024301C:
{
    r5 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80243024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80243028:
{
    r0 = MemoryInline::FlatRead32((r5 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80243030:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80243034:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r5 + 40));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r4 = MemoryInline::FlatRead32((r13 + -23700));
    r6 = MemoryInline::FlatRead32((r5 + 48));
}

loc_80243050:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80243058;
    }
}

loc_80243054:
{
    MemoryInline::FlatWrite32((r4 + 48), r5);
}

loc_80243058:
{
    r4 = MemoryInline::FlatRead32((r13 + -23700));
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 52), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80243068:
{
    MemoryInline::FlatWrite32((r5 + 48), r0);
    MemoryInline::FlatWrite32((r13 + -23700), r5);
    MemoryInline::FlatWrite32((r3 + 48), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80243078:
{
    MemoryInline::FlatWrite32((r6 + 52), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80242F90 func_80242F90 preserves=true fpr_mask=0x00000000
