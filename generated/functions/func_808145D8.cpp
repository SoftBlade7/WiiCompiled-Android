#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808145D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808145D8;

loc_808145D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r28 = 0x809C0000u;
    r29 = r3;
    r26 = 0x808D0000u;
    r27 = 0x808B0000u;
    r25 = r4;
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r30 = r5;
    r31 = r6;
    r26 = (r26 + 25320);
    r27 = (r27 + -19496);
    r4 = 2;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80814630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80814640;
    }
}

loc_80814634:
{
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r7 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_80814644;
}

loc_80814640:
{
    r7 = MemoryInline::FlatRead32((r29 + 172));
}

loc_80814644:
{
    r8 = MemoryInline::FlatRead16((r26 + 12));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r3 = 1127219200;
    r0 = MemoryInline::FlatRead32((r25 + 16));
    r4 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = (r8 ^ -2147483648);
    r6 = MemoryInline::FlatRead32((r25 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r5 = MemoryInline::FlatRead32((r25 + 12));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 188));
    r4 = (r4 * r8);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f6.d = MemoryInline::FlatReadFloat64((r27 + 56));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 32));
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r0 = (r7 - r4);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    f4.d = MemoryInline::FlatReadFloat32((r27 + 28));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f1.d = PpcFmulsInline(f1.d, f7.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = PpcFmulsInline(f30.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 184));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 112u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
        }
    }
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f9.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f0.d = PpcFmulsInline(f1.d, f6.d);
    f8.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    f2.d = PpcFmulsInline(f4.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f3.d);
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 12));
        }
    }
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 52u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 60u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00007E gpr_write=0xFE0009FB gpr_return=0x00000018 fpr_read=0xC0000000 fpr_write=0xC00003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808145D8 func_808145D8 preserves=false fpr_mask=0xC0000000
