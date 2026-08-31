#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_801DA140_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801DA140_statefree_v0(uint32_t, uint32_t);

extern "C" void func_801E17D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r29_ca_0 = 0;
    uint32_t r29_ca_1 = 0;
    uint32_t r29_ca_2 = 0;
    uint32_t r29_ca_3 = 0;
    uint32_t r29_ca_4 = 0;
    uint32_t r29_ca_5 = 0;
    uint32_t r29_ca_6 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E17D4;

loc_801E17D4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r30 = 0;
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    r23 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(119));
}

loc_801E17FC:
{
    r24 = r4;
    MemoryInline::FlatWrite32(r3, r30);
    r25 = r5;
    r26 = r7;
    r28 = 0;
    MemoryInline::FlatWrite32(r4, r30);
    r29 = 0;
    r27 = 0;
    MemoryInline::FlatWrite32(r5, r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E182C;
    }
}

loc_801E1824:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E182C:
{
    r0 = 8;
    r31 = (r6 + 1);
    r9 = 0;
    r30 = 1;
    r5 = 10;
    ctr = r0;
}

loc_801E1844:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801E1850:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(48))) {
        goto loc_801E185C;
    }
}

loc_801E1854:
{
}

loc_801E1858:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(57))) {
        goto loc_801E1864;
    }
}

loc_801E185C:
{
    r27 = -24;
    goto loc_801E1884;
}

loc_801E1864:
{
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r28) * static_cast<uint64_t>(r5)) >> 32));
    r8 = (r3 + -48);
    r6 = (static_cast<int32_t>(r8) >> 31);
    r3 = (r29 * r5);
    r4 = (r28 * 10);
    r0 = (r0 + r3);
    r28 = (r8 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r29_ca_2 = (xer >> 29) & 1u;
    r29 = (r6 + r0);
    r29 = (r29 + r29_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r29_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801E1884:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r7));
}

loc_801E188C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E1898;
    }
}

loc_801E1890:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E1898:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801E18A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(48))) {
        goto loc_801E18B0;
    }
}

loc_801E18A8:
{
}

loc_801E18AC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(57))) {
        goto loc_801E18B8;
    }
}

loc_801E18B0:
{
    r27 = -24;
    goto loc_801E18D8;
}

loc_801E18B8:
{
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r28) * static_cast<uint64_t>(r5)) >> 32));
    r8 = (r3 + -48);
    r6 = (static_cast<int32_t>(r8) >> 31);
    r3 = (r29 * r5);
    r4 = (r28 * 10);
    r0 = (r0 + r3);
    r28 = (r8 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r29_ca_4 = (xer >> 29) & 1u;
    r29 = (r6 + r0);
    r29 = (r29 + r29_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r29_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801E18D8:
{
    r30 = (r30 + 1);
    r31 = (r31 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r7));
}

loc_801E18E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E18F0;
    }
}

loc_801E18E8:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E18F0:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E1844;
    }
}

loc_801E18F8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801E1900:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(45))) {
        goto loc_801E19B8;
    }
}

loc_801E1904:
{
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r26));
}

loc_801E1910:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E191C;
    }
}

loc_801E1914:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E191C:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x801DA140u) && KnownTranslatedCpuCall<0x801DA140u>::kAvailable && !KnownTranslatedCpuCall<0x801DA140u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801DA140u>()) {
        const auto state_free_result_801DA140_2167 = func_801DA140_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_801DA140_2167[0]);
        r4 = static_cast<uint32_t>(state_free_result_801DA140_2167[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x801DA140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_801E192C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801E1944;
    }
}

loc_801E1930:
{
    r0 = MemoryInline::FlatRead32(r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r0 = (r0 | r3);
    MemoryInline::FlatWrite32(r24, r0);
    goto loc_801E1904;
}

loc_801E1944:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801E194C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(45))) {
        goto loc_801E19AC;
    }
}

loc_801E1950:
{
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r26));
}

loc_801E195C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E1968;
    }
}

loc_801E1960:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E1968:
{
    r0 = MemoryInline::FlatRead8(r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x801DA140u) && KnownTranslatedCpuCall<0x801DA140u>::kAvailable && !KnownTranslatedCpuCall<0x801DA140u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801DA140u>()) {
        const auto state_free_result_801DA140_2C52 = func_801DA140_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_801DA140_2C52[0]);
        r4 = static_cast<uint32_t>(state_free_result_801DA140_2C52[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x801DA140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_801E1978:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801E19AC;
    }
}

loc_801E197C:
{
    r0 = MemoryInline::FlatRead32(r25);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r0 = (r0 | r3);
    MemoryInline::FlatWrite32(r25, r0);
    goto loc_801E1950;
}

loc_801E1994:
{
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r26));
}

loc_801E19A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E19AC;
    }
}

loc_801E19A4:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E19AC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801E19B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(64))) {
        goto loc_801E1994;
    }
}

loc_801E19B8:
{
    // inline leaf 0x801DC740 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24392));
    r3 = (r3 + 24);
    // end of inlined leaf 0x801DC740
    r24 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D9FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = r3;
}

loc_801E19CC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_801E1A0C;
    }
}

loc_801E19D0:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::FlatRead8(r24);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801E19E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_801E19EC;
    }
}

loc_801E19E8:
{
    r27 = -24;
}

loc_801E19EC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r26));
}

loc_801E19F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E1A04;
    }
}

loc_801E19FC:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E1A04:
{
    r24 = (r24 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E19D0;
    }
}

loc_801E1A0C:
{
    r0 = (r26 - r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801E1A14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E1A20;
    }
}

loc_801E1A18:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E1A20:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801E1A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E1A48;
    }
}

loc_801E1A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801E1A34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E1A48;
    }
}

loc_801E1A38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E1A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E1A48;
    }
}

loc_801E1A40:
{
    r3 = -24;
    goto loc_801E1A54;
}

loc_801E1A48:
{
    MemoryInline::FlatWrite32((r23 + 4), r28);
    r3 = r27;
    MemoryInline::FlatWrite32(r23, r29);
}

loc_801E1A54:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8023FB gpr_write=0xFF800B7B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E17D4 func_801E17D4 preserves=true fpr_mask=0x00000000
