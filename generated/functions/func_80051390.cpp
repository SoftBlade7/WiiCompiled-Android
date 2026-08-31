#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051390(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mdest_1 = 0;
    uint32_t r11_mdest_2 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_mrot_1 = 0;
    uint32_t r11_mrot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80051390;

loc_80051390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
}

loc_8005139C:
{
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800513C0;
    }
}

loc_800513AC:
{
}

loc_800513B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800513C8;
    }
}

loc_800513B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_800513B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800513D0;
    }
}

loc_800513BC:
{
    goto loc_800513D8;
}

loc_800513C0:
{
    r12 = (r3 + 10);
    goto loc_800513E0;
}

loc_800513C8:
{
    r12 = (r3 + 32);
    goto loc_800513E0;
}

loc_800513D0:
{
    r12 = (r3 + 47);
    goto loc_800513E0;
}

loc_800513D8:
{
    r3 = 0;
    goto loc_80051570;
}

loc_800513E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r12, 0, 15u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800513E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800513F4;
    }
}

loc_800513EC:
{
    r3 = 0;
    goto loc_80051570;
}

loc_800513F4:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r12 + 2));
}

loc_800513FC:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r12 + 3));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r10 = (r10_rot_1 & -65536);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r12 + 1));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r9 = (r9_rot_1 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r12 + 8));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r10_mrot_1 = (r10_rot_2 & -16777216);
    r10_mdest_1 = (r10 & 16777215);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r12 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r12 + 12));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r8 = (r8_rot_1 & -256);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r12 + 6));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r12 + 13));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r11 = (r11_rot_1 & -65536);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0_mrot_1 = (r0_rot_2 & -16777216);
    r0_mdest_1 = (r0 & 16777215);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r12 + 11));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r12 + 4));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r11_mrot_1 = (r11_rot_2 & -16777216);
    r11_mdest_1 = (r11 & 16777215);
    r11 = (r11_mdest_1 | r11_mrot_1);
    r10 = (r10 | r9);
    r10 = (r10 | r3);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r12 + 9));
    r0 = (r0 | r8);
    r11 = (r11 | r4);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r12 + 14));
    r0 = (r0 | r7);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(10));
    r4 = (r4_rot_2 & 3);
    r11 = (r11 | r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4_mrot_1 = (r4_rot_3 & 12);
    r4_mdest_1 = (r4 & -13);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r4_mrot_2 = (r4_rot_4 & 48);
    r4_mdest_2 = (r4 & -49);
    r4 = (r4_mdest_2 | r4_mrot_2);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8005147C;
    }
}

loc_80051474:
{
    r3 = (r4 + -17);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r3));
}

loc_8005147C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80051480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005156C;
    }
}

loc_80051484:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(21));
    r3 = (r3_rot_1 & -2097152);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29912));
    r6 = (static_cast<int32_t>(r3) >> 21);
    f9.d = MemoryInline::FlatReadFloat64((r2 + -29872));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r3 = (r3_rot_2 & -2097152);
    f8.d = MemoryInline::FlatReadFloat32((r2 + -29880));
    r4 = (static_cast<int32_t>(r3) >> 21);
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r6 = (r4 ^ -2147483648);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(21));
    r3 = (r3_rot_3 & -2097152);
    r4 = (static_cast<int32_t>(r3) >> 21);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(10));
    r3 = (r3_rot_4 & -2097152);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = (static_cast<int32_t>(r3) >> 21);
    r4 = (r3 ^ -2147483648);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r3 = (r3_rot_5 & -2097152);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r3 = (static_cast<int32_t>(r3) >> 21);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & -2097152);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(21) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 21);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f6.d = PpcFmulsInline(f8.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29908));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = PpcFmulsInline(f8.d, f5.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r5 + 12), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f9.d));
    f3.d = PpcFmulsInline(f8.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r5, f7.d);
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f1.d = PpcFmulsInline(f8.d, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 4), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r5 + 8), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r5 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r5 + 20), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r5 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r5 + 28), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r5 + 32), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r5 + 36), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r5 + 44), f4.d);
    }
}

loc_8005156C:
{
    r3 = 1;
}

loc_80051570:
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
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FDB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80051390 func_80051390 preserves=true fpr_mask=0x00000000
