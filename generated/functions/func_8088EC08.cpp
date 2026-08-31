#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088EC08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8088ECEC_loc_0 = 0;
    uint32_t addr_lfsx_8088ECF8_loc_0 = 0;
    uint32_t addr_lfsx_8088ED94_loc_0 = 0;
    uint32_t addr_stfsx_8088EC44_loc_0 = 0;
    uint32_t addr_stfsx_8088EC70_loc_0 = 0;
    uint32_t addr_stfsx_8088ED18_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_10 = 0;
    uint32_t r7_addr_11 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8088EC08;

loc_8088EC08:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r7 = 0x808B0000u;
    r6 = 65536;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 11176));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r7 = (r6 + -1);
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    goto loc_8088EC50;
}

loc_8088EC34:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 44));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 262140);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r9 = (r9 + 1);
    addr_stfsx_8088EC44_loc_0 = (r8 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8088EC44_loc_0, f0.d);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 48));
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite16(r6_addr_2, static_cast<uint16_t>(r7));
}

loc_8088EC50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 16));
    r6 = (r9 & 65535);
}

loc_8088EC5C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_8088EC34;
    }
}

loc_8088EC60:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 44));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 32));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 131070);
    addr_stfsx_8088EC70_loc_0 = (r7 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8088EC70_loc_0, f0.d);
    r6 = 65536;
    r0 = (r6 + -1);
    r7 = 0x808B0000u;
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 48));
    r9 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r7 + 11200));
    r4 = 0;
    r6_addr_3 = (r6 + r8);
    MemoryInline::FlatWrite16(r6_addr_3, static_cast<uint16_t>(r9));
    ctr = r0;
}

loc_8088EC98:
{
    r9 = (r4 & 65535);
    r29 = 0;
    r10 = (r9 + 1);
    r6 = 0;
    goto loc_8088ED4C;
}

loc_8088ECAC:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 48));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r7_addr_3 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_3);
}

loc_8088ECBC:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r0))) {
        goto loc_8088ED48;
    }
}

loc_8088ECC0:
{
    r0 = (r6 & 65535);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & 262140);
    r11 = (r0 * 36);
    r28 = 0;
    goto loc_8088ED30;
}

loc_8088ECD4:
{
    r8 = (r11 + r30);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 44));
    r7 = MemoryInline::FlatRead32((r8 + 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 131070);
    f4.d = MemoryInline::FlatReadFloat32((r8 + 20));
    r7_addr_5 = (r7 + r0);
    r8 = MemoryInline::FlatRead16(r7_addr_5);
    addr_lfsx_8088ECEC_loc_0 = (r12 + r31);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8088ECEC_loc_0);
    r7 = (r8 * 36);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    addr_lfsx_8088ECF8_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8088ECF8_loc_0);
    r7 = (r30 + r7);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8088ED14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088ED2C;
    }
}

loc_8088ED18:
{
    addr_stfsx_8088ED18_loc_0 = (r31 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8088ED18_loc_0, f1.d);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 131070);
    r29 = 1;
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 48));
    r7_addr_6 = (r7 + r0);
    MemoryInline::FlatWrite16(r7_addr_6, static_cast<uint16_t>(r10));
}

loc_8088ED2C:
{
    r28 = (r28 + 1);
}

loc_8088ED30:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 20));
    r8 = (r28 & 65535);
    r7 = (r11 + r30);
    r0 = MemoryInline::FlatRead16((r7 + 28));
}

loc_8088ED44:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r0))) {
        goto loc_8088ECD4;
    }
}

loc_8088ED48:
{
    r6 = (r6 + 1);
}

loc_8088ED4C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 16));
    r7 = (r6 & 65535);
}

loc_8088ED58:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_8088ECAC;
    }
}

loc_8088ED5C:
{
}

loc_8088ED60:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8088ED6C;
    }
}

loc_8088ED64:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088EC98;
    }
}

loc_8088ED6C:
{
    r4 = 0x808B0000u;
    r6 = (r5 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 11208));
    r9 = 0;
    r5 = 1127219200;
    goto loc_8088EDD0;
}

loc_8088ED84:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 44));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 262140);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 36));
    r9 = (r9 + 1);
    addr_lfsx_8088ED94_loc_0 = (r4 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8088ED94_loc_0);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r7_addr_10 = (r7 + r8);
    r4 = MemoryInline::FlatRead32(r7_addr_10);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r4 + r0);
    r7_addr_11 = (r7 + r8);
    MemoryInline::FlatWrite32(r7_addr_11, r0);
}

loc_8088EDD0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 16));
    r4 = (r9 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8088EDDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088ED84;
    }
}

loc_8088EDE0:
{
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFB gpr_write=0xF0001FF3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088EC08 func_8088EC08 preserves=true fpr_mask=0x00000000
