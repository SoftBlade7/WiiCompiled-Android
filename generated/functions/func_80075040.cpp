#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80075040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t xer = ctx->xer;

    goto loc_80075040;

loc_80075040:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E9F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = (r31 & 1);
}

loc_80075078:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800750A4;
    }
}

loc_80075080:
{
    r4 = MemoryInline::FlatRead32((r29 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80075088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800750A4;
    }
}

loc_8007508C:
{
    r0 = (r30 * 260);
    r3 = (r3 + 64);
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    r3 = (r1 + 68);
    r4 = (r4 + r0);
    ctx->lr = 0x800750A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800750A4:
{
    r0 = (r31 & 2);
}

loc_800750A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800750D4;
    }
}

loc_800750AC:
{
    r5 = MemoryInline::FlatRead32((r29 + 336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800750B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800750D4;
    }
}

loc_800750B8:
{
    r4 = MemoryInline::FlatRead32((r1 + 76));
    r0 = (r30 * 100);
    r3 = (r1 + 64);
    r4 = (r4 + 324);
    MemoryInline::FlatWriteRam32((r1 + 64), r4);
    r4 = (r5 + r0);
    ctx->lr = 0x800750D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800750D4:
{
    r0 = (r31 & 4);
}

loc_800750D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075104;
    }
}

loc_800750DC:
{
    r5 = MemoryInline::FlatRead32((r29 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800750E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075104;
    }
}

loc_800750E8:
{
    r4 = MemoryInline::FlatRead32((r1 + 76));
    r0 = (r30 * 584);
    r3 = (r1 + 60);
    r4 = (r4 + 424);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    r4 = (r5 + r0);
    ctx->lr = 0x80075104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800508C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80075104:
{
    r0 = (r31 & 8);
}

loc_80075108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075134;
    }
}

loc_8007510C:
{
    r5 = MemoryInline::FlatRead32((r29 + 344));
}

loc_80075114:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80075134;
    }
}

loc_80075118:
{
    r4 = MemoryInline::FlatRead32((r1 + 76));
    r0 = (r30 * 40);
    r3 = (r1 + 56);
    r4 = (r4 + 1008);
    MemoryInline::FlatWriteRam32((r1 + 56), r4);
    r4 = (r5 + r0);
    // inline leaf 0x800517F0 (23 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r6 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r6 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r5);
    }
    // end of inlined leaf 0x800517F0
}

loc_80075134:
{
    r0 = (r31 & 16);
}

loc_80075138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075164;
    }
}

loc_8007513C:
{
    r5 = MemoryInline::FlatRead32((r29 + 348));
}

loc_80075144:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80075164;
    }
}

loc_80075148:
{
    r4 = MemoryInline::FlatRead32((r1 + 76));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r1 + 52);
    r4 = (r4 + 20);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r4 = (r5 + r0);
    // inline leaf 0x80050B50 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x80050B50
}

loc_80075164:
{
    r0 = (r31 & 32);
}

loc_80075168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075194;
    }
}

loc_8007516C:
{
    r5 = MemoryInline::FlatRead32((r29 + 352));
}

loc_80075174:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80075194;
    }
}

loc_80075178:
{
    r4 = MemoryInline::FlatRead32((r1 + 76));
    r0 = (r30 * 12);
    r3 = (r1 + 48);
    r4 = (r4 + 28);
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    r4 = (r5 + r0);
    // inline leaf 0x80050C70 (27 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r3 = r4;
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r5);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r5 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r5 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r5 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r5 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r4 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80050C70
}

loc_80075194:
{
    r0 = (r31 & 128);
}

loc_80075198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800751EC;
    }
}

loc_8007519C:
{
    r0 = MemoryInline::FlatRead32((r29 + 356));
}

loc_800751A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800751EC;
    }
}

loc_800751A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800751B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800751C0;
    }
}

loc_800751B8:
{
    r0 = (r3 + r0);
    goto loc_800751C4;
}

loc_800751C0:
{
    r0 = 0;
}

loc_800751C4:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r29 + 356));
    r4 = (r4 + r0);
    ctx->lr = 0x800751DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 44);
    r4 = 0;
    ctx->lr = 0x800751ECu;
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
    InvokeDirectCpu<0x80050450u>(ctx);
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
    xer = ctx->xer;
}

loc_800751EC:
{
    r0 = (r31 & 256);
}

loc_800751F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075248;
    }
}

loc_800751F4:
{
    r0 = MemoryInline::FlatRead32((r29 + 360));
}

loc_800751FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075248;
    }
}

loc_80075200:
{
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8007520C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075218;
    }
}

loc_80075210:
{
    r3 = (r3 + r0);
    goto loc_8007521C;
}

loc_80075218:
{
    r3 = 0;
}

loc_8007521C:
{
    r0 = (r3 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r29 + 360));
    r4 = (r4 + r0);
    ctx->lr = 0x80075238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050570u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    r4 = 0;
    ctx->lr = 0x80075248u;
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
    InvokeDirectCpu<0x80050470u>(ctx);
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
    xer = ctx->xer;
}

loc_80075248:
{
    r0 = (r31 & 512);
}

loc_8007524C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800752A4;
    }
}

loc_80075250:
{
    r0 = MemoryInline::FlatRead32((r29 + 364));
}

loc_80075258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800752A4;
    }
}

loc_8007525C:
{
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80075268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075274;
    }
}

loc_8007526C:
{
    r3 = (r3 + r0);
    goto loc_80075278;
}

loc_80075274:
{
    r3 = 0;
}

loc_80075278:
{
    r0 = (r3 + 160);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r29 + 364));
    r4 = (r4 + r0);
    ctx->lr = 0x80075294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800505B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    r4 = 0;
    ctx->lr = 0x800752A4u;
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
    InvokeDirectCpu<0x80050490u>(ctx);
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
    xer = ctx->xer;
}

loc_800752A4:
{
    r0 = (r31 & 1024);
}

loc_800752A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075300;
    }
}

loc_800752AC:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
}

loc_800752B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075300;
    }
}

loc_800752B8:
{
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800752C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800752D0;
    }
}

loc_800752C8:
{
    r3 = (r3 + r0);
    goto loc_800752D4;
}

loc_800752D0:
{
    r3 = 0;
}

loc_800752D4:
{
    r0 = (r3 + 224);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = (r30 * 160);
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32((r29 + 368));
    r4 = (r4 + r0);
    ctx->lr = 0x800752F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800505F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    r4 = 0;
    ctx->lr = 0x80075300u;
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
    InvokeDirectCpu<0x800504B0u>(ctx);
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
    xer = ctx->xer;
}

loc_80075300:
{
    r0 = (r31 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80075304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075344;
    }
}

loc_80075308:
{
    r0 = MemoryInline::FlatRead32((r29 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80075310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80075344;
    }
}

loc_80075314:
{
    r3 = (r1 + 76);
    // inline leaf 0x800521C0 (8 guest instruction(s))
}

loc_inl3_0x800521C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x800521CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x800521D8;
    }
}

loc_inl3_0x800521D0:
{
    r3 = (r3 + r0);
    goto loc_inl3_cont_800521C0;
}

loc_inl3_0x800521D8:
{
    r3 = 0;
}

loc_inl3_cont_800521C0:
{
    // end of inlined leaf 0x800521C0
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r29 + 372));
    r4 = (r4 + r0);
    ctx->lr = 0x80075334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800503A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x80075344u;
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
    InvokeDirectCpu<0x80050410u>(ctx);
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
    xer = ctx->xer;
}

loc_80075344:
{
    r4 = MemoryInline::FlatRead32((r29 + 320));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4_addr_0 = (r4 + r3);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r0 & ~r31);
    r4_addr_1 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80075040 func_80075040 preserves=true fpr_mask=0x00000000
