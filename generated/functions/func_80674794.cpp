#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80674794(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80674794;

loc_80674794:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    r5 = (r5 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 476), r31);
    MemoryInline::FlatWriteRam32((r1 + 472), r30);
    r30 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 468), r29);
    r29 = r3;
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = 448;
    ctx->lr = 0x806747D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0;
}

loc_806747D4:
{
    r0 = (r31 & 65535);
    r3 = (r1 + 8);
    r0 = (r0 * 448);
    r4 = (r29 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806747ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806747F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674800;
    }
}

loc_806747F4:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r31));
    r3 = 1;
    goto loc_80674810;
}

loc_80674800:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(30));
}

loc_80674808:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806747D4;
    }
}

loc_8067480C:
{
    r3 = 0;
}

loc_80674810:
{
    r0 = MemoryInline::FlatRead32((r1 + 484));
    r31 = MemoryInline::FlatRead32((r1 + 476));
    r30 = MemoryInline::FlatRead32((r1 + 472));
    r29 = MemoryInline::FlatRead32((r1 + 468));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000DB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80674794 func_80674794 preserves=true fpr_mask=0x00000000
