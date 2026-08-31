#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D35C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8012D47C_loc_0 = 0;
    uint32_t addr_lfsx_8012D498_loc_0 = 0;
    uint32_t addr_lfsx_8012D4A4_loc_0 = 0;
    uint32_t addr_stfsx_8012D5EC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012D35C;

loc_8012D35C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -512), 0, 520u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 516u, (r1 + 516), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 496u, (r1 + 496), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 496);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 468u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 476u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 484u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 492u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r27 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012D384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012D394;
    }
}

loc_8012D388:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 124), r0);
    goto loc_8012D69C;
}

loc_8012D394:
{
    r7 = MemoryInline::FlatRead32((r4 + 144));
    r6 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8012D3A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8012D3D0;
    }
}

loc_8012D3B8:
{
    r5 = MemoryInline::FlatRead32(r7);
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_8012D3D0:
{
    r6 = MemoryInline::FlatRead32((r4 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8012D3D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012D3F4;
    }
}

loc_8012D3DC:
{
    r5 = MemoryInline::FlatRead32(r6);
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_8012D3F4:
{
    r3 = (r1 + 48);
    r4 = (r4 + 32);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8012D8B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -27032));
    r30 = (r1 + 48);
    r29 = 0;
    r31 = 1127219200;
    r25 = 0;
    r26 = 3;
}

loc_8012D418:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r27 + 24));
    r6 = (r3 + r0);
}

loc_8012D42C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r4))) {
        goto loc_8012D438;
    }
}

loc_8012D430:
{
    r6 = (r6 - r4);
    goto loc_8012D444;
}

loc_8012D438:
{
}

loc_8012D43C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_8012D444;
    }
}

loc_8012D440:
{
    r6 = (r6 + r4);
}

loc_8012D444:
{
    r0 = MemoryInline::FlatRead32((r27 + 20));
    r3 = (r6 - r0);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8012D454;
    }
}

loc_8012D450:
{
    r3 = (r3 + r4);
}

loc_8012D454:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_2 & 65535);
}

loc_8012D458:
{
    r8 = (r3 & 65535);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r9 = (r9_rot_2 & 65535);
    r28 = MemoryInline::FlatRead32((r27 + 120));
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8012D4C0;
    }
}

loc_8012D46C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r28 = (r28 + 1);
    addr_lfsx_8012D47C_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012D47C_loc_0);
    r5 = (r27 + r0);
    r9 = (r9 + 1);
    r28 = (r28 & 3);
    MemoryInline::FlatWriteFloat32((r5 + 72), f0.d);
    r7 = (r7 + -1);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    addr_lfsx_8012D498_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012D498_loc_0);
    MemoryInline::FlatWriteFloat32((r5 + 88), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    addr_lfsx_8012D4A4_loc_0 = (r3 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8012D4A4_loc_0);
    MemoryInline::FlatWriteFloat32((r5 + 104), f0.d);
    r0 = MemoryInline::FlatRead32((r27 + 28));
}

loc_8012D4B4:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_8012D4BC;
    }
}

loc_8012D4B8:
{
    r9 = 0;
}

loc_8012D4BC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012D46C;
    }
}

loc_8012D4C0:
{
    r0 = (r6 & -65536);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(23));
    r3 = (r3_rot_2 & 127);
    MemoryInline::FlatWrite32((r27 + 20), r0);
    // inline leaf 0x8012E518 (5 guest instruction(s))
    r4 = 0x80280000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r4 + 7840);
    r3 = (r4 + r0);
    // end of inlined leaf 0x8012E518
    r4 = r27;
    r7 = r27;
    r5 = (r1 + 20);
    r6 = (r1 + 32);
    r8 = (r1 + 8);
    ctr = r26;
}

loc_8012D4E8:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r28 = (r28 + 1);
    r10 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r27 + 144));
    r28 = (r28 & 3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r9 = (r9_rot_4 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 72));
    r28 = (r28 + 1);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -27036));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    r11 = (r4 + r9);
    r28 = (r28 & 3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r9 = (r9_rot_5 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r11 + 72));
    r28 = (r28 + 1);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    r10 = (r4 + r9);
    r28 = (r28 & 3);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r9 = (r9_rot_6 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r10 + 72));
    r9 = (r4 + r9);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r9 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012D560:
{
    r28 = (r28 + 1);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    r28 = (r28 & 3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012D5AC;
    }
}

loc_8012D578:
{
    r9 = MemoryInline::FlatRead32(r5);
    r10 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32(r9);
    r9 = (r9 + 4);
    r10 = MemoryInline::FlatRead32(r10);
    MemoryInline::FlatWriteRam32((r1 + 432), r31);
    r0 = (r10 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWrite32(r5, r9);
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 432));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    goto loc_8012D5C8;
}

loc_8012D5AC:
{
    r9 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 440), r31);
    r0 = MemoryInline::FlatRead32(r9);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 444), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 440));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
}

loc_8012D5C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 140));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    r11 = MemoryInline::FlatRead32(r7);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r10 = (r10_rot_3 & -4);
    r9 = MemoryInline::FlatRead32(r6);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = (r9 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    addr_stfsx_8012D5EC_loc_0 = (r11 + r10);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8012D5EC_loc_0, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 152));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32(r9, r0);
    r0 = MemoryInline::FlatRead32((r27 + 148));
}

loc_8012D610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012D638;
    }
}

loc_8012D614:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 156));
    r9 = MemoryInline::FlatRead32(r8);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    r0 = (r9 + 4);
    MemoryInline::FlatWrite32(r8, r0);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32(r9, r0);
}

loc_8012D638:
{
    r4 = (r4 + 16);
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012D4E8;
    }
}

loc_8012D650:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r0 = MemoryInline::FlatRead32((r27 + 28));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 120), r28);
}

loc_8012D664:
{
    MemoryInline::FlatWrite32((r27 + 12), r3);
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8012D670;
    }
}

loc_8012D66C:
{
    MemoryInline::FlatWrite32((r27 + 12), r25);
}

loc_8012D670:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r3 = (r3 + 65536);
}

loc_8012D680:
{
    MemoryInline::FlatWrite32((r27 + 16), r3);
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8012D68C;
    }
}

loc_8012D688:
{
    MemoryInline::FlatWrite32((r27 + 16), r25);
}

loc_8012D68C:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(96));
}

loc_8012D698:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012D418;
    }
}

loc_8012D69C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 496);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 468), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 496));
    // inline leaf 0x800215E4 (8 guest instruction(s))
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
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 516));
    ctx->lr = r0;
    r1 = (r1 + 512);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x8000003F fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012D35C func_8012D35C preserves=false fpr_mask=0x80000000
