#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80806268(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80806268;

loc_80806268:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r8 = 0x809C0000u;
    r7 = 1127219200;
    r8 = MemoryInline::FlatRead32((r8 + -10448));
    r30 = 0x808D0000u;
    r30 = (r30 + 21176);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r12 = MemoryInline::FlatRead16((r30 + 12));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r31 = 0x808B0000u;
    r11 = MemoryInline::FlatRead32((r8 + 32));
    r31 = (r31 + -20672);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = (r12 ^ -2147483648);
    r8 = PPC_Divw(static_cast<int32_t>(r11), static_cast<int32_t>(r12));
    r10 = MemoryInline::FlatRead32((r4 + 8));
    r9 = MemoryInline::FlatRead32((r4 + 12));
    r27 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r28 = r5;
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 184));
    r4 = (r8 * r12);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f6.d = MemoryInline::FlatReadFloat64((r31 + 64));
    r29 = r6;
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r3 = (r11 - r4);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    MemoryInline::FlatWriteRam32((r1 + 40), r7);
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
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
    f2.d = PpcFmulsInline(f30.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 112u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r27 + 56));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f4.d = MemoryInline::FlatReadFloat32((r27 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 180));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f8.d = MemoryInline::FlatReadFloat32((r27 + 48));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 20));
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f5.d);
    f5.d = PpcFmulsInline(f3.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = PpcFmulsInline(f4.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f3.d);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
        }
    }
    MemoryInline::FlatWriteFloat32(r29, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 52u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 60u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007E gpr_write=0xF8001FBB gpr_return=0x00000018 fpr_read=0xC0000000 fpr_write=0xC00001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80806268 func_80806268 preserves=false fpr_mask=0xC0000000
