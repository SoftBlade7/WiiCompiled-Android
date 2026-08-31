#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801284B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80128608_loc_0 = 0;
    uint32_t addr_lfsx_80128610_loc_0 = 0;
    uint32_t addr_lfsx_8012861C_loc_0 = 0;
    uint32_t addr_lfsx_8012864C_loc_0 = 0;
    uint32_t addr_lfsx_8012866C_loc_0 = 0;
    uint32_t addr_lfsx_80128694_loc_0 = 0;
    uint32_t addr_lfsx_801286B8_loc_0 = 0;
    uint32_t addr_lfsx_801286D8_loc_0 = 0;
    uint32_t addr_lfsx_801286FC_loc_0 = 0;
    uint32_t addr_lfsx_80128734_loc_0 = 0;
    uint32_t addr_stfsx_80128624_loc_0 = 0;
    uint32_t addr_stfsx_80128650_loc_0 = 0;
    uint32_t addr_stfsx_80128680_loc_0 = 0;
    uint32_t addr_stfsx_801286A4_loc_0 = 0;
    uint32_t addr_stfsx_801286C8_loc_0 = 0;
    uint32_t addr_stfsx_801286E4_loc_0 = 0;
    uint32_t addr_stfsx_8012870C_loc_0 = 0;
    uint32_t addr_stfsx_80128740_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_10 = 0;
    uint32_t r27_rot_11 = 0;
    uint32_t r27_rot_12 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r27_rot_7 = 0;
    uint32_t r27_rot_8 = 0;
    uint32_t r27_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_801284B4;

loc_801284B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32((r4 + 268));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801284D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801284E0;
    }
}

loc_801284D4:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 268), r0);
    goto loc_801289B8;
}

loc_801284E0:
{
    r7 = MemoryInline::FlatRead32((r4 + 312));
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801284F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8012851C;
    }
}

loc_80128504:
{
    r5 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8012851C:
{
    r7 = MemoryInline::FlatRead32((r4 + 316));
}

loc_80128524:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80128534;
    }
}

loc_80128528:
{
    r3 = MemoryInline::FlatRead32(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r6 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80128534:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27336));
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 264));
    r29 = 0;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -27332));
    r0 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 308));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27328));
    r30 = 3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 300));
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 248));
    f6.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -27320));
}

loc_80128570:
{
    r9 = r4;
    r10 = r4;
    r11 = r4;
    r7 = (r1 + 8);
    r8 = (r1 + 44);
    r12 = (r1 + 20);
    ctr = r30;
}

loc_8012858C:
{
    r26 = MemoryInline::FlatRead32((r4 + 312));
}

loc_80128594:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_801285CC;
    }
}

loc_80128598:
{
    r27 = MemoryInline::FlatRead32(r7);
    r28 = MemoryInline::FlatRead32(r8);
    r26 = MemoryInline::FlatRead32(r27);
    r27 = (r27 + 4);
    r28 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r26 = (r28 + r26);
    r26 = (r26 ^ -2147483648);
    MemoryInline::FlatWrite32(r7, r27);
    MemoryInline::FlatWriteRam32((r1 + 60), r26);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    goto loc_801285E8;
}

loc_801285CC:
{
    r26 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r26 = MemoryInline::FlatRead32(r26);
    r26 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r26);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_801285E8:
{
    r28 = MemoryInline::FlatRead32((r4 + 12));
    r27 = MemoryInline::FlatRead32((r4 + 16));
    r26 = MemoryInline::FlatRead32((r4 + 20));
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r28 = (r28_rot_3 & -4);
    r25 = MemoryInline::FlatRead32(r9);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_3 & -4);
    f9.d = MemoryInline::FlatReadFloat32((r4 + 32));
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_3 & -4);
    addr_lfsx_80128608_loc_0 = (r25 + r28);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_80128608_loc_0);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 36));
    addr_lfsx_80128610_loc_0 = (r25 + r27);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80128610_loc_0);
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f10.d = MemoryInline::FlatReadFloat32((r4 + 40));
    addr_lfsx_8012861C_loc_0 = (r25 + r26);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012861C_loc_0);
    f2.d = PpcFmulsInline(f7.d, f2.d);
    addr_stfsx_80128624_loc_0 = (r25 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80128624_loc_0, f11.d);
    f7.d = PpcFmulsInline(f10.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    r27 = MemoryInline::FlatRead32((r4 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80128638:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80128658;
    }
}

loc_80128640:
{
    r27 = MemoryInline::FlatRead32((r4 + 56));
    r28 = MemoryInline::FlatRead32((r9 + 44));
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_4 & -4);
    addr_lfsx_8012864C_loc_0 = (r28 + r27);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012864C_loc_0);
    addr_stfsx_80128650_loc_0 = (r28 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80128650_loc_0, f11.d);
    goto loc_8012865C;
}

loc_80128658:
{
    f9.d = f11.d;
}

loc_8012865C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 104), 0, 80u, true, false);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r4 + 104));
    r25 = MemoryInline::FlatRead32((r10 + 68));
    r27_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_6 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 140));
    addr_lfsx_8012866C_loc_0 = (r25 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012866C_loc_0);
    f10.d = MemoryInline::FlatReadFloat32((r2 + -27340));
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_80128680_loc_0 = (r25 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80128680_loc_0, f7.d);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 108));
    r26 = MemoryInline::FlatRead32((r10 + 72));
    r27_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_7 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 144));
    addr_lfsx_80128694_loc_0 = (r26 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_80128694_loc_0);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_801286A4_loc_0 = (r26 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801286A4_loc_0, f7.d);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 112));
    r28 = MemoryInline::FlatRead32((r10 + 76));
    r27_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_8 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r4 + 148));
    addr_lfsx_801286B8_loc_0 = (r28 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_801286B8_loc_0);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_801286C8_loc_0 = (r28 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801286C8_loc_0, f7.d);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r4 + 176));
    r25 = MemoryInline::FlatRead32((r11 + 152));
    r27_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_9 & -4);
    addr_lfsx_801286D8_loc_0 = (r25 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_801286D8_loc_0);
    f7.d = PpcFmulsInline(f8.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    addr_stfsx_801286E4_loc_0 = (r25 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801286E4_loc_0, f7.d);
    f7.d = PpcFmulsInline(f7.d, f3.d);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r4 + 180));
    r26 = MemoryInline::FlatRead32((r11 + 156));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    r27_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_10 & -4);
    addr_lfsx_801286FC_loc_0 = (r26 + r27);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_801286FC_loc_0);
    f7.d = PpcFmulsInline(f9.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f8.d = PpcFmulsInline(f7.d, f3.d);
    addr_stfsx_8012870C_loc_0 = (r26 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012870C_loc_0, f7.d);
    f7.d = MemoryInline::FlatReadFloat32((r9 + 252));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f7.d = PpcFmulsInline(f1.d, f7.d);
    f8.d = PpcFmulsInline(f4.d, f8.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    MemoryInline::FlatWriteFloat32((r9 + 252), f9.d);
    r27 = MemoryInline::FlatRead32((r9 + 212));
    r28 = MemoryInline::FlatRead32((r9 + 200));
    r27_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_11 & -4);
    addr_lfsx_80128734_loc_0 = (r28 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_80128734_loc_0);
    f7.d = PpcFmulsInline(f8.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_80128740_loc_0 = (r28 + r27);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80128740_loc_0, f7.d);
    f7.d = PpcFmulsInline(f7.d, f3.d);
    r27 = MemoryInline::FlatRead32((r9 + 212));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    r27 = (r27 + 1);
    MemoryInline::FlatWrite32((r9 + 212), r27);
    r28 = MemoryInline::FlatRead32((r9 + 224));
    MemoryInline::FlatWriteFloat32(r12, f7.d);
}

loc_80128764:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r28))) {
        goto loc_8012876C;
    }
}

loc_80128768:
{
    MemoryInline::FlatWrite32((r9 + 212), r29);
}

loc_8012876C:
{
    f7.d = MemoryInline::FlatReadFloat32(r12);
    r7 = (r7 + 4);
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    f7.d = PpcFmulsInline(f7.d, f5.d);
    r10 = (r10 + 12);
    r11 = (r11 + 8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    MemoryInline::FlatWriteFloat32(r12, f2.d);
    r12 = (r12 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012858C;
    }
}

loc_80128798:
{
    f12.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f11.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    r12 = MemoryInline::FlatRead32((r1 + 44));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f11.d));
    r8 = MemoryInline::FlatRead32((r1 + 52));
    r11 = (r12 + 4);
    r10 = MemoryInline::FlatRead32((r1 + 48));
    f9.d = PpcFmulsInline(f2.d, f6.d);
    r7 = (r8 + 4);
    f8.d = PpcFmulsInline(f7.d, f6.d);
    r9 = (r10 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 320));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f12.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r11);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f8.d));
    f7.d = PpcFmulsInline(f13.d, f6.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r7);
    f2.d = PpcFmulsInline(f9.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f9.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f7.d));
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f7.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r11 = fctiwzword0;
    MemoryInline::FlatWriteRam32((r1 + 48), r9);
    MemoryInline::FlatWrite32(r12, r11);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 320));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    r7 = fctiwzword1;
    MemoryInline::FlatWrite32(r10, r7);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 320));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r7 = fctiwzword2;
    MemoryInline::FlatWrite32(r8, r7);
    r7 = MemoryInline::FlatRead32((r4 + 316));
}

loc_80128848:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801288A0;
    }
}

loc_8012884C:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    r7 = fctiwzword3;
    MemoryInline::FlatWrite32(r3, r7);
    r3 = (r3 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword4 = PPC_FprLowWordInline(f2.d);
    r7 = fctiwzword4;
    MemoryInline::FlatWrite32(r5, r7);
    r5 = (r5 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 324));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword5 = PPC_FprLowWordInline(f2.d);
    r7 = fctiwzword5;
    MemoryInline::FlatWrite32(r6, r7);
    r6 = (r6 + 4);
}

loc_801288A0:
{
    r7 = MemoryInline::FlatRead32((r4 + 12));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r8);
    r7 = MemoryInline::FlatRead32((r4 + 24));
}

loc_801288B4:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_801288BC;
    }
}

loc_801288B8:
{
    MemoryInline::FlatWrite32((r4 + 12), r29);
}

loc_801288BC:
{
    r7 = MemoryInline::FlatRead32((r4 + 16));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 16), r8);
    r7 = MemoryInline::FlatRead32((r4 + 24));
}

loc_801288D0:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_801288D8;
    }
}

loc_801288D4:
{
    MemoryInline::FlatWrite32((r4 + 16), r29);
}

loc_801288D8:
{
    r7 = MemoryInline::FlatRead32((r4 + 20));
    r9 = (r4 + 8);
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 20), r8);
    r7 = MemoryInline::FlatRead32((r4 + 24));
}

loc_801288F0:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_801288F8;
    }
}

loc_801288F4:
{
    MemoryInline::FlatWrite32((r9 + 12), r29);
}

loc_801288F8:
{
    r8 = MemoryInline::FlatRead32((r4 + 60));
}

loc_80128900:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8012891C;
    }
}

loc_80128904:
{
    r7 = MemoryInline::FlatRead32((r4 + 56));
    r7 = (r7 + 1);
}

loc_80128910:
{
    MemoryInline::FlatWrite32((r4 + 56), r7);
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r8))) {
        goto loc_8012891C;
    }
}

loc_80128918:
{
    MemoryInline::FlatWrite32((r4 + 56), r29);
}

loc_8012891C:
{
    r7 = MemoryInline::FlatRead32((r4 + 104));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 104), r8);
    r7 = MemoryInline::FlatRead32((r4 + 116));
}

loc_80128930:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_80128938;
    }
}

loc_80128934:
{
    MemoryInline::FlatWrite32((r4 + 104), r29);
}

loc_80128938:
{
    r7 = MemoryInline::FlatRead32((r4 + 108));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 108), r8);
    r7 = MemoryInline::FlatRead32((r4 + 120));
}

loc_8012894C:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_80128954;
    }
}

loc_80128950:
{
    MemoryInline::FlatWrite32((r4 + 108), r29);
}

loc_80128954:
{
    r7 = MemoryInline::FlatRead32((r4 + 112));
    r9 = (r4 + 8);
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 112), r8);
    r7 = MemoryInline::FlatRead32((r4 + 124));
}

loc_8012896C:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_80128974;
    }
}

loc_80128970:
{
    MemoryInline::FlatWrite32((r9 + 104), r29);
}

loc_80128974:
{
    r7 = MemoryInline::FlatRead32((r4 + 176));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 176), r8);
    r7 = MemoryInline::FlatRead32((r4 + 184));
}

loc_80128988:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_80128990;
    }
}

loc_8012898C:
{
    MemoryInline::FlatWrite32((r4 + 176), r29);
}

loc_80128990:
{
    r7 = MemoryInline::FlatRead32((r4 + 180));
    r8 = (r7 + 1);
    MemoryInline::FlatWrite32((r4 + 180), r8);
    r7 = MemoryInline::FlatRead32((r4 + 188));
}

loc_801289A4:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_801289AC;
    }
}

loc_801289A8:
{
    MemoryInline::FlatWrite32((r4 + 180), r29);
}

loc_801289AC:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(96));
}

loc_801289B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80128570;
    }
}

loc_801289B8:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001FEB gpr_return=0x00000008 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801284B4 func_801284B4 preserves=true fpr_mask=0x00000000
