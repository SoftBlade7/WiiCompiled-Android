#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006DE40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
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

    goto loc_8006DE40;

loc_8006DE40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006DE44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006DE98;
    }
}

loc_8006DE48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8006DE4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006DE90;
    }
}

loc_8006DE50:
{
    r0 = (r4 * 24);
    r10 = (r3 + r0);
    r3 = 1;
    r9 = MemoryInline::FlatRead32((r10 + 156));
    r8 = MemoryInline::FlatRead32((r10 + 160));
    r7 = MemoryInline::FlatRead32((r10 + 164));
    r6 = MemoryInline::FlatRead32((r10 + 168));
    r4 = MemoryInline::FlatRead32((r10 + 172));
    r0 = MemoryInline::FlatRead32((r10 + 176));
    MemoryInline::FlatWrite32(r5, r9);
    MemoryInline::FlatWrite32((r5 + 4), r8);
    MemoryInline::FlatWrite32((r5 + 8), r7);
    MemoryInline::FlatWrite32((r5 + 12), r6);
    MemoryInline::FlatWrite32((r5 + 16), r4);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_8006DE90:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_8006DE98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000007D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006DE40 func_8006DE40 preserves=true fpr_mask=0x00000000
