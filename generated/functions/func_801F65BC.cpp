#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F65BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F65BC;

loc_801F65BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x80360000u;
    r0 = 0;
    r5 = (r5 + -20912);
    MemoryInline::FlatWrite32(r4, r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_801F65E4:
{
    r31 = r4;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F65FC;
    }
}

loc_801F65EC:
{
    r4 = (r5 + 131072);
    r0 = (r4 + 32072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801F65F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F6604;
    }
}

loc_801F65FC:
{
    r3 = 10;
    goto loc_801F674C;
}

loc_801F6604:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F6608:
{
    if (((cr & 0x00000020u) != 0)) {
        goto loc_801F663C;
    }
}

loc_801F660C:
{
    r8 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801F6614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F663C;
    }
}

loc_801F6618:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F663C;
    }
}

loc_801F6624:
{
    r0 = MemoryInline::FlatRead32(r8);
    r3 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F6630:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F663C;
    }
}

loc_801F6634:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F6638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6644;
    }
}

loc_801F663C:
{
    r3 = 38;
    goto loc_801F674C;
}

loc_801F6644:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801F664C;
    }
}

loc_801F6648:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6654;
    }
}

loc_801F664C:
{
    r3 = 38;
    goto loc_801F674C;
}

loc_801F6654:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_801F6660;
    }
}

loc_801F6658:
{
    r29 = 0;
    goto loc_801F6664;
}

loc_801F6660:
{
    r29 = MemoryInline::FlatRead32((r8 + 612));
}

loc_801F6664:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801F6668:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6674;
    }
}

loc_801F666C:
{
    r3 = 38;
    goto loc_801F674C;
}

loc_801F6674:
{
    r4 = MemoryInline::FlatRead32((r8 + 620));
    r3 = MemoryInline::FlatRead16(r29);
    r0 = MemoryInline::FlatRead8((r29 + 33));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F6684:
{
    r28 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6748;
    }
}

loc_801F668C:
{
    r5 = MemoryInline::FlatRead32((r8 + 608));
    r7 = MemoryInline::FlatRead32((r8 + 16));
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801F669C:
{
    r0 = (r0 * r28);
    r6 = (r5 - r0);
    r0 = (0 - r6);
    r3 = (r0 | r6);
    r0 = (r28 - r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r0 & r3);
    r27 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F66CC;
    }
}

loc_801F66C0:
{
    r0 = (r7 + 1);
    r0 = (r0 * r28);
    goto loc_801F6740;
}

loc_801F66CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F66D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F66F0;
    }
}

loc_801F66D4:
{
    r3 = (r8 + 4);
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    ctx->lr = 0x801F66E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FD39Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F66E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F66F4;
    }
}

loc_801F66EC:
{
    goto loc_801F674C;
}

loc_801F66F0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
}

loc_801F66F4:
{
    r3 = r29;
    // inline leaf 0x801FD740 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r3 = 0x80250000u;
    r3 = (r3 + 12640);
    r0 = (r0 * 20);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x801FD740
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = r3;
    r26 = 0;
    goto loc_801F6730;
}

loc_801F670C:
{
    r3 = r29;
    r5 = (r1 + 8);
    r26 = (r26 + 1);
    ctx->lr = 0x801F671Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FD5B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F6720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F6728;
    }
}

loc_801F6724:
{
    goto loc_801F674C;
}

loc_801F6728:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
}

loc_801F6730:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_801F6734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F670C;
    }
}

loc_801F6738:
{
    r0 = (r26 * r28);
    r0 = (r27 + r0);
}

loc_801F6740:
{
    r0 = (r0 - r27);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801F6748:
{
    r3 = 0;
}

loc_801F674C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F65BC func_801F65BC preserves=true fpr_mask=0x00000000
