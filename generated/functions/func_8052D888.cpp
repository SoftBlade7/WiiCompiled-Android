#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052D888(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

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

    goto loc_8052D888;

loc_8052D888:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0;
    goto loc_8052D93C;
}

loc_8052D8B8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 262140);
    r3_addr_2 = (r3 + r5);
    r4 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8052D8C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052D938;
    }
}

loc_8052D8CC:
{
    r3 = MemoryInline::FlatRead16((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 12));
}

loc_8052D8E4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8052D938;
    }
}

loc_8052D8E8:
{
    r4 = MemoryInline::FlatRead32(r30);
    r4_addr_2 = (r4 + r5);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4_addr_3 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r3 = MemoryInline::FlatRead32(r30);
    r3_addr_3 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052D904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052D938;
    }
}

loc_8052D908:
{
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r4_addr_4 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    r5 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead8((r4 + 10));
    r5 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead16((r5 + 42));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_3 & 134217727);
    ctx->lr = 0x8052D938u;
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
    InvokeDirectCpu<0x80517750u>(ctx);
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
}

loc_8052D938:
{
    r31 = (r31 + 1);
}

loc_8052D93C:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8052D948:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052D8B8;
    }
}

loc_8052D94C:
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
// RECOMP_REGISTRATION base 0x8052D888 func_8052D888 preserves=true fpr_mask=0x00000000
