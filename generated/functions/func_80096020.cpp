#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096020(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80096020;

loc_80096020:
{
    r0 = MemoryInline::FlatRead32((r3 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80096028:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80096034;
    }
}

loc_8009602C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80096034:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(32));
}

loc_80096038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80096044;
    }
}

loc_8009603C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80096044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80096048:
{
    r3 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80096050:
{
    r5 = 0x80270000u;
    r8 = 0;
    r5 = (r5 + 17528);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r4 + 12), r8);
    MemoryInline::FlatWrite32((r4 + 16), r8);
    MemoryInline::FlatWrite32(r4, r5);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    MemoryInline::FlatWrite32((r4 + 24), r7);
    MemoryInline::FlatWrite32((r4 + 28), r8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000129 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096020 func_80096020 preserves=true fpr_mask=0x00000000
