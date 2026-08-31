#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807625F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807625F0;

loc_807625F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 256);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead8((r3 + 228));
    r29 = 0x808A0000u;
    r31 = r3;
}

loc_80762624:
{
    r29 = (r29 + 14504);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80762A94;
    }
}

loc_8076262C:
{
    r4 = MemoryInline::FlatRead32((r3 + 256));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 256), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_8076263C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762874;
    }
}

loc_80762640:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762650:
{
    r4 = MemoryInline::FlatRead16((r3 + 44));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = (r4 | 2);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8076270C;
    }
}

loc_80762664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762670;
    }
}

loc_80762668:
{
    r3 = (r3 + 72);
    goto loc_807626A0;
}

loc_80762670:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 188);
    r4 = (r31 + 88);
    ctx->lr = 0x80762684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 196));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_807626A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807626AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807626B8;
    }
}

loc_807626B0:
{
    r4 = (r31 + 72);
    goto loc_807626E8;
}

loc_807626B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 176);
    r4 = (r31 + 88);
    ctx->lr = 0x807626CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 180));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 184));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_807626E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_8076270C:
{
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    r28 = 0;
    r27 = 0;
    r29 = 1;
}

loc_8076271C:
{
}

loc_80762720:
{
    r3 = 0;
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_80762738;
    }
}

loc_80762728:
{
    r0 = MemoryInline::FlatRead32((r31 + 180));
}

loc_80762730:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r0))) {
        goto loc_80762738;
    }
}

loc_80762734:
{
    r3 = 1;
}

loc_80762738:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8076273C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762754;
    }
}

loc_80762740:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80762754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80762754:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r3_addr_2 = (r3 + r27);
    r30 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762800;
    }
}

loc_80762774:
{
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r3 = (r1 + 212);
    r4 = (r30 + 88);
    ctx->lr = 0x80762784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 212));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 216));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 220));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 84));
    f30.d = MemoryInline::FlatReadFloat32((r30 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807627AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807627B4;
    }
}

loc_807627B0:
{
    goto loc_807627E0;
}

loc_807627B4:
{
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r3 = (r1 + 200);
    r4 = (r30 + 88);
    ctx->lr = 0x807627C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 200));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 204));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 208));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_807627E0:
{
    r0 = MemoryInline::FlatRead16((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteFloat32((r30 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80762800:
{
    r28 = (r28 + 1);
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
}

loc_8076280C:
{
    r27 = (r27 + 4);
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8076271C;
    }
}

loc_80762814:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    r29 = 1;
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 216), static_cast<uint8_t>(r29));
}

loc_80762828:
{
    MemoryInline::FlatWrite32((r31 + 224), r30);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8076284C;
    }
}

loc_80762830:
{
    r0 = MemoryInline::FlatRead32((r31 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762838:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762844;
    }
}

loc_8076283C:
{
    MemoryInline::FlatWrite32((r31 + 220), r29);
    goto loc_80762EC4;
}

loc_80762844:
{
    MemoryInline::FlatWrite32((r31 + 220), r30);
    goto loc_80762EC4;
}

loc_8076284C:
{
    r3 = MemoryInline::FlatRead32((r31 + 240));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80762860:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8076286C;
    }
}

loc_80762864:
{
    MemoryInline::FlatWrite32((r31 + 220), r30);
    goto loc_80762EC4;
}

loc_8076286C:
{
    MemoryInline::FlatWrite32((r31 + 220), r29);
    goto loc_80762EC4;
}

loc_80762874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80762EC4;
    }
}

loc_80762878:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762880:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8076288C;
    }
}

loc_80762884:
{
    r4 = (r3 + 72);
    goto loc_807628BC;
}

loc_8076288C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 164);
    r4 = (r31 + 88);
    ctx->lr = 0x807628A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 168));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_807628BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807628CC:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762988;
    }
}

loc_807628E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807628EC;
    }
}

loc_807628E4:
{
    r3 = (r31 + 72);
    goto loc_8076291C;
}

loc_807628EC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 128);
    r4 = (r31 + 88);
    ctx->lr = 0x80762900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_8076291C:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762934;
    }
}

loc_8076292C:
{
    r4 = (r31 + 72);
    goto loc_80762964;
}

loc_80762934:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 116);
    r4 = (r31 + 88);
    ctx->lr = 0x80762948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762964:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762988:
{
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    r29 = 0;
    r27 = 0;
    r30 = 1;
}

loc_80762998:
{
}

loc_8076299C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_807629B4;
    }
}

loc_807629A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 180));
}

loc_807629AC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_807629B4;
    }
}

loc_807629B0:
{
    r3 = 1;
}

loc_807629B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807629B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807629D0;
    }
}

loc_807629BC:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807629D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807629D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r3_addr_4 = (r3 + r27);
    r28 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807629EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762A7C;
    }
}

loc_807629F0:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 152);
    r4 = (r28 + 88);
    ctx->lr = 0x80762A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 84));
    f30.d = MemoryInline::FlatReadFloat32((r28 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762A28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762A30;
    }
}

loc_80762A2C:
{
    goto loc_80762A5C;
}

loc_80762A30:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 140);
    r4 = (r28 + 88);
    ctx->lr = 0x80762A40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762A5C:
{
    r0 = MemoryInline::FlatRead16((r28 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762A7C:
{
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32((r28 + 76), f31.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(2));
}

loc_80762A88:
{
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80762998;
    }
}

loc_80762A90:
{
    goto loc_80762EC4;
}

loc_80762A94:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80762A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762EC4;
    }
}

loc_80762AA0:
{
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762AB4;
    }
}

loc_80762AAC:
{
    r3 = (r3 + 72);
    goto loc_80762AE4;
}

loc_80762AB4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 104);
    r4 = (r31 + 88);
    ctx->lr = 0x80762AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762AE4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762B00:
{
    r0 = (r3 | 2);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762BB8;
    }
}

loc_80762B10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762B1C;
    }
}

loc_80762B14:
{
    r3 = (r31 + 72);
    goto loc_80762B4C;
}

loc_80762B1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 68);
    r4 = (r31 + 88);
    ctx->lr = 0x80762B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762B4C:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f30.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762B64;
    }
}

loc_80762B5C:
{
    r4 = (r31 + 72);
    goto loc_80762B94;
}

loc_80762B64:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 56);
    r4 = (r31 + 88);
    ctx->lr = 0x80762B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762B94:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762BB8:
{
    MemoryInline::FlatWriteFloat32((r31 + 76), f31.d);
    r29 = 0;
    r27 = 0;
    r30 = 1;
}

loc_80762BC8:
{
}

loc_80762BCC:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_80762BE4;
    }
}

loc_80762BD4:
{
    r0 = MemoryInline::FlatRead32((r31 + 180));
}

loc_80762BDC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80762BE4;
    }
}

loc_80762BE0:
{
    r3 = 1;
}

loc_80762BE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80762BE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762C00;
    }
}

loc_80762BEC:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80762C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80762C00:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r3_addr_6 = (r3 + r27);
    r28 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762C1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762CAC;
    }
}

loc_80762C20:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 92);
    r4 = (r28 + 88);
    ctx->lr = 0x80762C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 84));
    f30.d = MemoryInline::FlatReadFloat32((r28 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762C60;
    }
}

loc_80762C5C:
{
    goto loc_80762C8C;
}

loc_80762C60:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 80);
    r4 = (r28 + 88);
    ctx->lr = 0x80762C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762C8C:
{
    r0 = MemoryInline::FlatRead16((r28 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 72), f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762CAC:
{
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32((r28 + 76), f31.d);
}

loc_80762CB8:
{
    r27 = (r27 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_80762BC8;
    }
}

loc_80762CC0:
{
    r3 = MemoryInline::FlatRead32((r31 + 256));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 256), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_80762CD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762EC4;
    }
}

loc_80762CD4:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    r3 = MemoryInline::FlatRead16((r31 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762CE0:
{
    f30.d = MemoryInline::FlatReadFloat32((r31 + 248));
    r0 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762D98;
    }
}

loc_80762CF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762CFC;
    }
}

loc_80762CF4:
{
    r3 = (r31 + 72);
    goto loc_80762D2C;
}

loc_80762CFC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r31 + 88);
    ctx->lr = 0x80762D10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762D2C:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762D38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762D44;
    }
}

loc_80762D3C:
{
    r4 = (r31 + 72);
    goto loc_80762D74;
}

loc_80762D44:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x80762D58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762D74:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80762D98:
{
    MemoryInline::FlatWriteFloat32((r31 + 76), f30.d);
    r29 = 0;
    r27 = 0;
    r30 = 1;
}

loc_80762DA8:
{
}

loc_80762DAC:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_80762DC4;
    }
}

loc_80762DB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 180));
}

loc_80762DBC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_80762DC4;
    }
}

loc_80762DC0:
{
    r3 = 1;
}

loc_80762DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80762DC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762DE0;
    }
}

loc_80762DCC:
{
    r12 = MemoryInline::FlatRead32((r31 + 176));
    r3 = (r31 + 176);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80762DE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80762DE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r3_addr_8 = (r3 + r27);
    r28 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762DFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80762E8C;
    }
}

loc_80762E00:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 44);
    r4 = (r28 + 88);
    ctx->lr = 0x80762E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 84));
    f31.d = MemoryInline::FlatReadFloat32((r28 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762E38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762E40;
    }
}

loc_80762E3C:
{
    goto loc_80762E6C;
}

loc_80762E40:
{
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    r3 = (r1 + 32);
    r4 = (r28 + 88);
    ctx->lr = 0x80762E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762E6C:
{
    r0 = MemoryInline::FlatRead16((r28 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 84), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteFloat32((r28 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 76), f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80762E8C:
{
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32((r28 + 76), f30.d);
}

loc_80762E98:
{
    r27 = (r27 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_80762DA8;
    }
}

loc_80762EA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 188), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80762EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80762EC4;
    }
}

loc_80762EB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r31 + 204), r0);
}

loc_80762EC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 236), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 256));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807625F0 func_807625F0 preserves=false fpr_mask=0xC0000000
