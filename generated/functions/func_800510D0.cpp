#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800510D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800510D0;

loc_800510D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
}

loc_800510DC:
{
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80051100;
    }
}

loc_800510EC:
{
}

loc_800510F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80051108;
    }
}

loc_800510F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_800510F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051110;
    }
}

loc_800510FC:
{
    goto loc_80051118;
}

loc_80051100:
{
    r11 = (r3 + 10);
    goto loc_80051120;
}

loc_80051108:
{
    r11 = (r3 + 32);
    goto loc_80051120;
}

loc_80051110:
{
    r11 = (r3 + 47);
    goto loc_80051120;
}

loc_80051118:
{
    r3 = 0;
    goto loc_80051380;
}

loc_80051120:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r11, 0, 15u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80051128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80051134;
    }
}

loc_8005112C:
{
    r3 = 0;
    goto loc_80051380;
}

loc_80051134:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r11 + 2));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r11 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r11 + 7));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r11 + 1));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r10 = (r10_rot_1 & -256);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r11 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_2 & -16777216);
    r0_mdest_1 = (r0 & 16777215);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r11 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r11 + 12));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r9 = (r9_rot_1 & -256);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_2 & -16777216);
    r3_mdest_1 = (r3 & 16777215);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r11 + 13));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r11 + 11));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & -65536);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r11 + 4));
    r0 = (r0 | r10);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r4_mrot_1 = (r4_rot_2 & -16777216);
    r4_mdest_1 = (r4 & 16777215);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & -256);
    r0 = (r0 | r8);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r11 + 9));
    r3 = (r3 | r9);
    r4 = (r4 | r6);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r11 + 14));
    r3 = (r3 | r8);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r6 = (r6_rot_2 & 3);
    f10.d = MemoryInline::FlatReadFloat32((r2 + -29908));
    r4 = (r4 | r7);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r6_mrot_1 = (r6_rot_3 & 12);
    r6_mdest_1 = (r6 & -13);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r6_mrot_2 = (r6_rot_4 & 48);
    r6_mdest_2 = (r6 & -49);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6 = (r6 + -17);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80051218;
    }
}

loc_800511BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29888));
    r7 = r8;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051274;
    }
}

loc_800511C8:
{
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_5 & 536870911);
}

loc_800511CC:
{
    ctr = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80051204;
    }
}

loc_800511D4:
{
    f10.d = PpcFmulsInline(f10.d, f0.d);
    r8 = (r8 + -8);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800511D4;
    }
}

loc_800511FC:
{
    r7 = (r7 & 7);
}

loc_80051200:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80051274;
    }
}

loc_80051204:
{
    ctr = r7;
}

loc_80051208:
{
    f10.d = PpcFmulsInline(f10.d, f0.d);
    r8 = (r8 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80051208;
    }
}

loc_80051214:
{
    goto loc_80051274;
}

loc_80051218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80051274;
    }
}

loc_8005121C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29884));
    r7 = (0 - r8);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80051274;
    }
}

loc_80051228:
{
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r6 = (r6_rot_6 & 536870911);
}

loc_8005122C:
{
    ctr = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80051264;
    }
}

loc_80051234:
{
    f10.d = PpcFmulsInline(f10.d, f0.d);
    r8 = (r8 + 8);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80051234;
    }
}

loc_8005125C:
{
    r7 = (r7 & 7);
}

loc_80051260:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80051274;
    }
}

loc_80051264:
{
    ctr = r7;
}

loc_80051268:
{
    f10.d = PpcFmulsInline(f10.d, f0.d);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80051268;
    }
}

loc_80051274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80051278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005137C;
    }
}

loc_8005127C:
{
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r6 = (r6_rot_8 & -2097152);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29912));
    r8 = (static_cast<int32_t>(r6) >> 21);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & -2097152);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r6 = (r6_rot_9 & -2097152);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r3 = (r3_rot_3 & -2097152);
    r7 = (static_cast<int32_t>(r6) >> 21);
    r8 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    r7 = (r7 ^ -2147483648);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r6 = (r6_rot_10 & -2097152);
    f9.d = MemoryInline::FlatReadFloat64((r2 + -29872));
    r6 = (static_cast<int32_t>(r6) >> 21);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (static_cast<int32_t>(r0) >> 21);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r6 = (r0 ^ -2147483648);
    r3 = (static_cast<int32_t>(r3) >> 21);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_4 & -2097152);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(21) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 21);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r3 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r0 ^ -2147483648);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29908));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -29880));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f7.d = PpcFmulsInline(f10.d, f7.d);
    f6.d = PpcFmulsInline(f10.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f5.d = PpcFmulsInline(f10.d, f5.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r5 + 12), f4.d);
    f3.d = PpcFmulsInline(f10.d, f3.d);
    f2.d = PpcFmulsInline(f10.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r5 + 28), f4.d);
    f1.d = PpcFmulsInline(f10.d, f1.d);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r5 + 32), f4.d);
    f6.d = PpcFmulsInline(f8.d, f6.d);
    f5.d = PpcFmulsInline(f8.d, f5.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r5 + 36), f4.d);
    f3.d = PpcFmulsInline(f8.d, f3.d);
    f2.d = PpcFmulsInline(f8.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r5, f7.d);
    f1.d = PpcFmulsInline(f8.d, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 4), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r5 + 8), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r5 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r5 + 20), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r5 + 24), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r5 + 44), f4.d);
    }
}

loc_8005137C:
{
    r3 = 1;
}

loc_80051380:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FDB gpr_return=0x00000018 fpr_read=0x000007FF fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800510D0 func_800510D0 preserves=true fpr_mask=0x00000000
