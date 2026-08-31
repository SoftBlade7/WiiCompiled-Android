#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214770(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80214770;

loc_80214770:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 120u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 96), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 96u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 100));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 104));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 80), r4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r3 + 108));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r3 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r3 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r3 + 120));
    r3 = (r1 + 80);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    ctx->lr = 0x80214834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 32);
    r4 = (r31 + 124);
    r5 = (r1 + 80);
    // inline leaf 0x80214968 (19 guest instruction(s))
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
    // end of inlined leaf 0x80214968
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    ctx->lr = 0x80214864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 56);
    r4 = (r1 + 80);
    r5 = (r1 + 68);
    // inline leaf 0x80214968 (19 guest instruction(s))
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
    // end of inlined leaf 0x80214968
    r3 = (r1 + 56);
    ctx->lr = 0x8021487Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 68));
    f8.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 72));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f5.d = PpcFmulsInline(f1.d, f8.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 56));
    f4.d = PpcFmulsInline(f0.d, f7.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 60));
    f3.d = PpcFmulsInline(f1.d, f8.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 80));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 84));
        }
    }
    f2.d = PpcFmulsInline(f2.d, f7.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f9.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f2.d = PpcFmulsInline(f0.d, f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 64));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 88));
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 68));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r31 + 4), f0.d);
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r31 + 8), f0.d);
    f3.d = PpcFmulsInline(f3.d, f9.d);
    f5.d = (-(f6.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r31 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = (-(f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r31 + 16), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r31 + 20), f0.d);
    f1.d = (-(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r31 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 64));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r31 + 32), f4.d);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r31 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 88));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r31 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r31 + 48), f1.d);
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 108));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x80000010 fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80214770 func_80214770 preserves=true fpr_mask=0x00000000
