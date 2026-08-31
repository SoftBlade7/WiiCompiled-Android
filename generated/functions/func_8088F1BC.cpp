#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088F1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8088F1BC;

loc_8088F1BC:
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
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & 262140);
    r4_addr_0 = (r4 + r6);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_8088F1FC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r29))) {
        goto loc_8088F204;
    }
}

loc_8088F200:
{
    r3 = r29;
}

loc_8088F204:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8088F208:
{
    r7 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088F318;
    }
}

loc_8088F210:
{
}

loc_8088F214:
{
    r8 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8088F2E4;
    }
}

loc_8088F21C:
{
    r0 = (r8 + 7);
    r5 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r4 = 0;
    ctr = r0;
}

loc_8088F234:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_8088F2E4;
    }
}

loc_8088F238:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r7 = (r7 + 8);
    r6_addr_2 = (r6 + r0);
    r8 = MemoryInline::FlatRead32(r6_addr_2);
    r8_addr_2 = (r8 + r4);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_3);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_4);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_5);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_6);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_7 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_7);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_8 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_8);
    r8 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_9);
    r8 = (r0 + r4);
    r4 = (r4 + 32);
    r0 = MemoryInline::FlatRead32((r8 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088F238;
    }
}

loc_8088F2E4:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_1 & -4);
    r0 = (r3 - r7);
    r5 = (r31 + r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_8088F2F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088F318;
    }
}

loc_8088F2FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 60));
    r6_addr_12 = (r6 + r0);
    r4 = MemoryInline::FlatRead32(r6_addr_12);
    r4_addr_2 = (r4 + r8);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    r8 = (r8 + 4);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088F2FC;
    }
}

loc_8088F318:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
// RECOMP_REGISTRATION base 0x8088F1BC func_8088F1BC preserves=true fpr_mask=0x00000000
