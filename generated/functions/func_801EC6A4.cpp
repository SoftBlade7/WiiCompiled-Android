#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC6A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EC6A4;

loc_801EC6A4:
{
    r30 = -26;
}

loc_801EC6AC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801EC6D8;
    }
}

loc_801EC6B0:
{
    r31 = 0x80350000u;
    r31 = (r31 + 29216);
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193AD8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801EC6C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EC6D0;
    }
}

loc_801EC6C8:
{
    r30 = 0x80000000u;
    goto loc_801EC6D8;
}

loc_801EC6D0:
{
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_801EC6D8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801EC6E0:
{
    r29 = r3;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801EC704;
    }
}

loc_801EC6E8:
{
    r3 = 0x80350000u;
    r4 = 1;
    r3 = (r3 + 29216);
    r0 = -2;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    goto loc_801EC728;
}

loc_801EC704:
{
    r0 = (r30 + -2147483648);
}

loc_801EC70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801EC728;
    }
}

loc_801EC710:
{
    r3 = 0x80350000u;
    r4 = 2;
    r3 = (r3 + 29216);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_801EC728:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC73C;
    }
}

loc_801EC734:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_801EC740;
}

loc_801EC73C:
{
    MemoryInline::FlatWrite32((r13 + -24268), r30);
}

loc_801EC740:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000201B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EC6A4 func_801EC6A4 preserves=true fpr_mask=0x00000000
