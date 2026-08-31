#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8069E8AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8069E8AC;

loc_8069E8AC:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -10592);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 96), 0, 1668u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 238u, (r3 + 334));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069E8D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069EB40;
    }
}

loc_8069E8DC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1652u, (r3 + 1748));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 96));
    r5 = (static_cast<int32_t>(r6) >> 31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8069E8FC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0_subfc_sub_1 = r0;
    r0 = (r6 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r4_adde_right_1 = r4;
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r5 + r4_adde_right_1);
    r4 = (r4 + r4_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = cr;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 235u, (r3 + 331));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r6 = 1;
}

loc_8069E91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069E938;
    }
}

loc_8069E920:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 1664u, (r3 + 1760));
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8069E930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8069E938;
    }
}

loc_8069E934:
{
    r6 = 1;
}

loc_8069E938:
{
}

loc_8069E93C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8069E9C8;
    }
}

loc_8069E940:
{
}

loc_8069E944:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8069E9C8;
    }
}

loc_8069E948:
{
}

loc_8069E94C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8069E9C8;
    }
}

loc_8069E950:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 456u, (r3 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8069E958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069E994;
    }
}

loc_8069E95C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8069E970u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069E978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069E994;
    }
}

loc_8069E97C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = (r30 + 1836);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8069E994u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8069E994:
{
    r3 = MemoryInline::FlatRead32((r30 + 280));
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 760;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x8069E9B4u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 331));
}

loc_8069E9BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069E9C8;
    }
}

loc_8069E9C0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 268), static_cast<uint8_t>(r0));
}

loc_8069E9C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r0 = MemoryInline::FlatRead32((r30 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8069E9D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8069EAA8;
    }
}

loc_8069E9D8:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x8069E9F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1744));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1748));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1752));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r29 = MemoryInline::FlatRead32((r30 + 552));
}

loc_8069EA18:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8069EA24;
    }
}

loc_8069EA1C:
{
    r0 = 0;
    goto loc_8069EA98;
}

loc_8069EA24:
{
    r3 = (r29 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl1_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037604;
    }
}

loc_inl1_0x800375FC:
{
    r0 = 0;
    goto loc_inl1_0x80037618;
}

loc_inl1_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl1_0x80037618:
{
}

loc_inl1_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80037628;
    }
}

loc_inl1_0x80037620:
{
    r3 = r4;
    goto loc_inl1_cont_800375F0;
}

loc_inl1_0x80037628:
{
    r3 = 0;
}

loc_inl1_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_8069EA30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8069EA3C;
    }
}

loc_8069EA34:
{
    r3 = 0;
    goto loc_8069EA40;
}

loc_8069EA3C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8069EA40:
{
}

loc_8069EA44:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8069EA54;
    }
}

loc_8069EA4C:
{
}

loc_8069EA50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8069EA58;
    }
}

loc_8069EA54:
{
    r0 = 1;
}

loc_8069EA58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069EA5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069EA68;
    }
}

loc_8069EA60:
{
    r0 = 0;
    goto loc_8069EA98;
}

loc_8069EA68:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = (r1 + 24);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x8069EA80u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x8069EA94u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
}

loc_8069EA98:
{
}

loc_8069EA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069EAA8;
    }
}

loc_8069EAA0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r0));
}

loc_8069EAA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 105));
}

loc_8069EAB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069EADC;
    }
}

loc_8069EAB4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069EACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069EB40;
    }
}

loc_8069EAD0:
{
    r0 = MemoryInline::FlatRead8((r30 + 331));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069EAD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069EB40;
    }
}

loc_8069EADC:
{
    r29 = MemoryInline::FlatRead32((r30 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8069EAE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069EB38;
    }
}

loc_8069EAE8:
{
    r3 = (r29 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl2_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80037604;
    }
}

loc_inl2_0x800375FC:
{
    r0 = 0;
    goto loc_inl2_0x80037618;
}

loc_inl2_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_inl2_0x80037618:
{
}

loc_inl2_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80037628;
    }
}

loc_inl2_0x80037620:
{
    r3 = r4;
    goto loc_inl2_cont_800375F0;
}

loc_inl2_0x80037628:
{
    r3 = 0;
}

loc_inl2_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_8069EAF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8069EB00;
    }
}

loc_8069EAF8:
{
    r3 = 0;
    goto loc_8069EB04;
}

loc_8069EB00:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8069EB04:
{
}

loc_8069EB08:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8069EB18;
    }
}

loc_8069EB10:
{
}

loc_8069EB14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8069EB1C;
    }
}

loc_8069EB18:
{
    r0 = 1;
}

loc_8069EB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069EB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069EB38;
    }
}

loc_8069EB24:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8069EB38u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8069EB38:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
}

loc_8069EB40:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8069E8AC func_8069E8AC preserves=true fpr_mask=0x00000000
