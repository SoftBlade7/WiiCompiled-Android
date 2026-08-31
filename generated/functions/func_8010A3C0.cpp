#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010A3C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8010A3C0;

loc_8010A3C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010A3E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010A3F8;
    }
}

loc_8010A3E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_8010A44C;
}

loc_8010A3F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8010A408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010A414;
    }
}

loc_8010A40C:
{
    r3 = 0;
    goto loc_8010A44C;
}

loc_8010A414:
{
    ctx->lr = 0x8010A418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8010D59Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8010A420:
{
    MemoryInline::FlatWrite32((r30 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010A448;
    }
}

loc_8010A428:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWrite32((r30 + 48), r3);
    MemoryInline::FlatWrite32((r30 + 52), r0);
}

loc_8010A448:
{
    r3 = 1;
}

loc_8010A44C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010A3C0 func_8010A3C0 preserves=true fpr_mask=0x00000000
