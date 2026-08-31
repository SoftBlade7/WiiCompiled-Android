#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126638(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80126638;

loc_80126638:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x802F0000u;
    r31 = (r31 + 29760);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = (r31 + 0);
    MemoryInline::FlatWriteRam32(r31, r3);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012405Cu>(ctx);
    r3 = ctx->gpr[3];
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r0 = MemoryInline::FlatRead32((r13 + -26352));
    r3_subfic_ra_0 = r3;
    r3 = (96 - r3_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(96) >= static_cast<uint32_t>(r3_subfic_ra_0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012667C:
{
    r30 = (r3 * 3797);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80126690;
    }
}

loc_80126684:
{
    r3 = 0;
    ctx->lr = 0x8012668Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801277A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80126698;
}

loc_80126690:
{
    r3 = 24400;
    ctx->lr = 0x80126698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801277A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80126698:
{
    ctx->lr = 0x8012669Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80126F14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // inline leaf 0x80125BB4 (12 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -26376));
    r5 = 0x802F0000u;
    r5 = (r5 + 29504);
    r3 = (r4 + 1);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r6 = (r6_rot_0 & -128);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_0 & 128);
    r4 = (r3 & 1);
    r3 = (r5 + r6);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -26376), r4);
    MemoryInline::FlatWrite32((r13 + -26380), r0);
    // end of inlined leaf 0x80125BB4
    r4 = -1161953280;
    r29 = r3;
    r3 = (r4 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_801266B0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801266B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801266B0;
    }
}

loc_801266BC:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015D430u>(ctx);
}

loc_801266C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8015D3FCu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801266CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801266C4;
    }
}

loc_801266D0:
{
    ctx->lr = 0x801266D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80124EF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r29 + 12), r4);
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    ctx->lr = 0x801266E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80125698u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWriteRam32((r29 + 20), r4);
    MemoryInline::FlatWriteRam32((r29 + 16), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = MemoryInline::FlatRead32((r13 + -26324));
    MemoryInline::FlatWriteRam32((r29 + 28), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80126704:
{
    MemoryInline::FlatWriteRam32((r29 + 24), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80126714;
    }
}

loc_8012670C:
{
    ctr = r12;
    ctx->lr = 0x80126714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80126714:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = MemoryInline::FlatRead32((r13 + -26360));
    r8 = (r31 + 0);
    r5 = (r31 + 64);
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r7 = (r7 + 18);
    r6 = (r5 + r6);
    MemoryInline::FlatWriteRam32((r8 + 36), r4);
    r5 = (r6 + 360);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80126740:
{
    r4 = (r6 + 720);
    r0 = (r6 + 1080);
    MemoryInline::FlatWriteRam32((r8 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80126764;
    }
}

loc_80126760:
{
    r7 = 0;
}

loc_80126764:
{
    r4 = MemoryInline::FlatRead32((r13 + -26364));
    r3 = MemoryInline::FlatRead32((r13 + -26360));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r3));
}

loc_80126770:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80126784;
    }
}

loc_80126774:
{
    r0 = (r3 + 18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8012677C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80126784;
    }
}

loc_80126780:
{
    MemoryInline::FlatWrite32((r13 + -26364), r7);
}

loc_80126784:
{
    r0 = MemoryInline::FlatRead32((r13 + -26312));
    r29 = (r31 + 2272);
    MemoryInline::FlatWrite32((r13 + -26360), r7);
    r3 = (r31 + 1504);
    r0 = (r0 * 384);
    r5 = (r1 + 8);
    r4 = (r29 + r0);
    ctx->lr = 0x801267A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80125BE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26312));
    r0 = MemoryInline::FlatRead32((r13 + -26352));
    r3 = (r3 + 1);
}

loc_801267B4:
{
    MemoryInline::FlatWrite32((r13 + -26312), r3);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801267E0;
    }
}

loc_801267BC:
{
    r3 = -1431633920;
    r4 = MemoryInline::FlatRead32((r13 + -26312));
    r0 = (r3 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r13 + -26312), r0);
    goto loc_80126800;
}

loc_801267E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26312));
    r4 = 384;
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r13 + -26312), r0);
    r0 = MemoryInline::FlatRead32((r13 + -26312));
    r0 = (r0 * 384);
    r3 = (r29 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80123FCCu>(ctx);
}

loc_80126800:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r29 + 44), r4);
    MemoryInline::FlatWriteRam32((r29 + 40), r3);
    // inline leaf 0x80127250 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26208));
    // end of inlined leaf 0x80127250
    MemoryInline::FlatWriteRam32((r29 + 48), r3);
    // inline leaf 0x80127FEC (16 guest instruction(s))
}

loc_inl2_0x80127FEC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26192));
}

loc_inl2_0x80127FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80128024;
    }
}

loc_inl2_0x80127FF8:
{
    r5 = MemoryInline::FlatRead32((r13 + -26188));
    r3 = MemoryInline::FlatRead32((r13 + -26184));
    r4 = (r5 + 1);
    r6 = MemoryInline::FlatRead32((r13 + -26180));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r5 * 56);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r13 + -26188), r0);
    r3 = (r6 + r3);
    goto loc_inl2_cont_80127FEC;
}

loc_inl2_0x80128024:
{
    r3 = 0;
}

loc_inl2_cont_80127FEC:
{
    // end of inlined leaf 0x80127FEC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80126820:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80126878;
    }
}

loc_80126824:
{
    r0 = 7;
    ctr = r0;
}

loc_8012682C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r29);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012682C;
    }
}

loc_80126878:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80126638 func_80126638 preserves=true fpr_mask=0x00000000
