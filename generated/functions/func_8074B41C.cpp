#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074B41C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8074B41C;

loc_8074B41C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = (r6 * 12);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = (r1 + 32);
    r6 = (r7 * 12);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r31;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r31;
    r31 = (r31 + r0);
    r30 = (r30 + r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r0 = (r8 * 12);
    r28 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r3 = (r1 + 20);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    r29 = (r29 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 28));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r4 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
    r5 = r30;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r4 + 44));
    r4 = r31;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = r30;
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r5 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    ctx->lr = 0x8074B5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r30;
    ctx->lr = 0x8074B5E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r29;
    ctx->lr = 0x8074B5E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 32));
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r28, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r28 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r28 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r28 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r28 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r28 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r28 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r28 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r28 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r28 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r28 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r28 + 44), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 92));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r1 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 84));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 80));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FE gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074B41C func_8074B41C preserves=true fpr_mask=0x00000000
