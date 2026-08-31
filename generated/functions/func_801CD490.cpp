#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CD490(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r9_addic_src_0 = 0;
    uint32_t r9_addic_src_1 = 0;
    uint32_t r9_addic_src_2 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801CD490;

loc_801CD490:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r3 + 524);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80350000u;
    r31 = (r31 + 16608);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D09CCu>(ctx);
    r1 = ctx->gpr[1];
    r6 = (r31 + 3360);
    r10 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r10);
    r7 = (r31 + 8040);
    r8 = (r31 + 8072);
    r4 = (r30 + 88);
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r7, static_cast<uint16_t>(r10));
    r3 = (r30 + 28);
    r0 = 3;
    r5 = r30;
    guest_range_2 = MemoryInline::ResolveRangeHost(r8, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r8, static_cast<uint16_t>(r10));
    r9 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 4), r10);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r7 + 2), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r8 + 2), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 8), r10);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r7 + 4), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r8 + 4), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 12), r10);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r7 + 6), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r8 + 6), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 16), r10);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r7 + 8), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r8 + 8), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 20), r10);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r7 + 10), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r8 + 10), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 24), r10);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r7 + 12), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r8 + 12), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 28), r10);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r7 + 14), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r8 + 14), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r6 + 32), r10);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r7 + 16), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r8 + 16), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r6 + 36), r10);
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r7 + 18), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r8 + 18), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r6 + 40), r10);
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r7 + 20), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r8 + 20), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r6 + 44), r10);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r7 + 22), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r8 + 22), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r6 + 48), r10);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r7 + 24), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r8 + 24), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r6 + 52), r10);
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r7 + 26), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r8 + 26), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r6 + 56), r10);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r7 + 28), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r8 + 28), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r6 + 60), r10);
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r7 + 30), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r8 + 30), static_cast<uint16_t>(r10));
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 1792u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 20), r3);
    }
    ctr = r0;
}

loc_801CD5B4:
{
    r0 = (5 - r9);
}

loc_801CD5BC:
{
    r0 = (r0 * 96);
    r3 = (r30 + r0);
    r0 = (r3 + 1188);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_801CD5D8;
    }
}

loc_801CD5D0:
{
    r0 = 0;
    goto loc_801CD5E8;
}

loc_801CD5D8:
{
    r0 = (r9 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_801CD5E8:
{
}

loc_801CD5EC:
{
    MemoryInline::FlatWrite32((r5 + 32), r0);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(5))) {
        goto loc_801CD5FC;
    }
}

loc_801CD5F4:
{
    r0 = 0;
    goto loc_801CD60C;
}

loc_801CD5FC:
{
    r0 = (r9 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_801CD60C:
{
    r9_addic_src_2 = r9;
    r9 = (r9_addic_src_2 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801CD610:
{
    MemoryInline::FlatWrite32((r5 + 36), r0);
    r0 = (5 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(5) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r0 = (r0 * 96);
    r3 = (r30 + r0);
    r0 = (r3 + 1188);
    MemoryInline::FlatWrite32((r5 + 40), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CD634;
    }
}

loc_801CD62C:
{
    r0 = 0;
    goto loc_801CD644;
}

loc_801CD634:
{
    r0 = (r9 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_801CD644:
{
}

loc_801CD648:
{
    MemoryInline::FlatWrite32((r5 + 44), r0);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(5))) {
        goto loc_801CD658;
    }
}

loc_801CD650:
{
    r0 = 0;
    goto loc_801CD668;
}

loc_801CD658:
{
    r0 = (r9 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_801CD668:
{
    MemoryInline::FlatWrite32((r5 + 48), r0);
    r5 = (r5 + 24);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CD5B4;
    }
}

loc_801CD678:
{
    r4 = (r30 + 216);
    r3 = (r30 + 108);
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r30 + 104), r4);
    r0 = 5;
    r5 = r30;
    r4 = (r30 + 228);
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r30 + 100), r3);
    ctr = r0;
}

loc_801CD69C:
{
}

loc_801CD6A0:
{
    MemoryInline::FlatWrite32((r5 + 108), r4);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801CD6B0;
    }
}

loc_801CD6A8:
{
    r0 = 0;
    goto loc_801CD6C0;
}

loc_801CD6B0:
{
    r0 = (r6 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_801CD6C0:
{
}

loc_801CD6C4:
{
    MemoryInline::FlatWrite32((r5 + 112), r0);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(9))) {
        goto loc_801CD6D4;
    }
}

loc_801CD6CC:
{
    r0 = 0;
    goto loc_801CD6E4;
}

loc_801CD6D4:
{
    r0 = (r6 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_801CD6E4:
{
    MemoryInline::FlatWrite32((r5 + 116), r0);
    r4 = (r4 + 96);
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_801CD6F0:
{
    MemoryInline::FlatWrite32((r5 + 120), r4);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801CD700;
    }
}

loc_801CD6F8:
{
    r0 = 0;
    goto loc_801CD710;
}

loc_801CD700:
{
    r0 = (r6 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_801CD710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(9));
}

loc_801CD714:
{
    MemoryInline::FlatWrite32((r5 + 124), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CD724;
    }
}

loc_801CD71C:
{
    r0 = 0;
    goto loc_801CD734;
}

loc_801CD724:
{
    r0 = (r6 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_801CD734:
{
    MemoryInline::FlatWrite32((r5 + 128), r0);
    r4 = (r4 + 96);
    r5 = (r5 + 24);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CD69C;
    }
}

loc_801CD748:
{
    r29 = 0;
    r6 = 1;
    r0 = -65;
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r30 + 12), static_cast<uint8_t>(r29));
    r3 = (r30 + 1794);
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r30 + 14), static_cast<uint8_t>(r29));
    r5 = 6;
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r30 + 13), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r30 + 15), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r30 + 16), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r30 + 17), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1755u, (r30 + 1767), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1757u, (r30 + 1769), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1756u, (r30 + 1768), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 1758u, (r30 + 1770), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1759u, (r30 + 1771), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1788u, (r30 + 1800), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1790u, (r30 + 1802), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_3, 1791u, (r30 + 1803), static_cast<uint8_t>(r0));
    ctx->lr = 0x801CD79Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + 1788);
    r4 = 0;
    r5 = 6;
    ctx->lr = 0x801CD7ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 10;
    MemoryInline::FlatWriteRam16((r30 + 1860), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r30 + 1862), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = (r31 + 0);
    r31 = r3;
    r3 = (r30 + 228);
    r4 = 0;
    r5 = 960;
    ctx->lr = 0x801CD7D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + 1188);
    r4 = 0;
    r5 = 576;
    ctx->lr = 0x801CD7E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r30 + 18), static_cast<uint8_t>(r29));
    r3 = r31;
    MemoryInline::FlatWriteRam8((r30 + 19), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1764), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1765), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1766), static_cast<uint8_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007FB gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CD490 func_801CD490 preserves=true fpr_mask=0x00000000
