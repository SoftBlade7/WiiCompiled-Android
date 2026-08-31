#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088F038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8088F038;

loc_8088F038:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r8 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r7;
    r3 = MemoryInline::FlatRead32((r8 + 18256));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8086ABA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 52));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 131070);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_0);
}

loc_8088F078:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r29))) {
        goto loc_8088F080;
    }
}

loc_8088F07C:
{
    r4 = r29;
}

loc_8088F080:
{
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088F084:
{
    r7 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088F19C;
    }
}

loc_8088F08C:
{
}

loc_8088F090:
{
    r5 = (r4 + 65536);
    r5 = (r5 + -8);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8088F164;
    }
}

loc_8088F09C:
{
    r6 = (r5 & 65535);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 262140);
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8088F0B4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8088F164;
    }
}

loc_8088F0B8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 131070);
    r7 = (r7 + 8);
    r5_addr_2 = (r5 + r6);
    r8 = MemoryInline::FlatRead32(r5_addr_2);
    r6 = (r31 + r0);
    r8_addr_2 = (r8 + r0);
    r8 = MemoryInline::FlatRead16(r8_addr_2);
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite16(r31_addr_2, static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_3 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_3);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 2));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_4 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_4);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 4));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_5 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_5);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 6));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_6 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_6);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 8));
    MemoryInline::FlatWrite16((r6 + 8), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_7 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_7);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 10));
    MemoryInline::FlatWrite16((r6 + 10), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_8 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_8);
    r8 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r8 + 12));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_addr_9 = (r5 + r8);
    r8 = MemoryInline::FlatRead32(r5_addr_9);
    r8 = (r8 + r0);
    r0 = MemoryInline::FlatRead16((r8 + 14));
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088F0B8;
    }
}

loc_8088F164:
{
    r5 = (r4 & 65535);
    r6 = (r7 & 65535);
    r0 = (r5 - r6);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_1 & 262140);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8088F17C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088F19C;
    }
}

loc_8088F180:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & 131070);
    r7 = (r7 + 1);
    r8_addr_5 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_5);
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r31_addr_5 = (r31 + r5);
    MemoryInline::FlatWrite16(r31_addr_5, static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088F180;
    }
}

loc_8088F19C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r4;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FB gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088F038 func_8088F038 preserves=true fpr_mask=0x00000000
