#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807859B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_80785BA4_loc_0 = 0;
    uint32_t addr_lfsux_80785D54_loc_0 = 0;
    uint32_t addr_lfsx_80785BA0_loc_0 = 0;
    uint32_t addr_lfsx_80785D50_loc_0 = 0;
    uint32_t addr_stfsx_80785A50_loc_0 = 0;
    uint32_t addr_stfsx_80785A68_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807859B0;

loc_807859B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18412));
    r5 = 256;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = 0;
    r7 = 0;
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1064), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 1064), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 1068), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 1072), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 1076), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 1080), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 1084), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 1100), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 1104), r0);
    }
    goto loc_80785A7C;
}

loc_807859F4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 24));
    r5 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 & 1024);
}

loc_80785A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80785A78;
    }
}

loc_80785A08:
{
    r0 = (r4 & 2304);
}

loc_80785A0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80785A18;
    }
}

loc_80785A10:
{
    r7 = (r7 + 1);
    goto loc_80785A78;
}

loc_80785A18:
{
    r8 = MemoryInline::FlatRead32(r5);
    r7 = (r7 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    addr_stfsx_80785A50_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80785A50_loc_0, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    addr_stfsx_80785A68_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80785A68_loc_0, f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & -2049);
    MemoryInline::FlatWrite32((r5 + 12), r0);
}

loc_80785A78:
{
    r6 = (r6 + 32);
}

loc_80785A7C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 1044u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r3 + 1056));
}

loc_80785A84:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_807859F4;
    }
}

loc_80785A88:
{
    r5 = 1;
    goto loc_80785BC4;
}

loc_80785A90:
{
    r6 = r5;
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    goto loc_80785B90;
}

loc_80785A9C:
{
    r11 = MemoryInline::FlatRead8((r7 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r7);
    r10 = MemoryInline::FlatRead8((r7 + 5));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    r9 = MemoryInline::FlatRead8((r8 + 4));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r9));
    r9 = MemoryInline::FlatRead8((r8 + 5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32(r8, f1.d);
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r10));
    r9 = MemoryInline::FlatRead8((r7 + 4));
    r12 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 20));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_3 & -8);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r10));
    r31 = (r12 + r9);
    r12 = (r12 + r0);
    r9 = MemoryInline::FlatRead8((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r0 = (r9 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r9 = MemoryInline::FlatRead8((r12 + 4));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r11));
    r0 = (r9 + -1);
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 5));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 24));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_10 & -32);
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r10 + 20));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = (r9 + 1);
    MemoryInline::FlatWrite16((r10 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r12 + 5));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 24));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_11 & -32);
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r10 + 20));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = (r9 + -1);
    MemoryInline::FlatWrite16((r10 + 20), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead8((r7 + 5));
    r0 = MemoryInline::FlatRead8((r8 + 4));
}

loc_80785B4C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r0))) {
        goto loc_80785B74;
    }
}

loc_80785B50:
{
    r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 20));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r9 = (r9_rot_4 & -8);
}

loc_80785B58:
{
    r9 = (r9 + 8);
    r12 = (r12 + 1);
    r10 = (r11 + r9);
    r0 = MemoryInline::FlatRead8((r10 + 4));
}

loc_80785B6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r6))) {
        goto loc_80785B58;
    }
}

loc_80785B70:
{
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r12));
}

loc_80785B74:
{
    r7 = MemoryInline::FlatRead8((r7 + 4));
    r0 = MemoryInline::FlatRead8((r8 + 5));
}

loc_80785B80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_80785B88;
    }
}

loc_80785B84:
{
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r7));
}

loc_80785B88:
{
    r4 = (r4 + -8);
    r6 = (r6 + -1);
}

loc_80785B90:
{
    r0 = (r6 + -1);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r8 = (r7 + r0);
    addr_lfsx_80785BA0_loc_0 = (r7 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80785BA0_loc_0);
    addr_lfsux_80785BA4_loc_0 = (r7 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80785BA4_loc_0);
    r7 = addr_lfsux_80785BA4_loc_0;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80785BAC:
{
    r0 = cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1);
}

loc_80785BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80785BC0;
    }
}

loc_80785BB8:
{
}

loc_80785BBC:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1))) {
        goto loc_80785A9C;
    }
}

loc_80785BC0:
{
    r5 = (r5 + 1);
}

loc_80785BC4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r3 + 1056));
}

loc_80785BCC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80785A90;
    }
}

loc_80785BD0:
{
    r5 = 1;
    goto loc_80785D74;
}

loc_80785BD8:
{
    r6 = r5;
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_4 & -8);
    goto loc_80785D40;
}

loc_80785BE4:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    r12 = MemoryInline::FlatRead8((r7 + 4));
    r11 = MemoryInline::FlatRead8((r7 + 5));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    r0 = MemoryInline::FlatRead8((r8 + 4));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32(r8, f1.d);
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r11));
    r0 = MemoryInline::FlatRead8((r7 + 4));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r12));
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead8((r10 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r0 = (r9 + 1);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 4));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r11));
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead8((r10 + 4));
    r0 = (r9 + -1);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 5));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_18 & -32);
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r10 + 22));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = (r9 + 1);
    MemoryInline::FlatWrite16((r10 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 5));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_19 & -32);
    r10 = (r9 + r0);
    r9 = MemoryInline::FlatRead16((r10 + 22));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = (r9 + -1);
    MemoryInline::FlatWrite16((r10 + 22), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead8((r8 + 4));
    r31 = MemoryInline::FlatRead8((r7 + 4));
}

loc_80785C9C:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r12))) {
        goto loc_80785CF0;
    }
}

loc_80785CA0:
{
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r12 = (r12_rot_3 & 2040);
    r10 = (r6 + -1);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    goto loc_80785CCC;
}

loc_80785CB0:
{
    r11 = (r11 + r7);
    r12 = (r12 + -8);
    r9 = MemoryInline::FlatRead8((r11 + 5));
    r31 = (r31 + -1);
    r7 = (r7 + -8);
    r0 = (r9 + 1);
    MemoryInline::FlatWrite8((r11 + 5), static_cast<uint8_t>(r0));
}

loc_80785CCC:
{
    r0 = MemoryInline::FlatRead8((r8 + 4));
}

loc_80785CD4:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_80785D38;
    }
}

loc_80785CD8:
{
    r11 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r9 = (r11 + r12);
    r0 = MemoryInline::FlatRead8((r9 + 5));
}

loc_80785CE8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(r0))) {
        goto loc_80785CB0;
    }
}

loc_80785CEC:
{
    goto loc_80785D38;
}

loc_80785CF0:
{
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r11 = (r11_rot_3 & 2040);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    goto loc_80785D18;
}

loc_80785CFC:
{
    r10 = (r10 + r8);
    r11 = (r11 + -8);
    r9 = MemoryInline::FlatRead8((r10 + 5));
    r12 = (r12 + -1);
    r8 = (r8 + -8);
    r0 = (r9 + -1);
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r0));
}

loc_80785D18:
{
    r0 = MemoryInline::FlatRead8((r7 + 4));
}

loc_80785D20:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(r0))) {
        goto loc_80785D38;
    }
}

loc_80785D24:
{
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    r9 = (r10 + r11);
    r0 = MemoryInline::FlatRead8((r9 + 5));
}

loc_80785D34:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_80785CFC;
    }
}

loc_80785D38:
{
    r4 = (r4 + -8);
    r6 = (r6 + -1);
}

loc_80785D40:
{
    r0 = (r6 + -1);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 20));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r8 = (r7 + r0);
    addr_lfsx_80785D50_loc_0 = (r7 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80785D50_loc_0);
    addr_lfsux_80785D54_loc_0 = (r7 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsux_80785D54_loc_0);
    r7 = addr_lfsux_80785D54_loc_0;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80785D5C:
{
    r0 = cr;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & 1);
}

loc_80785D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80785D70;
    }
}

loc_80785D68:
{
}

loc_80785D6C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1))) {
        goto loc_80785BE4;
    }
}

loc_80785D70:
{
    r5 = (r5 + 1);
}

loc_80785D74:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r3 + 1056));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80785D7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80785BD8;
    }
}

loc_80785D80:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r1 = (r1 + 32);
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FF3 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807859B0 func_807859B0 preserves=true fpr_mask=0x00000000
