#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EB650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806EB650;

loc_806EB650:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 204), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    MemoryInline::FlatWriteRam32((r1 + 196), r29);
    MemoryInline::FlatWriteRam32((r1 + 192), r28);
    r5 = MemoryInline::FlatRead32((r3 + 1028));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-1));
}

loc_806EB680:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EB690;
    }
}

loc_806EB684:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    goto loc_806EB6A8;
}

loc_806EB690:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = (r5 + 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806EB69C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806EB6A8;
    }
}

loc_806EB6A0:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 1020), r0);
}

loc_806EB6A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 1020));
    r0 = 1127219200;
    r5 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 180), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 2568));
    r4 = 4;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 176));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x806EB6F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x806EB6F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 928u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 88));
    r3 = 0x802A0000u;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 92));
    r28 = (r3 + 16640);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
    r29 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    r30 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r4);
    r5 = r28;
    f3.d = MemoryInline::FlatReadFloat32((r28 + 4));
    r3 = (r1 + 80);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 96));
    r4 = (r1 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r6);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2576));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 104));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 108));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 2512));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 112));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 60), r0);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 56), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 124));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 64), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r31 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 76), r0);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 72), r6);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 44), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 60), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 76), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 924u, (r31 + 1012));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f0.d);
    ctx->lr = 0x806EB7ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 1016));
    r5 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2576));
    r3 = (r1 + 128);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 2512));
    r4 = (r1 + 20);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x806EB7D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 80);
    r4 = (r1 + 128);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    r3 = (r1 + 32);
    r4 = (r1 + 80);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r31 + 940));
    r28 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 944));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 948));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r29 = MemoryInline::FlatRead32((r31 + 8));
}

loc_806EB818:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806EB824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EB834;
    }
}

loc_806EB828:
{
    r5 = (r1 + 32);
    r4 = 0;
    ctx->lr = 0x806EB834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_806EB834:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_806EB840:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806EB818;
    }
}

loc_806EB844:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 228));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r31 = MemoryInline::FlatRead32((r1 + 204));
    r30 = MemoryInline::FlatRead32((r1 + 200));
    r29 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 192));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFC fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806EB650 func_806EB650 preserves=false fpr_mask=0x80000000
