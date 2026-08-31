#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213AD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80213AD4;

loc_80213AD4:
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

loc_80213AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213B68;
    }
}

loc_80213AFC:
{
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80213B08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213B24;
    }
}

loc_80213B0C:
{
    ctx->lr = 0x80213B10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800989D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = r30;
    // inline leaf 0x80098A70 (4 guest instruction(s))
    r0 = (r4 * 168);
    r3 = (r3 + r0);
    r3 = (r3 + 56);
    // end of inlined leaf 0x80098A70
    // inline leaf 0x80098210 (7 guest instruction(s))
}

loc_inl1_0x80098210:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x80098218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80098224;
    }
}

loc_inl1_0x8009821C:
{
    r3 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_inl1_cont_80098210;
}

loc_inl1_0x80098224:
{
    r3 = 0;
}

loc_inl1_cont_80098210:
{
    // end of inlined leaf 0x80098210
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80213B20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213B68;
    }
}

loc_80213B24:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -24152));
    r6 = 0x80380000u;
    r6 = (r6 + 13312);
    r4 = 0;
    r7 = (r5 * 12);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r13 + -24152), r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80213B48:
{
    r5 = (r6 + r7);
    MemoryInline::FlatWrite32((r5 + 4), r30);
    r6_addr_1 = (r6 + r7);
    MemoryInline::FlatWrite8(r6_addr_1, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r5 + 8), r31);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80213B64;
    }
}

loc_80213B60:
{
    MemoryInline::FlatWrite32((r13 + -24152), r4);
}

loc_80213B64:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80213B68:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00020FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213AD4 func_80213AD4 preserves=true fpr_mask=0x00000000
