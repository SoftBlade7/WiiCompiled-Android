#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004D630;

loc_8004D630:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x80270000u;
    r29 = r3;
    r31 = (r31 + 9888);
    r4 = (r1 + 52);
    r0 = (r31 + 0);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 48);
    r0 = (r5 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
    ctx->lr = 0x8004D670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D674:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D698;
    }
}

loc_8004D678:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8004D684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D690;
    }
}

loc_8004D688:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D69C;
}

loc_8004D690:
{
    r27 = 0;
    goto loc_8004D69C;
}

loc_8004D698:
{
    r27 = 0;
}

loc_8004D69C:
{
    r28 = (r31 + 0);
    r30 = 0;
    goto loc_8004D720;
}

loc_8004D6A8:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r28);
    r4 = (r1 + 40);
    r3 = (r1 + 44);
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->lr = 0x8004D6C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004D6C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D70C;
    }
}

loc_8004D6CC:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D6D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D704;
    }
}

loc_8004D6DC:
{
    r0 = (r30 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D6F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D6FC;
    }
}

loc_8004D6F4:
{
    r0 = (r3 + r0);
    goto loc_8004D710;
}

loc_8004D6FC:
{
    r0 = 0;
    goto loc_8004D710;
}

loc_8004D704:
{
    r0 = 0;
    goto loc_8004D710;
}

loc_8004D70C:
{
    r0 = 0;
}

loc_8004D710:
{
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r3 = (r1 + 64);
    ctx->lr = 0x8004D71Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004EE30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8004D720:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004D724:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D6A8;
    }
}

loc_8004D728:
{
    r0 = (r31 + 64);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r1 + 36);
    r3 = (r1 + 32);
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x8004D748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D74C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D770;
    }
}

loc_8004D750:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_8004D75C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D768;
    }
}

loc_8004D760:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D774;
}

loc_8004D768:
{
    r27 = 0;
    goto loc_8004D774;
}

loc_8004D770:
{
    r27 = 0;
}

loc_8004D774:
{
    r28 = (r31 + 64);
    r30 = 0;
    goto loc_8004D7F8;
}

loc_8004D780:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r28);
    r4 = (r1 + 24);
    r3 = (r1 + 28);
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8004D79Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004D7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D7E4;
    }
}

loc_8004D7A4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D7B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D7DC;
    }
}

loc_8004D7B4:
{
    r0 = (r30 + 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D7D4;
    }
}

loc_8004D7CC:
{
    r0 = (r3 + r0);
    goto loc_8004D7E8;
}

loc_8004D7D4:
{
    r0 = 0;
    goto loc_8004D7E8;
}

loc_8004D7DC:
{
    r0 = 0;
    goto loc_8004D7E8;
}

loc_8004D7E4:
{
    r0 = 0;
}

loc_8004D7E8:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052AE0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r30 = (r30 + 1);
}

loc_8004D7F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004D7FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D780;
    }
}

loc_8004D800:
{
    r0 = (r31 + 32);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 20);
    r3 = (r1 + 16);
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8004D820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D824:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D848;
    }
}

loc_8004D828:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
}

loc_8004D834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D840;
    }
}

loc_8004D838:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D84C;
}

loc_8004D840:
{
    r27 = 0;
    goto loc_8004D84C;
}

loc_8004D848:
{
    r27 = 0;
}

loc_8004D84C:
{
    r31 = (r31 + 32);
    r30 = 0;
    goto loc_8004D8D4;
}

loc_8004D858:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r4 = (r1 + 8);
    r3 = (r1 + 12);
    r5 = MemoryInline::FlatRead32(r29);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8004D874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004D878:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D8BC;
    }
}

loc_8004D87C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D8B4;
    }
}

loc_8004D88C:
{
    r0 = (r30 + 1);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D8A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D8AC;
    }
}

loc_8004D8A4:
{
    r0 = (r3 + r0);
    goto loc_8004D8C0;
}

loc_8004D8AC:
{
    r0 = 0;
    goto loc_8004D8C0;
}

loc_8004D8B4:
{
    r0 = 0;
    goto loc_8004D8C0;
}

loc_8004D8BC:
{
    r0 = 0;
}

loc_8004D8C0:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x8004D8D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800528E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8004D8D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8004D8D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D858;
    }
}

loc_8004D8DC:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8004D630 func_8004D630 preserves=true fpr_mask=0x00000000
