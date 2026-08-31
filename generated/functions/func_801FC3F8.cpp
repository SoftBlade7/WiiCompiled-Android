#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FC3F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FC3F8;

loc_801FC3F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC410:
{
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = -1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC434;
    }
}

loc_801FC42C:
{
    r3 = 10;
    goto loc_801FC574;
}

loc_801FC434:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC43C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC448;
    }
}

loc_801FC440:
{
    r3 = 10;
    goto loc_801FC574;
}

loc_801FC448:
{
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 6242));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_801FC458:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC464;
    }
}

loc_801FC45C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801FC460:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FC46C;
    }
}

loc_801FC464:
{
    r3 = 35;
    goto loc_801FC574;
}

loc_801FC46C:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
    r5 = -1;
    r5 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FC480:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC48C;
    }
}

loc_801FC484:
{
    r3 = 37;
    goto loc_801FC574;
}

loc_801FC48C:
{
    r5 = MemoryInline::FlatRead32(r6);
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FC498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC4B4;
    }
}

loc_801FC49C:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r3 = (r5 - r3);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r30 = (r3 + 2);
    goto loc_801FC4EC;
}

loc_801FC4B4:
{
    r5 = 0;
    ctx->lr = 0x801FC4BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC29Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
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

loc_801FC4C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC4C8;
    }
}

loc_801FC4C4:
{
    goto loc_801FC574;
}

loc_801FC4C8:
{
    r5 = MemoryInline::FlatRead32(r28);
    r0 = (r5 + 65536);
}

loc_801FC4D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801FC4EC;
    }
}

loc_801FC4D8:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r3 = (r5 - r3);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r30 = (r3 + 2);
}

loc_801FC4EC:
{
    r0 = (r5 + 65536);
}

loc_801FC4F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801FC518;
    }
}

loc_801FC4F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r3 = (r30 + -1);
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 + r0);
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_801FC520;
}

loc_801FC518:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
}

loc_801FC520:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FC52C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC570;
    }
}

loc_801FC530:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead8((r31 + 32));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_801FC540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FC570;
    }
}

loc_801FC544:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r3 = r25;
    r4 = r30;
    r6 = r27;
    r5 = PPC_Srw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r7 = r29;
    r5 = (r5 + 1);
    ctx->lr = 0x801FC564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FBB0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
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

loc_801FC568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC570;
    }
}

loc_801FC56C:
{
    goto loc_801FC574;
}

loc_801FC570:
{
    r3 = 0;
}

loc_801FC574:
{
    r11 = (r1 + 48);
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
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
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
// RECOMP_REGISTRATION base 0x801FC3F8 func_801FC3F8 preserves=true fpr_mask=0x00000000
