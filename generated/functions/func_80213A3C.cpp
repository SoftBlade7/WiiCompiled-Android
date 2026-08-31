#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80213A3C;

loc_80213A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r13 + -24160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80213A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213ABC;
    }
}

loc_80213A64:
{
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80213A70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213ABC;
    }
}

loc_80213A74:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -24152));
    r7 = 0x80380000u;
    r7 = (r7 + 13312);
    r5 = 1;
    r8 = (r4 * 12);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r13 + -24152), r0);
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80213A9C:
{
    r6 = (r7 + r8);
    MemoryInline::FlatWrite32((r6 + 4), r30);
    r7_addr_1 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_1, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r6 + 8), r31);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80213AB8;
    }
}

loc_80213AB4:
{
    MemoryInline::FlatWrite32((r13 + -24152), r4);
}

loc_80213AB8:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80213ABC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00021FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213A3C func_80213A3C preserves=true fpr_mask=0x00000000
