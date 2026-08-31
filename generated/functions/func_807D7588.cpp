#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D7588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D7588;

loc_807D7588:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32(r6);
    r28 = r3;
    r29 = r4;
    r25 = r5;
}

loc_807D75B0:
{
    r30 = r6;
    r31 = r7;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D7620;
    }
}

loc_807D75BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r27 = 1;
    r26 = 1;
    r4 = MemoryInline::FlatRead16((r3 + 250));
    // inline leaf 0x807D1BF8 (7 guest instruction(s))
    r0 = (6 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(6) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = 6;
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x807D1BF8
}

loc_807D75D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D75EC;
    }
}

loc_807D75D8:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 250));
}

loc_807D75E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_807D75EC;
    }
}

loc_807D75E8:
{
    r26 = 0;
}

loc_807D75EC:
{
}

loc_807D75F0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_807D7608;
    }
}

loc_807D75F4:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 250));
}

loc_807D7600:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_807D7608;
    }
}

loc_807D7604:
{
    r27 = 0;
}

loc_807D7608:
{
}

loc_807D760C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807D7618;
    }
}

loc_807D7610:
{
    r0 = 0;
    goto loc_807D761C;
}

loc_807D7618:
{
    r0 = (r28 + 664);
}

loc_807D761C:
{
    MemoryInline::FlatWrite32((r28 + 676), r0);
}

loc_807D7620:
{
    r4 = MemoryInline::FlatRead32((r28 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807D7628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D76D0;
    }
}

loc_807D762C:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r4_addr_1 = (r4 + r3);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = (r1 + 8);
    r0 = (r0 * 28);
    r27 = (r4 + r0);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019A4E0u>(ctx);
    f0 = ctx->fpr[0];
    f0.d = MemoryInline::FlatReadFloat32((r27 + 16));
    r3 = r29;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r5 = r29;
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead8((r28 + 573));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D767C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D76D0;
    }
}

loc_807D7680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807D7684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D76D0;
    }
}

loc_807D7688:
{
    r5 = 0;
    r4 = 0;
    goto loc_807D76B4;
}

loc_807D7694:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32(r30, r3);
    r0 = MemoryInline::FlatRead32((r28 + 656));
}

loc_807D76A8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_807D76B0;
    }
}

loc_807D76AC:
{
    MemoryInline::FlatWrite32(r30, r4);
}

loc_807D76B0:
{
    r5 = (r5 + 1);
}

loc_807D76B4:
{
    r0 = MemoryInline::FlatRead8((r28 + 575));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 1);
    r3 = (0 - r0);
    r0 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_807D76CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807D7694;
    }
}

loc_807D76D0:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0000FF gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0x8000C001 fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807D7588 func_807D7588 preserves=true fpr_mask=0x00000000
