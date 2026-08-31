#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C2620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C2620;

loc_805C2620:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805C262C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805C27C0;
    }
}

loc_805C2658:
{
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r29 = (r29_rot_1 & -4);
    r3 = r29;
    ctx->lr = 0x805C2664u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32(r30, r3);
    r3 = r29;
    ctx->lr = 0x805C2670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805C2674:
{
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r4 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_805C27C0;
    }
}

loc_805C2680:
{
}

loc_805C2684:
{
    r6 = (r31 + -8);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_805C2790;
    }
}

loc_805C268C:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_805C26A8;
    }
}

loc_805C2694:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_805C26A0:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_805C26A8;
    }
}

loc_805C26A4:
{
    r5 = 1;
}

loc_805C26A8:
{
}

loc_805C26AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805C2790;
    }
}

loc_805C26B0:
{
    r5 = (r6 + 7);
    r3 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r0 = 0;
    ctr = r5;
}

loc_805C26C8:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_805C2790;
    }
}

loc_805C26CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r4 = (r4 + 8);
    r5_addr_2 = (r5 + r3);
    MemoryInline::FlatWrite32(r5_addr_2, r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5_addr_3 = (r5 + r3);
    MemoryInline::FlatWrite32(r5_addr_3, r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r5 = (r5 + r3);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r5 = (r5 + r3);
    r3 = (r3 + 32);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805C26CC;
    }
}

loc_805C2790:
{
    r0 = (r31 - r4);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r5 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r31));
}

loc_805C27A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805C27C0;
    }
}

loc_805C27A8:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3_addr_2 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_2, r5);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_3, r5);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805C27A8;
    }
}

loc_805C27C0:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C2620 func_805C2620 preserves=true fpr_mask=0x00000000
