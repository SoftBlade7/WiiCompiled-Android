#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B9F70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_800B9F70;

loc_800B9F70:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27804));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f1.d);
    }
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r1 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r1 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r1 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r1 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r1 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r1 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r1 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r1 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 49u, (r1 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 50u, (r1 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 52u, (r1 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 53u, (r1 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r1 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 55u, (r1 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r1 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 57u, (r1 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 58u, (r1 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 59u, (r1 + 59), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r1 + 60), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 61u, (r1 + 61), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 62u, (r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 63u, (r1 + 63), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r4);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved8(guest_range_1, 96u, (r1 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r3 + 65));
    MemoryInline::WriteResolved8(guest_range_1, 97u, (r1 + 97), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 98u, (r1 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 99u, (r1 + 99), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    r6 = r5;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r1 + 100), f0.d);
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r1 + 116), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 96));
    r3 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r1 + 80), f1.d);
    }
    ctx->lr = 0x800BA158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x800BA190u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = 0;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x800BA170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B9F70 func_800B9F70 preserves=false fpr_mask=0x80000000
