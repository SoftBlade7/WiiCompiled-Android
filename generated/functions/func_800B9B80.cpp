#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B9B80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_800B9B80;

loc_800B9B80:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r31);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r31 = r3;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r1 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r6);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved8(guest_range_1, 72u, (r1 + 72), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r3 + 65));
    MemoryInline::WriteResolved8(guest_range_1, 73u, (r1 + 73), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 74u, (r1 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 75u, (r1 + 75), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 76), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r1 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r1 + 92), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 96));
    r3 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r0);
    ctx->lr = 0x800B9D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x800BA950u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r31 + 44), f2.d);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    ctx->lr = 0x800B9D64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B9B80 func_800B9B80 preserves=false fpr_mask=0x80000000
