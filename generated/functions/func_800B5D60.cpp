#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B5D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r1_addr_1 = 0;
    uint32_t r1_addr_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B5D60;

loc_800B5D60:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r7 = r4;
    r6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r1;
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    MemoryInline::FlatWriteRam32((r1 + 116), r29);
    r29 = r3;
    r30 = MemoryInline::FlatRead32((r13 + -27008));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800B5D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B5DA0;
    }
}

loc_800B5D9C:
{
    goto loc_800B5DB8;
}

loc_800B5DA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -32304));
    r0 = MemoryInline::FlatRead32(r1);
    r30 = (0 - r3);
    r30 = (r30 & -8);
    r1_addr_1 = (r1 + r30);
    MemoryInline::FlatWrite32(r1_addr_1, r0);
    r1 = r1_addr_1;
    r30 = (r1 + 8);
}

loc_800B5DB8:
{
    r4 = MemoryInline::FlatRead32((r13 + -32304));
    r3 = r30;
    r5 = r7;
    ctx->lr = 0x800B5DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001182Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -32304));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800B5DD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B5DDC;
    }
}

loc_800B5DD8:
{
    r3 = r0;
}

loc_800B5DDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r29);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 100u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r29 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r29 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r29 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r29 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r29 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r29 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r29 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r29 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r29 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r29 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r31 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r29 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r31 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r29 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r31 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r29 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r31 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r29 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r31 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r29 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r31 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r29 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r31 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r29 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r31 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r29 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r31 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r29 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r31 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r29 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r31 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r29 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r31 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r29 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r31 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r29 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r31 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r29 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r31 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r29 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 40), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r29 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r29 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 44), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r29 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r29 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r31 + 52), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r29 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r31 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r29 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r29 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r31 + 64), r4);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r29 + 64));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r31 + 72), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r29 + 65));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r31 + 73), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r29 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r31 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r29 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r31 + 75), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r29 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 76), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r29 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r31 + 80), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r29 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r29 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r29 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 92), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r29 + 88));
    r5 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r31 + 96), r0);
    r4 = r30;
    r3 = (r31 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r29 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r31 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r29 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r31 + 104), r0);
    ctx->lr = 0x800B5F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B6DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 52));
    r3 = (r31 + 8);
    MemoryInline::FlatWriteFloat32((r29 + 44), f2.d);
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    ctx->lr = 0x800B5FACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B2EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = r31;
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r31 + 128));
    r31 = MemoryInline::FlatRead32((r31 + 124));
    r30 = MemoryInline::FlatRead32((r10 + 120));
    r29 = MemoryInline::FlatRead32((r10 + 116));
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B5D60 func_800B5D60 preserves=false fpr_mask=0x80000000
