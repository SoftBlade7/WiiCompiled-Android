#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CB674(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CB674;

loc_801CB674:
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
}

loc_801CB68C:
{
    r30 = r3;
    r31 = r4;
    r26 = r5;
    r27 = r7;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801CB6B4;
    }
}

loc_801CB6A0:
{
    r29 = MemoryInline::FlatRead8(r3);
    r28 = MemoryInline::FlatRead8(r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r28)));
    goto loc_801CB6BC;
}

loc_801CB6B4:
{
    r29 = MemoryInline::FlatRead16(r3);
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r28 = MemoryInline::FlatRead16(r4);
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
}

loc_801CB6BC:
{
    r3 = (0 - r6);
}

loc_801CB6C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r29))) {
        goto loc_801CB6D8;
    }
}

loc_801CB6C8:
{
}

loc_801CB6CC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r6))) {
        goto loc_801CB6D8;
    }
}

loc_801CB6D0:
{
    r29 = 0;
    goto loc_801CB6EC;
}

loc_801CB6D8:
{
}

loc_801CB6DC:
{
    r0 = (r29 + r6);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_801CB6E8;
    }
}

loc_801CB6E4:
{
    r0 = (r29 - r6);
}

loc_801CB6E8:
{
    r29 = r0;
}

loc_801CB6EC:
{
}

loc_801CB6F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r28))) {
        goto loc_801CB704;
    }
}

loc_801CB6F4:
{
}

loc_801CB6F8:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r6))) {
        goto loc_801CB704;
    }
}

loc_801CB6FC:
{
    r28 = 0;
    goto loc_801CB718;
}

loc_801CB704:
{
}

loc_801CB708:
{
    r0 = (r28 + r6);
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_801CB714;
    }
}

loc_801CB710:
{
    r0 = (r28 - r6);
}

loc_801CB714:
{
    r28 = r0;
}

loc_801CB718:
{
    r4 = (r29 * r29);
    r3 = (r28 * r28);
    r0 = (r5 * r5);
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_801CB72C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CB770;
    }
}

loc_801CB730:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26032));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = (r29 * r26);
    f0.d = PPC_Fctiwz(f0.d);
    r0 = (r28 * r26);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r29 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r28 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801CB770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801CB774:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CB784;
    }
}

loc_801CB778:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r28));
    goto loc_801CB78C;
}

loc_801CB784:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r28));
}

loc_801CB78C:
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
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFF gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CB674 func_801CB674 preserves=true fpr_mask=0x00000000
