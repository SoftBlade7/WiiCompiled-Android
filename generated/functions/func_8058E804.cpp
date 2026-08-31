#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058E804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_rot_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8058E804;

loc_8058E804:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r12 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r12 = (r12 + 7112);
    r4 = (r12 + 16);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r5 = (r12 + 24);
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r12 + 16), 0, 16u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r12 + 16));
            r10 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
            r8 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r12 + 24));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 2));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 6));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 16), r11);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r1 + 18), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 20), r9);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 22), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 8), r7);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 10), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 14), r0);
    }
    r7 = MemoryInline::FlatRead32((r3 + 20));
    r5 = MemoryInline::FlatRead32((r7 + 20));
    r4 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r1 + 16);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r0 = MemoryInline::FlatRead16((r5 + 420));
}

loc_8058E894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058E89C;
    }
}

loc_8058E898:
{
    r6_addr_1 = (r6 + r4);
    r30 = MemoryInline::FlatRead16(r6_addr_1);
}

loc_8058E89C:
{
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 464));
}

loc_8058E8A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058E8B8;
    }
}

loc_8058E8AC:
{
    r6_addr_3 = (r6 + r4);
    r0 = MemoryInline::FlatRead16(r6_addr_3);
    r0 = (r30 + r0);
    r30 = (r0 & 65535);
}

loc_8058E8B8:
{
    r0 = MemoryInline::FlatRead16((r5 + 508));
    r4 = (r1 + 16);
}

loc_8058E8C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058E8D4;
    }
}

loc_8058E8C8:
{
    r6_addr_5 = (r6 + r4);
    r0 = MemoryInline::FlatRead16(r6_addr_5);
    r0 = (r30 + r0);
    r30 = (r0 & 65535);
}

loc_8058E8D4:
{
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058E8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058E8F0;
    }
}

loc_8058E8E4:
{
    r6_addr_7 = (r6 + r4);
    r0 = MemoryInline::FlatRead16(r6_addr_7);
    r0 = (r30 + r0);
    r30 = (r0 & 65535);
}

loc_8058E8F0:
{
    MemoryInline::FlatWrite16((r7 + 14), static_cast<uint16_t>(r30));
    r0 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat64((r12 + 32));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f2.d = MemoryInline::FlatReadFloat32((r12 + 4));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r30));
    f1.d = MemoryInline::FlatReadFloat64((r12 + 40));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 14));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 44), f0.d);
    r4 = MemoryInline::FlatRead16((r5 + 14));
    r0 = (r4 + 1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 48), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 14));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    ctx->lr = 0x8058E960u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 44), r3);
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    ctx->lr = 0x8058E974u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 40), r3);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF0 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058E804 func_8058E804 preserves=true fpr_mask=0x00000000
