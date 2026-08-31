#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F73C0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_807F73C0;

loc_807F73C0:
{
    r9 = MemoryInline::FlatRead32(r3);
    r10 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r9));
}

loc_807F73CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F73D8;
    }
}

loc_807F73D0:
{
    r3 = (r10 - r9);
    ctx->gpr[0] = r0;
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

loc_807F73D8:
{
    r8 = MemoryInline::FlatRead32((r3 + 12));
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r6 = (r5 + 40);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_807F73FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F7404;
    }
}

loc_807F7400:
{
    r9 = (r9 + 1);
}

loc_807F7404:
{
    r7 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r7 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_807F741C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807F7424;
    }
}

loc_807F7420:
{
    r10 = (r10 + 1);
}

loc_807F7424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r9));
}

loc_807F7428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F7434;
    }
}

loc_807F742C:
{
    r3 = (r10 - r9);
    ctx->gpr[0] = r0;
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

loc_807F7434:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r8 - r7);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r9 = (r9 + r5);
    r10 = (r10 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r9));
}

loc_807F744C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807F7450:
{
    r3 = (r10 - r9);
    ctx->gpr[0] = r0;
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
    ctx->gpr[0] = r0;
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

// RECOMP_GUEST_ABI gpr_read=0x000007D8 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F73C0 func_807F73C0 preserves=true fpr_mask=0x00000000
