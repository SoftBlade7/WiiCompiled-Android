#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080861C(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8080861C;

loc_8080861C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r7 = MemoryInline::FlatRead32((r7 + -10448));
    r31 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r31 = (r31 + -20488);
    r7 = MemoryInline::FlatRead32((r7 + 32));
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r30 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    r30 = (r30 + 22896);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r7 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat64((r31 + 48));
    r27 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 184));
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r28 = r5;
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r29 = r6;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 16848));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = PpcFmulsInline(f31.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
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
    f2.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f30.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = PpcFmulsInline(f31.d, f2.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r4 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = (r4 + 16688);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r27 + 56));
    f1.d = PpcFmulsInline(f2.d, f31.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 96u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 16));
    f5.d = MemoryInline::FlatReadFloat32((r27 + 52));
    f2.d = PpcFmulsInline(f3.d, f30.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f6.d = MemoryInline::FlatReadFloat32((r27 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007E gpr_write=0xF800089B gpr_return=0x00000018 fpr_read=0xC0000000 fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080861C func_8080861C preserves=false fpr_mask=0xC0000000
