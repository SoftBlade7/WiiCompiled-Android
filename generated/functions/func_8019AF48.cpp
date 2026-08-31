#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019AF48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8019B020_loc_0 = 0;
    uint32_t addr_lfsx_8019B058_loc_0 = 0;
    uint32_t addr_lfsx_8019B068_loc_0 = 0;
    uint32_t addr_lfsx_8019B06C_loc_0 = 0;
    uint32_t addr_lfsx_8019B0A4_loc_0 = 0;
    uint32_t addr_lfsx_8019B0AC_loc_0 = 0;
    uint32_t addr_lfsx_8019B0B0_loc_0 = 0;
    uint32_t addr_lfsx_8019B0B8_loc_0 = 0;
    uint32_t addr_lfsx_8019B0BC_loc_0 = 0;
    uint32_t addr_lfsx_8019B0C4_loc_0 = 0;
    uint32_t addr_stfsx_8019B098_loc_0 = 0;
    uint32_t addr_stfsx_8019B0D4_loc_0 = 0;
    uint32_t addr_stfsx_8019B0DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_8019AF48;

loc_8019AF48:
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
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r6 = 0x80250000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    r31 = r3;
    r6 = (r6 + 11384);
    r5 = MemoryInline::FlatRead32(r6);
    r25 = r4;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26336));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019AF94:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019B000;
    }
}

loc_8019AFA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26340));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    f5.d = MemoryInline::FlatReadFloat32((r25 + 36));
    f4.d = MemoryInline::FlatReadFloat32((r25 + 24));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f7.d));
    f3.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f5.d = PpcFmulsInline(f6.d, f7.d);
    f3.d = PpcFmulsInline(f8.d, f4.d);
    f1.d = PpcFmulsInline(f8.d, f2.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f5.d);
    MemoryInline::FlatWriteFloat32(r31, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_8019B0FC;
}

loc_8019B000:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8019B004:
{
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019B010;
    }
}

loc_8019B00C:
{
    r5 = 1;
}

loc_8019B010:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    addr_lfsx_8019B020_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B020_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019B028:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019B030;
    }
}

loc_8019B02C:
{
    r5 = 2;
}

loc_8019B030:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r26 = (r26_rot_1 & -4);
    r3 = (r1 + 20);
    r3_addr_1 = (r3 + r26);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r25 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26340));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3_addr_2 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r29 = (r4 + r0);
    addr_lfsx_8019B058_loc_0 = (r29 + r28);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B058_loc_0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r30 = (r30_rot_1 & -4);
    r27 = (r4 + r0);
    addr_lfsx_8019B068_loc_0 = (r25 + r26);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B068_loc_0);
    addr_lfsx_8019B06C_loc_0 = (r27 + r30);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B06C_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26336));
    r3 = (r1 + 8);
    f1.d = PpcFmulsInline(f2.d, f5.d);
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8019B098:
{
    addr_stfsx_8019B098_loc_0 = (r3 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8019B098_loc_0, f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019B0A4;
    }
}

loc_8019B0A0:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
}

loc_8019B0A4:
{
    addr_lfsx_8019B0A4_loc_0 = (r25 + r28);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0A4_loc_0);
    r3 = (r1 + 8);
    addr_lfsx_8019B0AC_loc_0 = (r29 + r26);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0AC_loc_0);
    addr_lfsx_8019B0B0_loc_0 = (r25 + r30);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0B0_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_lfsx_8019B0B8_loc_0 = (r27 + r26);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0B8_loc_0);
    addr_lfsx_8019B0BC_loc_0 = (r27 + r28);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0BC_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    addr_lfsx_8019B0C4_loc_0 = (r29 + r30);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_8019B0C4_loc_0);
    f1.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    addr_stfsx_8019B0D4_loc_0 = (r3 + r28);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8019B0D4_loc_0, f1.d);
    f3.d = PpcFmulsInline(f5.d, f2.d);
    addr_stfsx_8019B0DC_loc_0 = (r3 + r30);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8019B0DC_loc_0, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 12), f3.d);
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8019B0FC:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x0000002E fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019AF48 func_8019AF48 preserves=true fpr_mask=0x00000000
