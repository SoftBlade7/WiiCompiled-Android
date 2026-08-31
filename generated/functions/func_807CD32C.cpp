#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CD32C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807CD32C;

loc_807CD32C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    r30 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r28);
    }
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 262144);
}

loc_807CD374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD3E4;
    }
}

loc_807CD378:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f2.d = MemoryInline::FlatReadFloat32((r3 + 640));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 744));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2688));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2692));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 2696));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = std::fabs(f4.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807CD3B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD3B8;
    }
}

loc_807CD3B4:
{
    goto loc_807CD3BC;
}

loc_807CD3B8:
{
    f3.d = f0.d;
}

loc_807CD3BC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_807CD3C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD3CC;
    }
}

loc_807CD3C8:
{
    goto loc_807CD3D0;
}

loc_807CD3CC:
{
    f3.d = (-(f3.d));
}

loc_807CD3D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    MemoryInline::FlatWriteFloat32((r30 + 744), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    goto loc_807CD3FC;
}

loc_807CD3E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2676));
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 744), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
}

loc_807CD3FC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
}

loc_807CD414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD430;
    }
}

loc_807CD418:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_807CD428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(27))) {
        goto loc_807CD430;
    }
}

loc_807CD42C:
{
    r4 = 1;
}

loc_807CD430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CD434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD440;
    }
}

loc_807CD438:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_807CD450;
}

loc_807CD440:
{
    r3 = r30;
    // inline leaf 0x805910C0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x805910C0
    ctx->lr = 0x807CD44Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80726204u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r3);
}

loc_807CD450:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 1);
}

loc_807CD460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD46C;
    }
}

loc_807CD464:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2700));
    goto loc_807CD470;
}

loc_807CD46C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 2660));
}

loc_807CD470:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2720u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2696u, (r31 + 2696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD478:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD48C;
    }
}

loc_807CD47C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    goto loc_807CD4A4;
}

loc_807CD48C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2704u, (r31 + 2704));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD4A4;
    }
}

loc_807CD498:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
}

loc_807CD4A4:
{
    f3.d = std::fabs(f1.d);
}

loc_807CD4AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD4B8;
    }
}

loc_807CD4B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_807CD4B8:
{
}

loc_807CD4BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD4C8;
    }
}

loc_807CD4C0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2656u, (r31 + 2656));
    goto loc_807CD4CC;
}

loc_807CD4C8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r31 + 2660));
}

loc_807CD4CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f2.d);
    f1.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_807CD4E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CD520;
    }
}

loc_807CD4F0:
{
    SetCRFloatResident(cr, 0, f31.d, f2.d);
}

loc_807CD4F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CD520;
    }
}

loc_807CD4FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CD504:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD510;
    }
}

loc_807CD508:
{
    MemoryInline::FlatWriteFloat32((r30 + 88), f1.d);
    goto loc_807CD558;
}

loc_807CD510:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807CD514:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD558;
    }
}

loc_807CD518:
{
    MemoryInline::FlatWriteFloat32((r30 + 88), f2.d);
    goto loc_807CD558;
}

loc_807CD520:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CD530:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD544;
    }
}

loc_807CD534:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r31 + 2660));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    goto loc_807CD558;
}

loc_807CD544:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_807CD548:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD558;
    }
}

loc_807CD54C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r31 + 2660));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
}

loc_807CD558:
{
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807CD56C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD600;
    }
}

loc_807CD570:
{
    r3 = MemoryInline::FlatRead32(r30);
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_0 = (r3 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_807CD588:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD5D4;
    }
}

loc_807CD58C:
{
    r3 = r30;
    r28 = 0;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_807CD5A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD5C8;
    }
}

loc_807CD5A8:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057EFF8 (11 guest instruction(s))
}

loc_inl5_0x8057EFF8:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl5_0x8057F010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl5_0x8057F01C;
    }
}

loc_inl5_0x8057F014:
{
    r3 = 0;
    goto loc_inl5_cont_8057EFF8;
}

loc_inl5_0x8057F01C:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
}

loc_inl5_cont_8057EFF8:
{
    // end of inlined leaf 0x8057EFF8
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_807CD5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD5C8;
    }
}

loc_807CD5C4:
{
    r28 = 1;
}

loc_807CD5C8:
{
}

loc_807CD5CC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_807CD5D4;
    }
}

loc_807CD5D0:
{
    r29 = 0;
}

loc_807CD5D4:
{
}

loc_807CD5D8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807CD5F8;
    }
}

loc_807CD5DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 254));
}

loc_807CD5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD5F0;
    }
}

loc_807CD5E8:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2712u, (r31 + 2712));
    goto loc_807CD678;
}

loc_807CD5F0:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2716u, (r31 + 2716));
    goto loc_807CD678;
}

loc_807CD5F8:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2528u, (r31 + 2528));
    goto loc_807CD678;
}

loc_807CD600:
{
    r3 = MemoryInline::FlatRead32(r30);
    r28 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_1 = (r3 & 8);
    r0_mdest_1 = (r0 & -9);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_807CD618:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD664;
    }
}

loc_807CD61C:
{
    r3 = r30;
    r29 = 0;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
}

loc_807CD634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD658;
    }
}

loc_807CD638:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057EFF8 (11 guest instruction(s))
}

loc_inl8_0x8057EFF8:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl8_0x8057F010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl8_0x8057F01C;
    }
}

loc_inl8_0x8057F014:
{
    r3 = 0;
    goto loc_inl8_cont_8057EFF8;
}

loc_inl8_0x8057F01C:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
}

loc_inl8_cont_8057EFF8:
{
    // end of inlined leaf 0x8057EFF8
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_807CD650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD658;
    }
}

loc_807CD654:
{
    r29 = 1;
}

loc_807CD658:
{
}

loc_807CD65C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_807CD664;
    }
}

loc_807CD660:
{
    r28 = 0;
}

loc_807CD664:
{
}

loc_807CD668:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807CD674;
    }
}

loc_807CD66C:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2512u, (r31 + 2512));
    goto loc_807CD678;
}

loc_807CD674:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2716u, (r31 + 2716));
}

loc_807CD678:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r31 + 2660));
    r3 = r30;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_11 & 134217727);
}

loc_807CD69C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD720;
    }
}

loc_807CD6A0:
{
    r3 = MemoryInline::FlatRead16((r30 + 250));
    r0 = 0;
}

loc_807CD6AC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(4))) {
        goto loc_807CD6B8;
    }
}

loc_807CD6B0:
{
}

loc_807CD6B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(6))) {
        goto loc_807CD6BC;
    }
}

loc_807CD6B8:
{
    r0 = 1;
}

loc_807CD6BC:
{
}

loc_807CD6C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD720;
    }
}

loc_807CD6C4:
{
}

loc_807CD6C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_807CD720;
    }
}

loc_807CD6CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 324));
}

loc_807CD6D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD84C;
    }
}

loc_807CD6D8:
{
}

loc_807CD6DC:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(21))) {
        goto loc_807CD6F0;
    }
}

loc_807CD6E4:
{
}

loc_807CD6E8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(23))) {
        goto loc_807CD6F0;
    }
}

loc_807CD6EC:
{
    r0 = 1;
}

loc_807CD6F0:
{
}

loc_807CD6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD720;
    }
}

loc_807CD6F8:
{
}

loc_807CD6FC:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(8))) {
        goto loc_807CD710;
    }
}

loc_807CD704:
{
}

loc_807CD708:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(10))) {
        goto loc_807CD710;
    }
}

loc_807CD70C:
{
    r0 = 1;
}

loc_807CD710:
{
}

loc_807CD714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CD720;
    }
}

loc_807CD718:
{
}

loc_807CD71C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(7))) {
        goto loc_807CD84C;
    }
}

loc_807CD720:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 250));
    f0.d = (-(f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2528u, (r31 + 2528));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_807CD738:
{
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD74C;
    }
}

loc_807CD744:
{
}

loc_807CD748:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(6))) {
        goto loc_807CD750;
    }
}

loc_807CD74C:
{
    r0 = 1;
}

loc_807CD750:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CD754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD798;
    }
}

loc_807CD758:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = MemoryInline::FlatRead16((r30 + 244));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CD770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD798;
    }
}

loc_807CD774:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f30.d;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x807CD798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CD798:
{
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_14 & 134217727);
}

loc_807CD7AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD814;
    }
}

loc_807CD7B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r0 = MemoryInline::FlatRead8((r30 + 77));
    f0.d = (-(f0.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CD7C0:
{
    f30.d = PpcFmulsInline(f0.d, f31.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD7E8;
    }
}

loc_807CD7C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 254));
}

loc_807CD7D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD7DC;
    }
}

loc_807CD7D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    goto loc_807CD7E0;
}

loc_807CD7DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2720));
}

loc_807CD7E0:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_807CD84C;
}

loc_807CD7E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
}

loc_807CD7F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD84C;
    }
}

loc_807CD7F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 254));
}

loc_807CD7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD808;
    }
}

loc_807CD800:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    goto loc_807CD80C;
}

loc_807CD808:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2720));
}

loc_807CD80C:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    goto loc_807CD84C;
}

loc_807CD814:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r0 = MemoryInline::FlatRead8((r30 + 77));
    f0.d = (-(f0.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CD824:
{
    f30.d = PpcFmulsInline(f0.d, f31.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD838;
    }
}

loc_807CD82C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_807CD84C;
}

loc_807CD838:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
}

loc_807CD840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD84C;
    }
}

loc_807CD844:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
}

loc_807CD84C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 100));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807CD858:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD874;
    }
}

loc_807CD85C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807CD864:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD86C;
    }
}

loc_807CD868:
{
    goto loc_807CD888;
}

loc_807CD86C:
{
    f30.d = f0.d;
    goto loc_807CD888;
}

loc_807CD874:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807CD87C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD884;
    }
}

loc_807CD880:
{
    goto loc_807CD888;
}

loc_807CD884:
{
    f30.d = f0.d;
}

loc_807CD888:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f30.d);
    r3 = r30;
    ctx->lr = 0x807CD898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80590368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    r3 = r30;
    f0.d = (-(f0.d));
    f30.d = PpcFmulsInline(f0.d, f31.d);
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_16 & 134217727);
}

loc_807CD8B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD914;
    }
}

loc_807CD8BC:
{
    r0 = MemoryInline::FlatRead8((r30 + 77));
}

loc_807CD8C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD8E8;
    }
}

loc_807CD8C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 254));
}

loc_807CD8D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD8DC;
    }
}

loc_807CD8D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    goto loc_807CD8E0;
}

loc_807CD8DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2720));
}

loc_807CD8E0:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_807CD940;
}

loc_807CD8E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
}

loc_807CD8F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD940;
    }
}

loc_807CD8F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 254));
}

loc_807CD8FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD908;
    }
}

loc_807CD900:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    goto loc_807CD90C;
}

loc_807CD908:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2720));
}

loc_807CD90C:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    goto loc_807CD940;
}

loc_807CD914:
{
    r0 = MemoryInline::FlatRead8((r30 + 77));
}

loc_807CD91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD92C;
    }
}

loc_807CD920:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    goto loc_807CD940;
}

loc_807CD92C:
{
    r0 = MemoryInline::FlatRead8((r30 + 78));
}

loc_807CD934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD940;
    }
}

loc_807CD938:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 2712));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
}

loc_807CD940:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 100));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_807CD94C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD968;
    }
}

loc_807CD950:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807CD958:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CD960;
    }
}

loc_807CD95C:
{
    goto loc_807CD97C;
}

loc_807CD960:
{
    f30.d = f0.d;
    goto loc_807CD97C;
}

loc_807CD968:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807CD970:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CD978;
    }
}

loc_807CD974:
{
    goto loc_807CD97C;
}

loc_807CD978:
{
    f30.d = f0.d;
}

loc_807CD97C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d));
    MemoryInline::FlatWriteFloat32((r30 + 96), f30.d);
    r3 = r30;
    ctx->lr = 0x807CD98Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80590350u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r30 + 250));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_807CD994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CDA44;
    }
}

loc_807CD998:
{
    r0 = MemoryInline::FlatRead8((r30 + 248));
}

loc_807CD9A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CD9B0;
    }
}

loc_807CD9A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807CD9B4;
}

loc_807CD9B0:
{
    r3 = 0;
}

loc_807CD9B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CD9B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CD9C4;
    }
}

loc_807CD9BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    ctx->lr = 0x807CD9C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8055F28Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CD9C4:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = MemoryInline::FlatRead16((r30 + 250));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CD9DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CD9E4;
    }
}

loc_807CD9E0:
{
    goto loc_807CDA04;
}

loc_807CD9E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807CDA04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CDA04:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = MemoryInline::FlatRead16((r30 + 252));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CDA1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CDA24;
    }
}

loc_807CDA20:
{
    goto loc_807CDA44;
}

loc_807CDA24:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557350 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x80557350
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807CDA44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CDA44:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807CD32C func_807CD32C preserves=false fpr_mask=0xC0000000
