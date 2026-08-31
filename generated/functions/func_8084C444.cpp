#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805BDBD4_statefree(uint32_t, uint32_t);

extern "C" void func_8084C444(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8084C444;

loc_8084C444:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r26 = r3;
    ctx->lr = 0x8084C45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80837170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r28 = (r3 & 255);
}

loc_8084C468:
{
    r4 = r28;
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(12))) {
        goto loc_8084C5F8;
    }
}

loc_8084C470:
{
    r6 = (12 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
}

loc_8084C478:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8084C5C4;
    }
}

loc_8084C47C:
{
}

loc_8084C480:
{
    r3 = 0;
    r5 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(13))) {
        goto loc_8084C494;
    }
}

loc_8084C490:
{
    r0 = 1;
}

loc_8084C494:
{
}

loc_8084C498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084C4AC;
    }
}

loc_8084C49C:
{
    r0 = (r28 + -2147483648);
}

loc_8084C4A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8084C4AC;
    }
}

loc_8084C4A8:
{
    r5 = 1;
}

loc_8084C4AC:
{
}

loc_8084C4B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8084C4DC;
    }
}

loc_8084C4B4:
{
    r0 = (0 - r28);
    r5 = 1;
    r0 = (r0 & -2147483648);
}

loc_8084C4C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8084C4D0;
    }
}

loc_8084C4C4:
{
    r0 = (r6 & -2147483648);
}

loc_8084C4C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084C4D0;
    }
}

loc_8084C4CC:
{
    r5 = 0;
}

loc_8084C4D0:
{
}

loc_8084C4D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8084C4DC;
    }
}

loc_8084C4D8:
{
    r3 = 1;
}

loc_8084C4DC:
{
}

loc_8084C4E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8084C5C4;
    }
}

loc_8084C4E4:
{
    r5 = (11 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r3 = 0x809C0000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r0 = 2;
    ctr = r5;
}

loc_8084C4FC:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(4))) {
        goto loc_8084C5C4;
    }
}

loc_8084C500:
{
    r6 = (r4 & 255);
    r5 = (r4 + 1);
    r7 = (r6 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -10456), 0, 4u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r8 = (r5 & 255);
    r6 = (r4 + 2);
    r7 = (r9 + r7);
    r5 = (r4 + 3);
    MemoryInline::FlatWrite32((r7 + 3300), r0);
    r9 = (r5 & 255);
    r8 = (r8 * 240);
    r7 = (r6 & 255);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r6 = (r4 + 4);
    r5 = (r4 + 5);
    r8 = (r10 + r8);
    MemoryInline::FlatWrite32((r8 + 3300), r0);
    r8 = (r6 & 255);
    r10 = (r7 * 240);
    r7 = (r5 & 255);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r6 = (r4 + 6);
    r5 = (r4 + 7);
    r10 = (r11 + r10);
    MemoryInline::FlatWrite32((r10 + 3300), r0);
    r6 = (r6 & 255);
    r9 = (r9 * 240);
    r5 = (r5 & 255);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r4 = (r4 + 8);
    r9 = (r10 + r9);
    MemoryInline::FlatWrite32((r9 + 3300), r0);
    r8 = (r8 * 240);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r7 = (r7 * 240);
    r8 = (r9 + r8);
    MemoryInline::FlatWrite32((r8 + 3300), r0);
    r6 = (r6 * 240);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r7 = (r8 + r7);
    MemoryInline::FlatWrite32((r7 + 3300), r0);
    r5 = (r5 * 240);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 3300), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + -10456));
    r5 = (r6 + r5);
    MemoryInline::FlatWrite32((r5 + 3300), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084C500;
    }
}

loc_8084C5C4:
{
    r0 = (12 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r6 = 2;
    r5 = 0x809C0000u;
    ctr = r0;
}

loc_8084C5D8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(12))) {
        goto loc_8084C5F8;
    }
}

loc_8084C5DC:
{
    r0 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + 1);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3300), r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084C5DC;
    }
}

loc_8084C5F8:
{
    r27 = 0;
    r30 = 0;
    r29 = 0;
    r25 = 0x809C0000u;
    r31 = 0x809C0000u;
    goto loc_8084C66C;
}

loc_8084C610:
{
    r0 = (r27 & 255);
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 3300));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8084C628:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084C63C;
    }
}

loc_8084C62C:
{
    r3 = MemoryInline::FlatRead32((r25 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r30);
    r4 = MemoryInline::FlatRead32((r3 + 372));
}

loc_8084C63C:
{
    r0 = (0 - r4);
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r0 = (r0 | r4);
    r4 = r27;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r29 + r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x8084C660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x805BDAF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    r30 = (r30 + 4);
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_8084C66C:
{
}

loc_8084C670:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r28))) {
        goto loc_8084C610;
    }
}

loc_8084C674:
{
    r6 = 0;
    r5 = 0;
    r4 = 0;
    goto loc_8084C698;
}

loc_8084C684:
{
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r6 = (r6 + 1);
    r3_addr_4 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r5 = (r5 + 4);
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r4));
}

loc_8084C698:
{
    r0 = MemoryInline::FlatRead32((r26 + 76));
}

loc_8084C6A0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_8084C684;
    }
}

loc_8084C6A4:
{
    r25 = 0;
    r27 = 0x809C0000u;
    goto loc_8084C6EC;
}

loc_8084C6B0:
{
    r3 = MemoryInline::FlatRead32((r27 + 6536));
}

loc_8084C6B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8084C6E8;
    }
}

loc_8084C6BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8084C6C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8084C6E8;
    }
}

loc_8084C6C8:
{
    r4 = (r25 & 255);
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8084C6DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084C6E8;
    }
}

loc_8084C6E0:
{
    r5 = 0;
    ctx->lr = 0x8084C6E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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

loc_8084C6E8:
{
    r25 = (r25 + 1);
}

loc_8084C6EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r28));
}

loc_8084C6F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084C6B0;
    }
}

loc_8084C6F4:
{
    r3 = (r26 + 84);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805BDBD4u) && KnownTranslatedCpuCall<0x805BDBD4u>::kAvailable && !KnownTranslatedCpuCall<0x805BDBD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805BDBD4u>()) {
        const auto state_free_result_805BDBD4_3851 = func_805BDBD4_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_805BDBD4_3851);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x805BDBD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8084C444 func_8084C444 preserves=true fpr_mask=0x00000000
