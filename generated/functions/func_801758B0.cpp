#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801758B0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801758B0;

loc_801758B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80170000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 21860);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x801758D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C0A84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 36), r3);
    r4 = 0x80170000u;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = (r4 + 22136);
    ctx->lr = 0x801758ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C0AECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r31 = 1;
    MemoryInline::FlatWrite32((r30 + 40), r3);
    r3 = MemoryInline::FlatRead32(r30);
    r4 = (r1 + 8);
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r31));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80175908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017591C;
    }
}

loc_8017590C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017592C;
    }
}

loc_80175910:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80175914:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80175924;
    }
}

loc_80175918:
{
    goto loc_8017592C;
}

loc_8017591C:
{
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r31));
    goto loc_8017592C;
}

loc_80175924:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r0));
}

loc_8017592C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xC00007CB gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801758B0 func_801758B0 preserves=true fpr_mask=0x00000000
