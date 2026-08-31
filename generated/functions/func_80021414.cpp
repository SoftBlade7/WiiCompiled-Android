#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021414(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80021414;

loc_80021414:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r10 = MemoryInline::FlatRead32((r4 + 8));
    r3 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r6));
}

loc_80021434:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_80021438:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r9), static_cast<int32_t>(r10));
}

loc_8002143C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80021440:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_return;
    }
}

loc_80021444:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_return;
    }
}

loc_80021448:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000798 gpr_write=0x000007E8 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80021414 func_80021414 preserves=true fpr_mask=0x00000000
