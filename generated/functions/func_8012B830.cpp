#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8012B9A8_loc_0 = 0;
    uint32_t addr_lfsx_8012B9C8_loc_0 = 0;
    uint32_t addr_lfsx_8012B9E4_loc_0 = 0;
    uint32_t addr_lfsx_8012BA00_loc_0 = 0;
    uint32_t addr_lfsx_8012BA18_loc_0 = 0;
    uint32_t addr_lfsx_8012BA48_loc_0 = 0;
    uint32_t addr_stfsx_8012B9B4_loc_0 = 0;
    uint32_t addr_stfsx_8012B9CC_loc_0 = 0;
    uint32_t addr_stfsx_8012B9F8_loc_0 = 0;
    uint32_t addr_stfsx_8012BA10_loc_0 = 0;
    uint32_t addr_stfsx_8012BA28_loc_0 = 0;
    uint32_t addr_stfsx_8012BA58_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
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
    uint32_t r24 = ctx->gpr[24];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012B830;

loc_8012B830:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead32((r4 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012B84C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012B85C;
    }
}

loc_8012B850:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 176), r0);
    goto loc_8012BB84;
}

loc_8012B85C:
{
    r7 = MemoryInline::FlatRead32((r4 + 216));
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8012B86C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8012B898;
    }
}

loc_8012B880:
{
    r5 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_8012B898:
{
    r6 = MemoryInline::FlatRead32((r4 + 220));
}

loc_8012B8A0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012B8BC;
    }
}

loc_8012B8A4:
{
    r5 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8012B8BC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27160));
    r28 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 172));
    r3 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -27156));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 208));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 212));
    r27 = 3;
    f6.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 100));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 104));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 156));
    f11.d = MemoryInline::FlatReadFloat64((r2 + -27152));
}

loc_8012B900:
{
    r10 = MemoryInline::FlatRead32((r4 + 12));
    r7 = r4;
    r11 = MemoryInline::FlatRead32((r4 + 40));
    r8 = r4;
    r12 = MemoryInline::FlatRead32((r4 + 76));
    r5 = (r1 + 20);
    r26 = MemoryInline::FlatRead32((r4 + 80));
    r6 = (r1 + 32);
    r25 = MemoryInline::FlatRead32((r4 + 132));
    r9 = (r1 + 8);
    r24 = MemoryInline::FlatRead32((r4 + 136));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & -4);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r11 = (r11_rot_2 & -4);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & -4);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r31 = (r31_rot_2 & -4);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & -4);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r29 = (r29_rot_2 & -4);
    ctr = r27;
}

loc_8012B948:
{
    r24 = MemoryInline::FlatRead32((r4 + 216));
}

loc_8012B950:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8012B988;
    }
}

loc_8012B954:
{
    r25 = MemoryInline::FlatRead32(r5);
    r26 = MemoryInline::FlatRead32(r6);
    r24 = MemoryInline::FlatRead32(r25);
    r25 = (r25 + 4);
    r26 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r24 = (r26 + r24);
    r24 = (r24 ^ -2147483648);
    MemoryInline::FlatWrite32(r5, r25);
    MemoryInline::FlatWriteRam32((r1 + 52), r24);
    f8.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f11.d));
    goto loc_8012B9A4;
}

loc_8012B988:
{
    r24 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r24 = MemoryInline::FlatRead32(r24);
    r24 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r24);
    f8.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f11.d));
}

loc_8012B9A4:
{
    r24 = MemoryInline::FlatRead32(r7);
    addr_lfsx_8012B9A8_loc_0 = (r10 + r24);
    f10.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012B9A8_loc_0);
    f8.d = PpcFmulsInline(f10.d, f1.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    addr_stfsx_8012B9B4_loc_0 = (r10 + r24);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012B9B4_loc_0, f8.d);
    r24 = MemoryInline::FlatRead32((r4 + 44));
}

loc_8012B9C0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8012B9D4;
    }
}

loc_8012B9C4:
{
    r24 = MemoryInline::FlatRead32((r7 + 28));
    addr_lfsx_8012B9C8_loc_0 = (r11 + r24);
    f12.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012B9C8_loc_0);
    addr_stfsx_8012B9CC_loc_0 = (r11 + r24);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012B9CC_loc_0, f9.d);
    goto loc_8012B9D8;
}

loc_8012B9D4:
{
    f12.d = f9.d;
}

loc_8012B9D8:
{
    r24 = MemoryInline::FlatRead32((r8 + 52));
    f10.d = PpcFmulsInline(f10.d, f6.d);
    r26 = MemoryInline::FlatRead32(r6);
    addr_lfsx_8012B9E4_loc_0 = (r12 + r24);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012B9E4_loc_0);
    r25 = (r26 + 4);
    f8.d = PpcFmulsInline(f9.d, f2.d);
    MemoryInline::FlatWrite32(r6, r25);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f8.d));
    addr_stfsx_8012B9F8_loc_0 = (r12 + r24);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012B9F8_loc_0, f8.d);
    r25 = MemoryInline::FlatRead32((r8 + 56));
    addr_lfsx_8012BA00_loc_0 = (r31 + r25);
    f13.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012BA00_loc_0);
    f8.d = PpcFmulsInline(f13.d, f3.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f13.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f8.d));
    addr_stfsx_8012BA10_loc_0 = (r31 + r25);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012BA10_loc_0, f8.d);
    r24 = MemoryInline::FlatRead32((r8 + 108));
    addr_lfsx_8012BA18_loc_0 = (r30 + r24);
    f12.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012BA18_loc_0);
    f8.d = PpcFmulsInline(f12.d, f4.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    f9.d = PpcFmulsInline(f8.d, f4.d);
    addr_stfsx_8012BA28_loc_0 = (r30 + r24);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012BA28_loc_0, f8.d);
    f8.d = MemoryInline::FlatReadFloat32((r7 + 160));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f9.d));
    f8.d = PpcFmulsInline(f0.d, f8.d);
    f9.d = PpcFmulsInline(f5.d, f9.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    MemoryInline::FlatWriteFloat32((r7 + 160), f9.d);
    r25 = MemoryInline::FlatRead32((r8 + 112));
    addr_lfsx_8012BA48_loc_0 = (r29 + r25);
    f12.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012BA48_loc_0);
    f8.d = PpcFmulsInline(f12.d, f4.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    f9.d = PpcFmulsInline(f8.d, f4.d);
    addr_stfsx_8012BA58_loc_0 = (r29 + r25);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012BA58_loc_0, f8.d);
    f8.d = MemoryInline::FlatReadFloat32((r4 + 224));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f9.d));
    f9.d = PpcFmulsInline(f9.d, f7.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f8.d = PPC_Fctiwz(f8.d);
    fctiwzword0 = PPC_FprLowWordInline(f8.d);
    r25 = fctiwzword0;
    MemoryInline::FlatWrite32(r26, r25);
    r25 = MemoryInline::FlatRead32((r4 + 220));
}

loc_8012BA88:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8012BAB0;
    }
}

loc_8012BA8C:
{
    f8.d = MemoryInline::FlatReadFloat32((r4 + 228));
    r25 = MemoryInline::FlatRead32(r9);
    f8.d = PpcFmulsInline(f9.d, f8.d);
    r26 = (r25 + 4);
    MemoryInline::FlatWrite32(r9, r26);
    f8.d = PPC_Fctiwz(f8.d);
    fctiwzword1 = PPC_FprLowWordInline(f8.d);
    r26 = fctiwzword1;
    MemoryInline::FlatWrite32(r25, r26);
}

loc_8012BAB0:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r8 = (r8 + 8);
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012B948;
    }
}

loc_8012BAC8:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r6 = (r6 + 1);
}

loc_8012BAD8:
{
    MemoryInline::FlatWrite32((r4 + 12), r6);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_8012BAE4;
    }
}

loc_8012BAE0:
{
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8012BAE4:
{
    r6 = MemoryInline::FlatRead32((r4 + 44));
}

loc_8012BAEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012BB08;
    }
}

loc_8012BAF0:
{
    r5 = MemoryInline::FlatRead32((r4 + 40));
    r5 = (r5 + 1);
}

loc_8012BAFC:
{
    MemoryInline::FlatWrite32((r4 + 40), r5);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r6))) {
        goto loc_8012BB08;
    }
}

loc_8012BB04:
{
    MemoryInline::FlatWrite32((r4 + 40), r0);
}

loc_8012BB08:
{
    r6 = MemoryInline::FlatRead32((r4 + 76));
    r5 = MemoryInline::FlatRead32((r4 + 84));
    r6 = (r6 + 1);
}

loc_8012BB18:
{
    MemoryInline::FlatWrite32((r4 + 76), r6);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_8012BB24;
    }
}

loc_8012BB20:
{
    MemoryInline::FlatWrite32((r4 + 76), r0);
}

loc_8012BB24:
{
    r6 = MemoryInline::FlatRead32((r4 + 80));
    r5 = MemoryInline::FlatRead32((r4 + 88));
    r6 = (r6 + 1);
}

loc_8012BB34:
{
    MemoryInline::FlatWrite32((r4 + 80), r6);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_8012BB40;
    }
}

loc_8012BB3C:
{
    MemoryInline::FlatWrite32((r4 + 80), r0);
}

loc_8012BB40:
{
    r6 = MemoryInline::FlatRead32((r4 + 132));
    r5 = MemoryInline::FlatRead32((r4 + 140));
    r6 = (r6 + 1);
}

loc_8012BB50:
{
    MemoryInline::FlatWrite32((r4 + 132), r6);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_8012BB5C;
    }
}

loc_8012BB58:
{
    MemoryInline::FlatWrite32((r4 + 132), r0);
}

loc_8012BB5C:
{
    r6 = MemoryInline::FlatRead32((r4 + 136));
    r5 = MemoryInline::FlatRead32((r4 + 144));
    r6 = (r6 + 1);
}

loc_8012BB6C:
{
    MemoryInline::FlatWrite32((r4 + 136), r6);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_8012BB78;
    }
}

loc_8012BB74:
{
    MemoryInline::FlatWrite32((r4 + 136), r0);
}

loc_8012BB78:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(96));
}

loc_8012BB80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B900;
    }
}

loc_8012BB84:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[24] = r24;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF001FFF gpr_write=0xFF001FEB gpr_return=0x00000008 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B830 func_8012B830 preserves=true fpr_mask=0x00000000
