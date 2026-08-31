#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CF510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807CF510;

loc_807CF510:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = MemoryInline::FlatRead32((r3 + 108));
    r3 = MemoryInline::FlatRead32((r5 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CF554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF8FC;
    }
}

loc_807CF558:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
}

loc_807CF568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF67C;
    }
}

loc_807CF56C:
{
    r0 = MemoryInline::FlatRead32((r30 + 1196));
}

loc_807CF574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF65C;
    }
}

loc_807CF578:
{
    r0 = MemoryInline::FlatRead32((r30 + 712));
}

loc_807CF580:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807CF65C;
    }
}

loc_807CF584:
{
    r0 = MemoryInline::FlatRead32((r30 + 52));
}

loc_807CF58C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807CF65C;
    }
}

loc_807CF590:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_807CF5A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CF65C;
    }
}

loc_807CF5A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 712));
    r0 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2824u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2508u, (r31 + 2508));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 2544u, (r31 + 2544));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807CF5D4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CF5E4;
    }
}

loc_807CF5DC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    goto loc_807CF5FC;
}

loc_807CF5E4:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2816u, (r31 + 2816));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807CF5FC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF604:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CF60C;
    }
}

loc_807CF608:
{
    goto loc_807CF620;
}

loc_807CF60C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2820u, (r31 + 2820));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CF614:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF61C;
    }
}

loc_807CF618:
{
    goto loc_807CF620;
}

loc_807CF61C:
{
    f1.d = f0.d;
}

loc_807CF620:
{
    r4 = MemoryInline::FlatRead32((r30 + 1196));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807CF62C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(6))) {
        goto loc_807CF65C;
    }
}

loc_807CF630:
{
}

loc_807CF634:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_807CF640;
    }
}

loc_807CF638:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
}

loc_807CF640:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWriteFloat32((r4 + 12), f1.d);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r3));
}

loc_807CF65C:
{
    r0 = MemoryInline::FlatRead32((r30 + 712));
}

loc_807CF664:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_807CF670;
    }
}

loc_807CF668:
{
    r0 = 40;
    MemoryInline::FlatWrite32((r30 + 52), r0);
}

loc_807CF670:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 712), r0);
    goto loc_807CF688;
}

loc_807CF67C:
{
    r3 = MemoryInline::FlatRead32((r30 + 712));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 712), r0);
}

loc_807CF688:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r4 = MemoryInline::FlatRead32((r30 + 52));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF694:
{
    MemoryInline::FlatWrite32((r30 + 44), r0);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF6D0;
    }
}

loc_807CF6A4:
{
    r0 = 0;
    r29 = 41;
    MemoryInline::FlatWrite32((r30 + 44), r0);
    r3 = r30;
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r29));
    r12 = MemoryInline::FlatRead32((r30 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x807CF6C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r30 + 66), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r29));
}

loc_807CF6D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 66));
    r29 = 0;
}

loc_807CF6DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(41))) {
        goto loc_807CF734;
    }
}

loc_807CF6E0:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1088);
}

loc_807CF6F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CF700;
    }
}

loc_807CF6F4:
{
    r3 = 196608;
    r0 = (r3 + 19392);
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_807CF700:
{
    r3 = MemoryInline::FlatRead32((r30 + 716));
    r0 = MemoryInline::FlatRead32((r30 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_807CF70C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CF734;
    }
}

loc_807CF710:
{
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x807CF730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8069C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 1;
}

loc_807CF734:
{
    r4 = MemoryInline::FlatRead16((r30 + 66));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(41));
}

loc_807CF73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF76C;
    }
}

loc_807CF740:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807CF754:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_807CF76C;
    }
}

loc_807CF758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807CF75C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF8FC;
    }
}

loc_807CF760:
{
    r0 = 41;
    MemoryInline::FlatWrite16((r30 + 66), static_cast<uint16_t>(r0));
    goto loc_807CF8FC;
}

loc_807CF76C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807CF770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF7A4;
    }
}

loc_807CF774:
{
    r4 = MemoryInline::FlatRead16((r30 + 66));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2824));
    r5 = 1;
    ctx->lr = 0x807CF788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 3;
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x807CF79Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 41;
    MemoryInline::FlatWrite16((r30 + 66), static_cast<uint16_t>(r0));
}

loc_807CF7A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 250));
    r0 = 0;
}

loc_807CF7B0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(31))) {
        goto loc_807CF7C0;
    }
}

loc_807CF7B4:
{
}

loc_807CF7B8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(39))) {
        goto loc_807CF7C0;
    }
}

loc_807CF7BC:
{
    r0 = 1;
}

loc_807CF7C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF7C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF7F0;
    }
}

loc_807CF7C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
    r4 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807CF7F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CF7F0:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2048);
}

loc_807CF800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF814;
    }
}

loc_807CF804:
{
    r3 = MemoryInline::FlatRead32((r30 + 720));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 720), r0);
    goto loc_807CF81C;
}

loc_807CF814:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 720), r0);
}

loc_807CF81C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 & 2048);
}

loc_807CF82C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF86C;
    }
}

loc_807CF830:
{
    r0 = MemoryInline::FlatRead32((r30 + 716));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_807CF838:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CF874;
    }
}

loc_807CF83C:
{
    r0 = MemoryInline::FlatRead32((r30 + 724));
}

loc_807CF844:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_807CF86C;
    }
}

loc_807CF848:
{
    r3 = MemoryInline::FlatRead16((r30 + 250));
    r0 = 0;
}

loc_807CF854:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(27))) {
        goto loc_807CF864;
    }
}

loc_807CF858:
{
}

loc_807CF85C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807CF864;
    }
}

loc_807CF860:
{
    r0 = 1;
}

loc_807CF864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CF874;
    }
}

loc_807CF86C:
{
    r0 = (r4 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF8FC;
    }
}

loc_807CF874:
{
    r0 = 41;
    MemoryInline::FlatWrite16((r30 + 66), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = 3;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807CF890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r30 + 250));
    r0 = 0;
}

loc_807CF89C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(31))) {
        goto loc_807CF8AC;
    }
}

loc_807CF8A0:
{
}

loc_807CF8A4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807CF8AC;
    }
}

loc_807CF8A8:
{
    r0 = 1;
}

loc_807CF8AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CF8B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF8FC;
    }
}

loc_807CF8B4:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2146435072);
}

loc_807CF8C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CF8DC;
    }
}

loc_807CF8CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_807CF8D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CF8DC;
    }
}

loc_807CF8D8:
{
    r4 = 0;
}

loc_807CF8DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CF8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF8F4;
    }
}

loc_807CF8E4:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 79), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r30 + 246), static_cast<uint16_t>(r0));
}

loc_807CF8F4:
{
    r3 = r30;
    ctx->lr = 0x807CF8FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807D1A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807CF8FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807CF510 func_807CF510 preserves=false fpr_mask=0x80000000
