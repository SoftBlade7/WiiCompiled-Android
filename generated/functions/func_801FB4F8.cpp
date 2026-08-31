#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FB4F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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

    goto loc_801FB4F8;

loc_801FB4F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r25 = r3;
    r8 = 0x80250000u;
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r8 = (r8 + 12640);
    r26 = r5;
    r27 = r6;
    MemoryInline::FlatWrite32(r6, r0);
    r3 = (r3 * 20);
    r6 = r4;
    MemoryInline::FlatWrite32(r7, r0);
    r28 = r7;
    r5 = (r8 + r3);
    r7 = (r1 + 16);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r3 = r31;
    r30 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r1 + 12);
    r4 = MemoryInline::FlatRead32((r31 + 60));
    r5 = -1;
    ctx->lr = 0x801FB564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FA974u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801FB568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB570;
    }
}

loc_801FB56C:
{
    goto loc_801FB78C;
}

loc_801FB570:
{
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FB57C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB588;
    }
}

loc_801FB580:
{
    r3 = 0;
    goto loc_801FB78C;
}

loc_801FB588:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x801FB594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FA844u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801FB598:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB5A0;
    }
}

loc_801FB59C:
{
    goto loc_801FB78C;
}

loc_801FB5A0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r29 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_801FB648;
}

loc_801FB5B4:
{
    r3 = r25;
    r4 = r29;
    r5 = r26;
    r6 = (r29 + 1);
    r8 = (r1 + 8);
    r7 = 1;
    ctx->lr = 0x801FB5D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FB2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801FB5D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB5DC;
    }
}

loc_801FB5D8:
{
    goto loc_801FB78C;
}

loc_801FB5DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r0 & 4);
}

loc_801FB5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FB628;
    }
}

loc_801FB5E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 65536);
}

loc_801FB5F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801FB628;
    }
}

loc_801FB5F8:
{
}

loc_801FB5FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FB628;
    }
}

loc_801FB600:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_801FB608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801FB61C;
    }
}

loc_801FB60C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_801FB618:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FB628;
    }
}

loc_801FB61C:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_801FB628:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 65536);
}

loc_801FB634:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FB63C;
    }
}

loc_801FB638:
{
    MemoryInline::FlatWrite32(r27, r29);
}

loc_801FB63C:
{
    MemoryInline::FlatWrite32(r28, r29);
    r26 = (r26 + 1);
    r29 = (r29 + 1);
}

loc_801FB648:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
}

loc_801FB650:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FB5B4;
    }
}

loc_801FB654:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FB65C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB6DC;
    }
}

loc_801FB660:
{
    r3 = r25;
    r5 = r26;
    r6 = r30;
    r8 = (r1 + 8);
    r7 = 1;
    ctx->lr = 0x801FB678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FB2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801FB67C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB684;
    }
}

loc_801FB680:
{
    goto loc_801FB78C;
}

loc_801FB684:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 65536);
}

loc_801FB690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FB698;
    }
}

loc_801FB694:
{
    MemoryInline::FlatWrite32(r27, r29);
}

loc_801FB698:
{
    MemoryInline::FlatWrite32(r28, r29);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + 65536);
}

loc_801FB6A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801FB6DC;
    }
}

loc_801FB6AC:
{
}

loc_801FB6B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FB6DC;
    }
}

loc_801FB6B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
}

loc_801FB6BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801FB6D0;
    }
}

loc_801FB6C0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_801FB6CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801FB6DC;
    }
}

loc_801FB6D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_801FB6DC:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r25 + 8), r0);
    MemoryInline::FlatWrite32((r25 + 12), r26);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r28, r0);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801FB710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB71C;
    }
}

loc_801FB714:
{
    r3 = r31;
    ctx->lr = 0x801FB71Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
}

loc_801FB71C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB728;
    }
}

loc_801FB724:
{
    goto loc_801FB78C;
}

loc_801FB728:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801FB730:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801FB788;
    }
}

loc_801FB734:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r3 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB788;
    }
}

loc_801FB740:
{
    r3 = 0;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801FB750;
    }
}

loc_801FB748:
{
    r3 = 12;
    goto loc_801FB76C;
}

loc_801FB750:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FB75C;
    }
}

loc_801FB754:
{
    r3 = 36;
    goto loc_801FB76C;
}

loc_801FB75C:
{
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FB760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB76C;
    }
}

loc_801FB764:
{
    r3 = r31;
    ctx->lr = 0x801FB76Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
}

loc_801FB76C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FB770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FB788;
    }
}

loc_801FB774:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 56), r0);
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
}

loc_801FB788:
{
    r3 = 0;
}

loc_801FB78C:
{
    r11 = (r1 + 64);
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
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
// RECOMP_REGISTRATION base 0x801FB4F8 func_801FB4F8 preserves=true fpr_mask=0x00000000
