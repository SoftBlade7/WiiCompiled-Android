#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80591FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80591FA4;

loc_80591FA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = 396;
    ctx->lr = 0x80591FC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x809C0000u;
    r0 = 16;
    r5 = MemoryInline::FlatRead32((r5 + 6424));
    r4 = (r30 * 396);
    r7 = (r3 + 108);
    r4_addr_0 = (r4 + r5);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    r4 = r4_addr_0;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r5);
    r6 = (r4 + 108);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 392u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 40));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r8);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 48));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 44), r8);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 48), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 56));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r3 + 52), r8);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r3 + 56), r5);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 60));
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r3 + 60), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 68));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 64));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r3 + 64), r8);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r3 + 68), r5);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 72));
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r3 + 72), r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r4 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r4 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r4 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r4 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r4 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r4 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r3 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r4 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r3 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r4 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r3 + 104), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 108));
    MemoryInline::WriteResolved32(guest_range_3, 108u, (r3 + 108), r5);
    ctr = r0;
}

loc_805920C4:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805920C4;
    }
}

loc_805920D8:
{
    r0 = 16;
    r7 = (r3 + 236);
    r6 = (r4 + 236);
    ctr = r0;
}

loc_805920E8:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805920E8;
    }
}

loc_805920FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 368u, (r4 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(23));
}

loc_80592104:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 364u, (r4 + 368));
    MemoryInline::FlatWriteRam32((r3 + 368), r5);
    MemoryInline::FlatWriteRam32((r3 + 372), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 372u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 376u, (r4 + 380));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 372u, (r4 + 376));
        }
    }
    MemoryInline::FlatWriteRam32((r3 + 376), r5);
    MemoryInline::FlatWriteRam32((r3 + 380), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 380u, (r4 + 384));
    MemoryInline::FlatWriteRamFloat32((r3 + 384), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 384u, (r4 + 388));
    MemoryInline::FlatWriteRamFloat32((r3 + 388), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 388u, (r4 + 392));
    MemoryInline::FlatWriteRamFloat32((r3 + 392), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80592164;
    }
}

loc_8059213C:
{
    r4 = 715849728;
    r0 = (r31 + -23);
    r4 = (r4 + -21845);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r4 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80592158:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80592160;
    }
}

loc_8059215C:
{
    r4 = 0;
}

loc_80592160:
{
    r31 = (r4 + 23);
}

loc_80592164:
{
    r5 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    r4 = (r31 * 396);
    r5 = MemoryInline::FlatRead32((r5 + 6428));
    r0 = 4;
    r7 = 0;
    r6 = (r5 + r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 16), 0, 96u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r6 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r6 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r6 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r6 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r6 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r6 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r6 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r6 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 56), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r6 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r6 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r6 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r6 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r6 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 76), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r6 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 80), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r6 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 84), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r6 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 88), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r6 + 92));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r6 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 96), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r6 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r6 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 104), f0.d);
    r5 = MemoryInline::FlatRead32((r3 + 108));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r6 + 108));
    r4 = (r5 + r4);
    MemoryInline::FlatWriteRam32((r3 + 108), r4);
    ctr = r0;
}

loc_805922E0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r7 = (r7 + 8);
    r4 = (r6 + r0);
    r5 = (r3 + r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 112), 0, 160u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 112), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 240));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r4 + 240));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 240), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 116));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 244));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 132u, (r4 + 244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 244), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r4 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 120), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 248));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 136u, (r4 + 248));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 248), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 124));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r4 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 124), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 252));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 140u, (r4 + 252));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 252), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 128), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 256));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 144u, (r4 + 256));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 256), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 132));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 132));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 132), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 260));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 148u, (r4 + 260));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 260), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 136));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r4 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 136), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 264));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 152u, (r4 + 264));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 264), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 140));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r4 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 140), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 268));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 156u, (r4 + 268));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 268), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805922E0;
    }
}

loc_805923F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80591FA4 func_80591FA4 preserves=true fpr_mask=0x00000000
