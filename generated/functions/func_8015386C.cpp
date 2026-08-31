#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015386C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015386C;

loc_8015386C:
{
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r0 = MemoryInline::FlatRead8((r4 + 114));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80153878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801538C0;
    }
}

loc_8015387C:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r0 = MemoryInline::FlatRead16((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80153888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801538C0;
    }
}

loc_8015388C:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80153894:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801538C0;
    }
}

loc_80153898:
{
    r0 = MemoryInline::FlatRead16((r3 + 154));
    r4 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801538A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801538C0;
    }
}

loc_801538A8:
{
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
    goto loc_801538C8;
}

loc_801538C0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_801538C8:
{
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r4 = MemoryInline::FlatRead8((r31 + 13));
    ctx->lr = 0x801538D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80154AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80156578u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_801539A4:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015386C func_8015386C preserves=true fpr_mask=0x00000000
