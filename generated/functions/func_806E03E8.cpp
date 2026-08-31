#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E03E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806E03E8;

loc_806E03E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E0408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0638;
    }
}

loc_806E040C:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x806E0420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806E0424:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806E0434;
    }
}

loc_806E0428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806E042C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0498;
    }
}

loc_806E0430:
{
    goto loc_806E04AC;
}

loc_806E0434:
{
    r0 = MemoryInline::FlatRead16((r31 + 184));
}

loc_806E043C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_806E04AC;
    }
}

loc_806E0440:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_806E045C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806E0474;
    }
}

loc_806E0460:
{
}

loc_806E0464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806E0480;
    }
}

loc_806E0468:
{
}

loc_806E046C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806E048C;
    }
}

loc_806E0470:
{
    goto loc_806E04AC;
}

loc_806E0474:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 188), r0);
    goto loc_806E04AC;
}

loc_806E0480:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 188), r0);
    goto loc_806E04AC;
}

loc_806E048C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 188), r0);
    goto loc_806E04AC;
}

loc_806E0498:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 244));
    ctr = r12;
    ctx->lr = 0x806E04ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806E04AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead32((r31 + 292));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E04C0:
{
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 224), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 232), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E0584;
    }
}

loc_806E04DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 188));
}

loc_806E04E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806E0538;
    }
}

loc_806E04E8:
{
    r4 = -1;
    r5 = 0;
    MemoryInline::FlatWrite16((r31 + 184), static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 131070);
    r3 = MemoryInline::FlatRead32((r31 + 200));
    MemoryInline::FlatWrite32((r31 + 188), r4);
    r4 = MemoryInline::FlatRead32((r31 + 204));
    MemoryInline::FlatWrite32((r31 + 192), r5);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 * 28);
    r30 = (r4 + r0);
    r3 = (r30 + 4);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl0_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl0_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl0_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl0_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8002140C:
{
    r3 = 0;
    goto loc_inl0_cont_800213E4;
}

loc_inl0_return:
{
}

loc_inl0_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806E0520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E0560;
    }
}

loc_806E0524:
{
    r3 = MemoryInline::FlatRead32((r31 + 208));
    r12 = (r30 + 4);
    ctx->lr = 0x806E0530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    goto loc_806E0560;
}

loc_806E0538:
{
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r0 = MemoryInline::FlatRead16((r31 + 184));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 192), r3);
    r3 = MemoryInline::FlatRead32((r31 + 200));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = MemoryInline::FlatRead32((r31 + 204));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 * 28);
    r30 = (r4 + r0);
}

loc_806E0560:
{
    r3 = (r30 + 16);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl1_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl1_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl1_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl1_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8002140C:
{
    r3 = 0;
    goto loc_inl1_cont_800213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806E056C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E058C;
    }
}

loc_806E0570:
{
    r3 = MemoryInline::FlatRead32((r31 + 208));
    r12 = (r30 + 16);
    ctx->lr = 0x806E057Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    goto loc_806E058C;
}

loc_806E0584:
{
    r3 = r31;
    ctx->lr = 0x806E058Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806E1940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806E058C:
{
    r3 = r31;
    ctx->lr = 0x806E0594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 128u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r31 + 212));
    r0 = 0;
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r5 + 44));
    r4 = (r4 | 4);
    MemoryInline::FlatWrite16((r5 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r5 + 84), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 88));
    MemoryInline::FlatWriteFloat32((r5 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 92));
    MemoryInline::FlatWriteFloat32((r5 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 96));
    MemoryInline::FlatWriteFloat32((r5 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 100));
    MemoryInline::FlatWriteFloat32((r5 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 104));
    MemoryInline::FlatWriteFloat32((r5 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 108));
    MemoryInline::FlatWriteFloat32((r5 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 112));
    MemoryInline::FlatWriteFloat32((r5 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 116));
    MemoryInline::FlatWriteFloat32((r5 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 120));
    MemoryInline::FlatWriteFloat32((r5 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 124));
    MemoryInline::FlatWriteFloat32((r5 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 128));
    MemoryInline::FlatWriteFloat32((r5 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 132));
    MemoryInline::FlatWriteFloat32((r5 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 100));
    MemoryInline::FlatWriteFloat32((r5 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 116));
    MemoryInline::FlatWriteFloat32((r5 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 132));
    MemoryInline::FlatWriteFloat32((r5 + 56), f0.d);
    ctx->lr = 0x806E062Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 216));
    r4 = (r31 + 88);
    ctx->lr = 0x806E0638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055B0B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_806E0638:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806E03E8 func_806E03E8 preserves=true fpr_mask=0x00000000
