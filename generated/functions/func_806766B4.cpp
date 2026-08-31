#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806766B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806766B4;

loc_806766B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r8 = MemoryInline::FlatRead32((r6 + -10424));
    r0 = MemoryInline::FlatRead16((r8 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806766DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806766FC;
    }
}

loc_806766E0:
{
    r6 = 65536;
    r7 = (r0 & 255);
    r0 = (r6 + -27664);
    r0 = (r0 * r7);
    r6 = (r8 + r0);
    r7 = (r6 + 56);
    goto loc_80676700;
}

loc_806766FC:
{
    r7 = 0;
}

loc_80676700:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_80676708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80676748;
    }
}

loc_8067670C:
{
    r6 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r6 = MemoryInline::FlatRead32((r6 + -29952));
}

loc_8067671C:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80676748;
    }
}

loc_80676720:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_80676728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80676738;
    }
}

loc_8067672C:
{
}

loc_80676730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80676740;
    }
}

loc_80676734:
{
    goto loc_80676748;
}

loc_80676738:
{
    r0 = 1;
    goto loc_8067674C;
}

loc_80676740:
{
    r0 = 2;
    goto loc_8067674C;
}

loc_80676748:
{
    r0 = 3;
}

loc_8067674C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80676750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676840;
    }
}

loc_80676754:
{
    r6 = (r4 * 28);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r4 = 0;
    r7 = (r7 + r6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 22820), 0, 24u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r7 + 22840));
}

loc_8067676C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676780;
    }
}

loc_80676770:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 22826));
}

loc_80676778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676780;
    }
}

loc_8067677C:
{
    r4 = 1;
}

loc_80676780:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80676784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676834;
    }
}

loc_80676788:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r7 + 22820));
    r3 = 65536;
    MemoryInline::FlatWrite16((r5 + 80), static_cast<uint16_t>(r0));
    r0 = (r3 + -27664);
    r6 = 0x809C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r7 + 22822));
    MemoryInline::FlatWrite8((r5 + 82), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 22824));
    MemoryInline::FlatWrite16((r5 + 84), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 22826));
    MemoryInline::FlatWrite8((r5 + 86), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 22828));
    MemoryInline::FlatWrite32((r5 + 88), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 22832));
    MemoryInline::FlatWrite32((r5 + 92), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r7 + 22836));
    MemoryInline::FlatWrite32((r5 + 96), r3);
    r5 = MemoryInline::FlatRead32((r6 + -10424));
    r3 = MemoryInline::FlatRead16((r5 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    r0 = (r0 * r3);
    r3 = (r5 + r0);
    r30 = (r3 + 78);
    r3 = r30;
    ctx->lr = 0x806767F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806767F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067680C;
    }
}

loc_806767F8:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80676808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80676848;
}

loc_8067680C:
{
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x80676818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067681C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676848;
    }
}

loc_80676820:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = r31;
    r4 = 6;
    ctx->lr = 0x80676830u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80676848;
}

loc_80676834:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 86), static_cast<uint8_t>(r0));
    goto loc_80676848;
}

loc_80676840:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 86), static_cast<uint8_t>(r0));
}

loc_80676848:
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
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806766B4 func_806766B4 preserves=true fpr_mask=0x00000000
