#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80751208(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80751208;

loc_80751208:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80751230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807513D0;
    }
}

loc_80751234:
{
    r7 = MemoryInline::FlatRead32((r4 + 156));
    r4 = 3;
    r0 = MemoryInline::FlatRead32((r3 + 176));
    r6 = 7;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & 4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r5 = (r3 + r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80751254:
{
    r29 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 16), r7);
    r5 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8075126C;
    }
}

loc_80751268:
{
    r6 = 6;
}

loc_8075126C:
{
    r7 = (r30 + 20);
    ctx->lr = 0x80751274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807DC2D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 180u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r0 = 38;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 180u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 24), r3);
    r5 = (r30 + 35);
    r4 = (r31 + 15);
    r3 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r30 + 28), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r31 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r30 + 29), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r31 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 32), r3);
    ctr = r0;
}

loc_807512A4:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807512A4;
    }
}

loc_807512B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r31 + 92));
    r5 = r29;
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r30 + 112), r0);
    r4 = 3;
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r6 = 7;
    r0 = MemoryInline::ReadResolved8(guest_range_2, 92u, (r31 + 96));
    MemoryInline::WriteResolved8(guest_range_3, 92u, (r30 + 116), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 93u, (r31 + 97));
    MemoryInline::WriteResolved8(guest_range_3, 93u, (r30 + 117), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 94u, (r31 + 98));
    MemoryInline::WriteResolved8(guest_range_3, 94u, (r30 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 95u, (r31 + 99));
    MemoryInline::WriteResolved8(guest_range_3, 95u, (r30 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r31 + 100));
    MemoryInline::WriteResolved32(guest_range_3, 96u, (r30 + 120), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 100u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r31 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r31 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r30 + 128), r0);
        MemoryInline::WriteResolved32(guest_range_3, 100u, (r30 + 124), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 108u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r31 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r31 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r30 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r30 + 132), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 116u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r31 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r31 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 120u, (r30 + 144), r0);
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r30 + 140), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 124u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r31 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r31 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 128u, (r30 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_3, 124u, (r30 + 148), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 132u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r31 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 136u, (r31 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 136u, (r30 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_3, 132u, (r30 + 156), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 140u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r31 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r31 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 144u, (r30 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_3, 140u, (r30 + 164), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 148u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r7 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 152u, (r31 + 156));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 148u, (r31 + 152));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 148u, (r30 + 172), r7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80751368:
{
    MemoryInline::WriteResolved32(guest_range_3, 152u, (r30 + 176), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 156u, (r31 + 160));
    MemoryInline::WriteResolved32(guest_range_3, 156u, (r30 + 180), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 160u, (r31 + 164));
    MemoryInline::WriteResolved8(guest_range_3, 160u, (r30 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 161u, (r31 + 165));
    MemoryInline::WriteResolved8(guest_range_3, 161u, (r30 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 162u, (r31 + 166));
    MemoryInline::WriteResolved8(guest_range_3, 162u, (r30 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 164u, (r31 + 168));
    MemoryInline::WriteResolved32(guest_range_3, 164u, (r30 + 188), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 168u, (r31 + 172));
    MemoryInline::WriteResolved8(guest_range_3, 168u, (r30 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 169u, (r31 + 173));
    MemoryInline::WriteResolved8(guest_range_3, 169u, (r30 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 170u, (r31 + 174));
    MemoryInline::WriteResolved8(guest_range_3, 170u, (r30 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 172u, (r31 + 176));
    MemoryInline::WriteResolved32(guest_range_3, 172u, (r30 + 196), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 176u, (r31 + 180));
    MemoryInline::WriteResolved32(guest_range_3, 176u, (r30 + 200), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807513C4;
    }
}

loc_807513C0:
{
    r6 = 6;
}

loc_807513C4:
{
    r7 = (r30 + 20);
    ctx->lr = 0x807513CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807DC2C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8075150C;
}

loc_807513D0:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 208), 0, 205u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 204u, (r3 + 412), static_cast<uint8_t>(r0));
    r0 = 38;
    r7 = (r3 + 219);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 180u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 4));
    r6 = (r4 + 15);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 208), r5);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 212), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 213), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 216), r5);
    ctr = r0;
}

loc_80751408:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_2 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80751408;
    }
}

loc_8075141C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 296), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r4 + 96));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r3 + 300), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r4 + 97));
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r3 + 301), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r4 + 98));
    MemoryInline::WriteResolved8(guest_range_1, 94u, (r3 + 302), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 95u, (r4 + 99));
    MemoryInline::WriteResolved8(guest_range_1, 95u, (r3 + 303), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 304), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 312), r0);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 308), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 320), r0);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 316), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 328), r0);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 324), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 124u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r4 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 336), r0);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r3 + 332), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r4 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r4 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 344), r0);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 340), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r4 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r4 + 148));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 352), r0);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 348), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r4 + 152));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r4 + 156));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 360), r0);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 356), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r4 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r3 + 364), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r4 + 164));
    MemoryInline::WriteResolved8(guest_range_1, 160u, (r3 + 368), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 161u, (r4 + 165));
    MemoryInline::WriteResolved8(guest_range_1, 161u, (r3 + 369), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 162u, (r4 + 166));
    MemoryInline::WriteResolved8(guest_range_1, 162u, (r3 + 370), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r4 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 372), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 168u, (r4 + 172));
    MemoryInline::WriteResolved8(guest_range_1, 168u, (r3 + 376), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 169u, (r4 + 173));
    MemoryInline::WriteResolved8(guest_range_1, 169u, (r3 + 377), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 170u, (r4 + 174));
    MemoryInline::WriteResolved8(guest_range_1, 170u, (r3 + 378), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r4 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 380), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 176u, (r3 + 384), r0);
}

loc_8075150C:
{
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80751208 func_80751208 preserves=true fpr_mask=0x00000000
