#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80517750;

loc_80517750:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    goto loc_805177F8;
}

loc_80517780:
{
}

loc_80517784:
{
    r4 = (r31 & 65535);
    r3 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805177A0;
    }
}

loc_80517790:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80517798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805177A0;
    }
}

loc_8051779C:
{
    r3 = 1;
}

loc_805177A0:
{
}

loc_805177A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805177B0;
    }
}

loc_805177A8:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_805177B4;
}

loc_805177B0:
{
    r0 = 0;
}

loc_805177B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805177B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805177E4;
    }
}

loc_805177BC:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805177C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805177DC;
    }
}

loc_805177CC:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_805177E8;
}

loc_805177DC:
{
    r3 = 0;
    goto loc_805177E8;
}

loc_805177E4:
{
    r3 = 0;
}

loc_805177E8:
{
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x805177F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80517858u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r31 = (r31 + 1);
}

loc_805177F8:
{
    r5 = MemoryInline::FlatRead32((r28 + 12));
    r3 = 0;
}

loc_80517804:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80517818;
    }
}

loc_80517808:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80517810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517818;
    }
}

loc_80517814:
{
    r3 = 1;
}

loc_80517818:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051781C:
{
    r3 = (r31 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051782C;
    }
}

loc_80517824:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80517830;
}

loc_8051782C:
{
    r0 = 0;
}

loc_80517830:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80517834:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80517780;
    }
}

loc_80517838:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0003FB gpr_write=0xFF0003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517750 func_80517750 preserves=true fpr_mask=0x00000000
